#include "stdafx.h"
//#include "fileHelper.h"

#include <vector>
#include<iostream>
#include<string>
#include "scheduleManager.h"
#include "flight.h"
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
	void ScheduleManager::AddFlightInformation() const {
		Flight theFlight;
		theFlight.setFlightId(mAllFlights.size()+1);
		theFlight.addFlight();
		mAllFlights.push_back(theFlight);
	
	}
	//Dsiplay all Flight Information
	void ScheduleManager:: displayAllFlights() const {
		cout << " Display all flights info from vector" << endl;
		for (const auto& flight : mAllFlights) {
			flight.displayFlight();
		}
	}
}
