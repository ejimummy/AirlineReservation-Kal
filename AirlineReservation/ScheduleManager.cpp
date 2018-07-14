#include "scheduleManager.h"
#include "stdafx.h"
//#include "fileHelper.h"
#include<iostream>
#include<string>
#include <vector>
#include "Reservation.h"
using std::string;
using namespace std;

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
	Ticket myTicket(reservationId);
	cout << "Thank you for checking in. Below is your ticket to board.";
	displayTicket(reservationId);
}

 int ScheduleManager::reserveFlight(Passenger p, Flight f)
{
	 //call retrieveAllReservations and get the last passenger ID used 
	 vector<Reservation> AllReservations = FileHelper.retrieveAllReservations();
	 int rid = AllReservations.size() + 1;
	 string seatnumber;
	 //need to update seat number
	Reservation r = Reservation(rid, f, p,seatnumber );
	r = FileHelper.addReservation(r);
	
	return rid;
}
