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
	/*void ScheduleManager::addFlightInformation()  {
		airportsEnum  airPortName = airportsEnum::LA;
		Flight theFlight(1, time(0), time(0), time(0), "2A", "2B", airPortName, airPortName);
		
		theFlight.setAirrvalAirport(airportsEnum :: SEA);
		theFlight.setFlightId(mAllFlights.size()+1);
		theFlight.addFlight();
		mAllFlights.push_back(theFlight);
		writeFlightVectorToFile(mAllFlights);
	}*/


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

	void ScheduleManager :: dummyFlightInformation() {
		Flight theFlight(1, "10/08/2018", "10:10 AM", "9:00PM", "2A", "2B", "SEA", "LA");
		theFlight.setFlightId(mAllFlights.size() + 1);
		theFlight.addFlight();
		mAllFlights.push_back(theFlight);
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
