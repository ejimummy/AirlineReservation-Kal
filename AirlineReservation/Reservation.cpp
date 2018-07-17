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
	cout << "Here is your reservation" << endl;
	cout << "=================================" << endl;
	cout << " Reserved Flight: ";
	mReservedFlight.display();
	cout << " Reserved Passanger: ";
	mReservedPassenger.display();
	cout << endl;
	cout << " Reserved Seat: ";
	cout << mReservedSeatNumber;
	cout << endl;
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

//defining equality so finidng by reservationId works in a collection
bool Reservation::operator==(const Reservation& other) const{
	return this->mID == other.mID;
}