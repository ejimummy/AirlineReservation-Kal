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
		airportsEnum  airPortName = airportsEnum::LA;
		Flight theFlight(1, time(0), time(0), time(0), "2A", "2B", airPortName, airPortName);
		theFlight.setAirrvalAirport(airportsEnum :: SEA);
		theFlight.setFlightId(mAllFlights.size()+1);
		theFlight.addFlight();
		mAllFlights.push_back(theFlight);
		//writeFlightVectorToFile(mAllFlights);
	
	}
	
	//Dsiplay all Flight Information
	void ScheduleManager:: displayAllFlights() const {
		cout << " Display all flights info from vector" << endl;
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
