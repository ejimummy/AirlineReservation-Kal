#include "stdafx.h"
#include "ticket.h"
//#include "fileHelper.h"
#include<iostream>
#include<string>
using std::string;
using namespace std;


class Ticket{
public:
	Ticket()
	{

	}

	Ticket(int reservationId) {
		//open reservation file using filehelper and search for reservation number
		//get the lastTicketId in the file and set mLastTicketId
		//create new ticket id
		//get the Passenger Flight, and seat for the reservation and set properties
		//save ticket to file
	}

	~Ticket()
	{
	}

	//getters and setters
	int getTicketId()
	{
		return 0;
	}

	void setTicketId()
	{
		mTicketId = mLastTicketId++;
	}

	int getTicketId() 
	{
		return mTicketId;
	}

	Flight getReservedFlight() 
	{
		return mReservedFlight;
	}

	void setReservedFlight(Flight flight) 
	{
		mReservedFlight = flight;
	}

	Passenger getPassenger() 
	{
		
		return mPassenger;
	}

	void setPassenger(Passenger p) 
	{
		mPassenger = p;
	}

	string getSeatNumber() 
	{
		return mSeatNumber;
	}

	void setSeatNumber(string seatNumber) 
	{
		mSeatNumber = seatNumber;
	}

private:
	int mLastTicketId;
	int mTicketId;
	Reservation mReservation;
	Flight mReservedFlight;
	Passenger mPassenger;
	string mSeatNumber;
	//Bitmap mQrCode;
};