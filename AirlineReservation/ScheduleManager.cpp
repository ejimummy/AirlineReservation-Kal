#include "stdafx.h"
#include "scheduleManager.h"
#include "flight.h"
#include "Passenger.h"
#include "Reservation.h"
#include<iostream>
#include<string>
#include <vector>
#include<unordered_map>
#include<ctime>
#include <fstream>
#include<conio.h>
#include<iomanip>

using std::string;
using namespace std;
namespace AirlineReservation {
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
			if (AllFlights[i].getFlightId() == selectedFlightID) {

				//display flight chosen by user
				cout << "You chose Flight ";
				AllFlights[i].displayFlight();
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


	void ScheduleManager::addFlightInformation() {
		string tempDate, departureAirport, arrivalAirport, arrivalTime, departureTime, origin, destination, flightNumber;
		cout << "Enter Flight Number" << endl;
		cin >> flightNumber;
		cout << "Enter Origin " << endl;
		cin >> origin;
		cout << "Enter Destination " << endl;
		cin >> destination;
		cout << "Enter Date(MM/DD/YYYY)" << endl;
		cin >> tempDate;
		cout << "Enter Departure Time(HH:MM AM/PM)" << endl;
		cin >> departureTime;
		cout << "Enter Arrival Time(HH:MM AM/PM)" << endl;
		cin >> arrivalTime;
		cout << "Enter Departure airport " << endl;
		cin >> departureAirport;
		cout << "Enter Arrival airport " << endl;
		cin >> arrivalAirport;

		//cout
		Flight theFlight;
		//Flight theFlight(1,tempDate, "9:00PM", "11:00Am", "2A", "2B","la","ca");
		//theFlight.setAirrvalAirport(airportsEnum :: SEA);
		theFlight.setFlightId(mAllFlights.size() + 1);
		theFlight.setFlightNumber(flightNumber);
		theFlight.setDate(tempDate);
		theFlight.setdepartureAirport(departureAirport);
		theFlight.setAirrvalAirport(arrivalAirport);
		theFlight.setArrivalTime(arrivalTime);
		theFlight.setDepartureTime(departureTime);
		theFlight.setOrigin(origin);
		theFlight.setDestination(destination);

		theFlight.addFlight();
		mAllFlights.push_back(theFlight);
		//writeFlightVectorToFile(mAllFlights);

	}

	void ScheduleManager::deleteFlight(int flightId)
	{
		if (mAllFlights.size() <= 0) {
			cout << "There are no flights to delete" << endl;
			return;
		}
		for (unsigned int i = 0; i < mAllFlights.size(); i++) {
			if (mAllFlights[i].getFlightId() == flightId) {
				mAllFlights.erase(mAllFlights.begin() + i);
				cout << "Flight with FlightId: " << flightId << " was successfully deleted" << endl;
				return;
			}
		}
		cout << "This flight id doesn't exist!" << endl;
		cout << "To go back to main menu enter'0'" << endl;
		cout << "Please enter the correct FlightId" << endl;

		cin >> flightId;
		if (flightId == 0)
			return;
		else
			deleteFlight(flightId);


	}

	void ScheduleManager::dummyFlightInformation() {
		Flight theFlight(1, "10/08/2018", "10:10 AM", "9:00PM", "2A", "2B", "SEA", "LA");
		theFlight.setFlightId(mAllFlights.size() + 1);
		theFlight.addFlight();
		mAllFlights.push_back(theFlight);
	}

	//Dsiplay all Flight Information
	void ScheduleManager::displayAllFlights() const {
		//line();
		cout << setw(49) << "DISPALY FLIGHTS INFORMATION \n";
		//line();
		cout << setw(8) << "FlightId" << setw(15) << "Date" << setw(15) << "Depart Time"
			<< setw(15) << "ArrivalTime" << setw(15) << "DepartGate" << setw(15) << "Arrival Gate" << setw(15) << "Dapart_Airport" << setw(20) << "Arrival Airport\n";
		//line();
		for (const auto& flight : mAllFlights) {
			flight.displayFlight();
		}
		//readFlightVectorFromFile();
	}

	void ScheduleManager::writeFlightVectorToFile(vector<Flight> allFlights) {
		fstream myfile;
		myfile.open("Flight.txt", ios::out);
		myfile.write((char*)&allFlights, sizeof(allFlights));

		myfile.seekg(0);
		myfile.close();
	}
	void ScheduleManager::readFlightVectorFromFile() const {
		vector<Flight> allFlights;
		fstream myfile;
		myfile.open("Flight.txt", ios::in);
		myfile.read(reinterpret_cast<char *>(&allFlights), sizeof(mAllFlights));
		for (unsigned int i = 0; i < allFlights.size(); i++) {
			allFlights[i].displayFlight();
		}

	}

	vector<Flight> ScheduleManager::searchFlights(const string& date, const string& from, const string& to)  {
	
		vector<Flight> results;

		for (Flight& flight : mAllFlights) {
			if (/*flight.getDate()==date   &&*/
				flight.getOrigin() == from && flight.getDestination() == to) {
				results.push_back(flight);
			}
		}
		if (results.size() > 0)
			return results;

		throw logic_error("No flight found.");
	
	}

	void ScheduleManager::uploadFlightsFromSource()  {
		Flight theFlight(1, "10/08/2018", "10:10 AM", "9:00PM", "SEA", "LA", "Los Angeles Intl", "Tacoma Intl");	
		theFlight.setFlightId(mAllFlights.size() + 1);
		theFlight.addFlight();
		mAllFlights.push_back(theFlight);

		Flight theFlight1(1, "10/08/2018", "11:10 AM", "10:00PM", "SEA", "LA", "Los Angeles Intl", "Tacoma Intl");
		
		theFlight1.setFlightId(mAllFlights.size() + 1);
		theFlight1.addFlight();
		mAllFlights.push_back(theFlight1);

		Flight theFlight2(1, "11/08/2018", "11:10 AM", "11:00PM", "LA", "SEA", "Tacoma Intl", "Los Angeles Intl");
		
		theFlight2.setFlightId(mAllFlights.size() + 1);
		theFlight2.addFlight();
		mAllFlights.push_back(theFlight2);

		Flight theFlight3(1, "10/08/2018", "11:10 AM", "12:00PM", "LA", "SEA", "Tacoma Intl", "Los Angeles Intl");
		theFlight3.setFlightId(mAllFlights.size() + 1);
		theFlight3.addFlight();
		mAllFlights.push_back(theFlight3);
	}

}

