#include "stdafx.h"
//#include "fileHelper.h"

#include <vector>
#include<iostream>
#include<string>
#include "scheduleManager.h"
#include "flight.h"
#include<ctime>
#include <fstream>
using namespace std;


namespace AirlineReservation {
	std::vector<Flight> mAllFlights;
	
	void displayTicket(int reservationId)
	{
		//use FileHelper to retrieve the ticket that corresponds to the reservation number
		//if no ticket exists give error, did they remember to check in?
		//display ticket information including Name, Data, Flight#, Seat#, Destination city, and time
	}

	void cancelReservationId()
	{
	}

	void passengerCheckin(int reservationId)
	{
		/*Ticket myTicket(reservationId);
		cout << "Thank you for checking in. Below is your ticket to board.";
		displayTicket(reservationId);*/
	}
	//Add  flight Information to vector
	void ScheduleManager::addFlightInformation() const {
		string tempDate, departureAirport, arrivalAirport, arrivalTime,departureTime,arrivalGate,DepartureGate;
		cout << "Enter Departure airport "<<  endl;
		cin >> departureAirport;
		cout << "Enter Arrival airport " << endl;
		cin >> arrivalAirport;
		cout << "Enter Date(MM/DD/YYYY)" << endl;
		cin >> tempDate;
		cout << "Enter Departure Time(HH:MM AM/PM)"<<endl;
		cin >> departureTime;
		cout << "Enter Arrival Time(HH:MM AM/PM)"<<endl;
		cin >> arrivalTime;
		cout << "Enter Departure Gate " << endl;
		cin >> DepartureGate;
		cout << "Enter Arrival Gate " << endl;
		cin >> arrivalGate;
		//cout
		Flight theFlight;
		//Flight theFlight(1,tempDate, "9:00PM", "11:00Am", "2A", "2B","la","ca");
		//theFlight.setAirrvalAirport(airportsEnum :: SEA);
		theFlight.setFlightId(mAllFlights.size()+1);
		theFlight.setDate(tempDate);
		theFlight.setdepartureAirport(departureAirport);
		theFlight.setAirrvalAirport(arrivalAirport);
		theFlight.setArrivalTime(arrivalTime);
		theFlight.setDepartureTime(departureTime);
		theFlight.setArrivalGate(arrivalGate);
		theFlight.setDepartureGate(DepartureGate);

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
		for (unsigned int i = 0; i < mAllFlights.size();i++) {
			if (mAllFlights[i].getFlightId()==flightId) {
				mAllFlights.erase(mAllFlights.begin()+i);
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
	
	//Dsiplay all Flight Information
	void ScheduleManager:: displayAllFlights() const {
		if (mAllFlights.size() <= 0) {
			cout << "There are no Flights" << endl;
			return;
		}
		cout << " Display all flights information" << endl;
		//mAllFlights = readFlightVectorFromFile();
		/*for (unsigned int i = 0; i < mAllFlights.size(); i++) {
			mAllFlights[i].displayFlight();
		}*/
		for (const auto& flight : mAllFlights) {
			flight.displayFlight();
		}
		
	}
	/*
	void ScheduleManager :: writeFlightVectorToFile(vector<Flight> allFlights) const{
		fstream myfile;
		myfile.open("Flight.txt", ios::out);
		myfile.write((char*)&allFlights, sizeof(allFlights));
		//myfile.write((char*)&p1, sizeof(p1));
		myfile.seekg(0);
		myfile.close();
	}
	vector<Flight> ScheduleManager :: readFlightVectorFromFile() const {
		vector<Flight> allFlights;
		fstream myfile;
		myfile.open("Flight.txt", ios::in);
		myfile.read(reinterpret_cast<char *>(&allFlights), sizeof(allFlights));
		for (unsigned int i = 0; i < allFlights.size(); i++) {
			allFlights[i].displayFlight();
		}
	}*/
}
