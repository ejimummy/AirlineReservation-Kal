#include "stdafx.h"
#include "scheduleManager.h"
#include<iostream>
#include<string>
#include <vector>
#include "flight.h"
#include "Passenger.h"
#include "Reservation.h"
#include<unordered_map>

using std::string;
using namespace std;

//variable declarations
unsigned int pid = -1;
string pfname, plname, paddress, pcity, pstate, pzipcode, pphonenumber, pemailaddress;
Passenger p;
Flight f;
//vectors for saving data
vector<Flight> AllFlights;
vector<Passenger> AllPassengers;
vector<Reservation> AllReservations;

void ScheduleManager::displayTicket(const Ticket& ticket)
{
	//displays a ticket when the ticket is known
	cout << "Name: " << ticket.getPassengerName() << " Date: " << ticket.getFlightDate();
}

void ScheduleManager::displayTicket(int reservationId)
{
	
		std::unordered_map<int, Ticket>::const_iterator it = ALLTickets.find(reservationId);
		
			if (it != ALLTickets.end())
			{
				displayTicket(it->second);
			}

			else {
				cout << "Invalid reservation number. Please check your records and verify you have already checked-in.";
			}	
	
}


void ScheduleManager::cancelReservationId()
{
}

void ScheduleManager::passengerCheckin(int reservationId)
{
	Reservation target;
	target.setReservedID(reservationId);

	auto it = std::find(AllReservations.begin(), AllReservations.end(), target);
	if (it != AllReservations.end())
	{
		
		//create ticket, pass in found reservation object
		Ticket passengerTicket(*it);

		//add the ticket to the map
		ALLTickets.insert(std::make_pair(reservationId, passengerTicket));

		//display ticket for the user
		displayTicket(passengerTicket);
	}
		
	else {
		cout << "Invalid reservation number. Please check your records and try check-in again.";
	}
	
}

Reservation ScheduleManager::reserveFlight()
{
	int selectedFlightID;
	
	//trying to create dummy f below, it is erroring
	//Flight dummyflight(1, time(0), time(0), time(0), "2A", "16B", 0, 1);
	//AllFlights.push_back(dummyflight);


	//select a flight
	cout << "Make selection by FlightNumber";
	cin >> selectedFlightID;
	
	//search for filght object of selected flight id, error not sure why
	for (unsigned int i = 0; i < AllFlights.size(); i++) {
		if (AllFlights[i].getId() == selectedFlightID) {

			//display flight chosen by user
			cout << "You chose Flight ";
			AllFlights[i].display();
			f = AllFlights[i];
			break;
		}
	}

	//need to writecode out how to choose seat. if using hashmap code will be something like thing
	/*for (int j = 0; j < seats.count(); j++) {
	if (f.airplane.seats[i].Value == false) {//not filled
	f.airplane.seats[i].Value = true //fill it
	seatnumber = f.airplane.seats[i].Key
	}
	}
	*/
	//will giveit a dummy seat for now
	string seatnumber = "1A";

	//get user details to create passenger;
	cout << "Let us get your personal details" << endl;
	cout << "Enter First Name: "; cin >> pfname;
	cout << "Enter Last Name: "; cin >> plname;
	cout << "Enter Address: "; cin >> paddress;
	cout << " Enter City"; cin >> pcity;
	cout << " Enter State"; cin >> pstate;
	cout << "Enter Zipcode"; cin >> pzipcode;
	cout << "Enter Phone Number"; cin >> pphonenumber;
	cout << "Enter email Address"; cin >> pemailaddress;

	//call retrieveAllPassengers and get the last passenger ID used 
	pid = AllPassengers.size() + 1;

	//add user input into Passenger object
	p.setID(pid); p.setFirstName(pfname); p.setLastName(plname); p.setAddress(paddress);
	p.setCity(pcity); p.setState(pstate); p.setZipCode(pzipcode); p.setPhoneNumber(pphonenumber);
	p.setEmailAddress(pemailaddress);

	//write new passenger into AllPassengers vector 
	AllPassengers.push_back(p);

	//call retrieveAllReservations and get the last reservation ID used 

	auto rid = AllReservations.size() + 1;

	//create reservation
	Reservation r = Reservation(rid, f, p, seatnumber);
	//add to all reservations
	AllReservations.push_back(r);
	
	return r;
}



