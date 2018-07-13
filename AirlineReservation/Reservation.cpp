#include "stdafx.h"
#include "Reservation.h"
#include<iostream>
#include<string>
using std::string;
using namespace std;


Reservation::Reservation(const int id, const Flight & flight, const Passenger & passenger, const string & seatNumber)
{
	mID = id;
	mReservedFlight = flight;
	mReservedPassenger = passenger;
	mReservedSeatNumber = seatNumber;
}

void Reservation::display() const
{
	//not sure how to write this with flight and player. 
	//what exactly do we want to see in a reservation
	//mReservedFlight.display();
	cout << " ";
	mReservedPassenger.display();
	cout << " ";
	cout << mReservedSeatNumber;
}

void Reservation::setReservedID(int id)
{
	mID = id;
}

int Reservation::getReservedID() const
{
	return mID;
}

void Reservation::setReservedFlight(const Flight & flight)
{
	mReservedFlight = flight;
}

const Flight & Reservation::getReservedFlight() const
{
	return mReservedFlight;
}

void Reservation::setReservedPassenger(const Passenger & passenger)
{
	mReservedPassenger = passenger;
}

const Passenger & Reservation::getReservedPassenger() const
{
	return mReservedPassenger;
}

void Reservation::setSeatNumber(const string & seatNumber)
{
	mReservedSeatNumber = seatNumber;
}

const string & Reservation::getSeatNumber() const
{
	return mReservedSeatNumber;
}
