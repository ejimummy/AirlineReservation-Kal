#include "stdafx.h"
//#include "fileHelper.h"

//#include <vector>
#include<iostream>
#include<iomanip>
#include<string>
#include<conio.h>
#include "scheduleManager.h"
#include<ctime>
#include <fstream>
using namespace std;


namespace AirlineReservation {
	void line() {
		for (int i = 1; i<60; i++)
			cout << "--";
		cout << "\n";

	}
	
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
	void ScheduleManager::addFlightInformation()  {
		airportsEnum  airPortName = airportsEnum::LA;
		Flight theFlight(1, time(0), time(0), time(0), "2A", "2B", airPortName, airPortName);
		
		theFlight.setAirrvalAirport(airportsEnum :: SEA);
		theFlight.setFlightId(mAllFlights.size()+1);
		theFlight.addFlight();
		mAllFlights.push_back(theFlight);
		writeFlightVectorToFile(mAllFlights);
	}
	
	//Dsiplay all Flight Information
	void ScheduleManager:: displayAllFlights() const {
		line();
		cout << setw(49) << "DISPALY FLIGHTS INFORMATION \n";
		line();
		cout << setw(8) << "FlightId" << setw(15) << "Date" << setw(15) << "Depart Time"
			<< setw(15) << "ArrivalTime" << setw(15) << "DepartGate"<<setw(15) << "Arrival Gate" << setw(15) << "Dapart_Airport" << setw(20) << "Arrival Airport\n";
		line();
		for (const auto& flight : mAllFlights) {
			flight.displayFlight();
		}
		//readFlightVectorFromFile();
	}
	
	void ScheduleManager :: writeFlightVectorToFile(vector<Flight> allFlights){
		fstream myfile;
		myfile.open("Flight.txt", ios::out);
		myfile.write((char*)&allFlights, sizeof(allFlights));
		
		myfile.seekg(0);
		myfile.close();
	}
	void ScheduleManager :: readFlightVectorFromFile() const{
		vector<Flight> allFlights;
		fstream myfile;
		myfile.open("Flight.txt", ios::in);
		myfile.read(reinterpret_cast<char *>(&allFlights), sizeof(mAllFlights));
		for (unsigned int i = 0; i < allFlights.size(); i++) {
			allFlights[i].displayFlight();
		}
	}
}
