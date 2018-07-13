#include "scheduleManager.h"
#include "stdafx.h"
//#include "fileHelper.h"
#include<iostream>
#include<string>
using std::string;
using namespace std;

class ScheduleManager {

public:
	void displayTicket(int reservationId)
	{
		//use FileHelper to retrieve the ticket that corresponds to the reservation number
		//if no ticket exists give error, did they remember to check in?
		//display ticket information including Name, Data, Flight#, Seat#, Destination city, and time
	}

	void passengerCheckin(int reservationId)
	{
		Ticket myTicket(reservationId);
		cout << "Thank you for checking in. Below is your ticket to board.";
		displayTicket(reservationId);
	}

};