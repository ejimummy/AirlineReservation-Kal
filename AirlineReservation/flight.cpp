#include "stdafx.h"
#include "flight.h"
#include<iostream>
#include<string>
using std::string;
using namespace std;

Flight::Flight(const int id, const time_t date, const time_t departureTime, const time_t arrivalTime, const std::string	departureGate,
	const std::string arrivalGate, const airportsEnum departureAirport, const airportsEnum airrvalAirport)
{
	 mflightId = id;
	 mdate=date;
	 mdepartureTime=departureTime;
	 marrivalTime=arrivalTime;
	 mdepartureGate=departureGate;
	 marrivalGate=arrivalGate;
	 mdepartureAirport=departureAirport;
	 mairrvalAirport= airrvalAirport;

}

void Flight::display() const
{
	cout << "Flight Id:        " << mflightId << endl;
	cout << "Date              " << mdate << endl;
	cout << "DepartureTime:    " << mdepartureTime << endl;
	cout << "ArrivalTime:      " << marrivalTime << endl;
	cout << "Departure Gate:   " << mdepartureGate << endl;
	cout << "Arrival Gate:     " << marrivalGate << endl;
	cout << "Departure Airport:" << mdepartureAirport << endl;
	cout << "Arrival Airport:  " << mairrvalAirport << endl;
}

void Flight::setId(int id)
{
	mflightId = id;
}

int Flight::getId() const
{
	return mflightId;
}

void Flight::setDate(const time_t date)
{
	mdate = date;
}

const time_t Flight::getDate() const
{
	return mdate;
}

void Flight::setDepartureTime(const time_t departureTime)
{
	mdepartureTime = departureTime;
}

const time_t Flight::getDepartureTime() const
{
	return mdepartureTime;
}

void Flight::setArrivalTime(const time_t arrivalTime)
{
	marrivalTime = arrivalTime;
}

const time_t Flight::getArrivalTime() const
{
	return marrivalTime;
}

void Flight::setDepartureGate(const string & departureGate)
{
	mdepartureGate = departureGate;
}

const string & Flight::getDepartureGate() const
{
	return mdepartureGate;
}

void Flight::setArrivalGate(const string & arrivalGate)
{
	marrivalGate = arrivalGate;
}

const string & Flight::getArrivalGate() const
{
	return marrivalGate;
}

void Flight::setdepartureAirport(const airportsEnum departureAirport)
{
	mdepartureAirport = departureAirport;
}

const Flight::airportsEnum Flight::getDepartureAirport() const
{
	return mdepartureAirport;
}

void Flight::setAirrvalAirport(const airportsEnum airrvalAirport)
{
	mairrvalAirport = airrvalAirport;
}

const Flight::airportsEnum Flight::getAirrvalAirpot() const
{
	return mairrvalAirport;
}

void Flight::setFlightStatus(const flightstatusEnum flightStatus)
{
	mflightStatus = flightStatus;
}

const Flight::flightstatusEnum Flight::getFlightStatus()
{
	return mflightStatus;
}


