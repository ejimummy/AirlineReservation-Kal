#include "stdafx.h"
#include "flight.h"
#include<iostream>
#include<iomanip>

using namespace std;
namespace AirlineReservation {
	Flight::Flight(const int id, const std::string date, const std::string departureTime, const std::string arrivalTime, const std::string origin,
	const std::string destination, const std::string departureAirport, const std::string airrvalAirport)
	{
	mflightId = id;
	mdate = date;
	mdepartureTime = departureTime;
	marrivalTime = arrivalTime;
	morigin = origin;
	mdestination = destination;
	mdepartureAirport = departureAirport;
	mairrvalAirport = airrvalAirport;
	}
	void Flight::displayFlight() const
	{
		
		const char airport[][10]={ "SEA", "HYD", "DEL","DWT", "KOL","LA" };
		
		cout << setw(8) << mflightId << setw(15) << mdate << setw(15) << mdepartureTime
			<< setw(15) << marrivalTime << setw(12) << morigin << setw(15) << mdestination << setw(15) << mdepartureAirport << setw(20) << mairrvalAirport<<"\n";
	
	}
	void Flight::addFlight() const
	{
		/*cout << "Enter Depature Date";
		cin >> mdate;
		cout<<"Enter Depature Time"
		*/

	}


	void Flight::setFlightId(int id)
	{
		mflightId = id;
	}

	int Flight::getFlightId() const
	{
		return mflightId;
	}

	void Flight::setAirplaneName(std::string& airplaneName) {
		mAirplaneName = airplaneName;
	}
	string& Flight::getAirplaneName() {
		return mAirplaneName;
	}

	void Flight::setFlightNumber(std::string& flightNumber) {
		mFlightNumber = flightNumber;
	}
	string& Flight::getFlightNumber() {
		return mFlightNumber;
	}


	void Flight::setDate(const std::string date)
	{
		mdate = date;
	}

	const std::string Flight::getDate() const
	{
		return mdate;
	}

	void Flight::setDepartureTime(const std::string departureTime)
	{
		mdepartureTime = departureTime;
	}

	const std::string Flight::getDepartureTime() const
	{
		return mdepartureTime;
	}

	void Flight::setArrivalTime(const std::string arrivalTime)
	{
		marrivalTime = arrivalTime;
	}

	const std::string Flight::getArrivalTime() const
	{
		return marrivalTime;
	}

	void Flight::setOrigin(const string& departureGate)
	{
		morigin = departureGate;
	}

	const string& Flight::getOrigin() const
	{
		return morigin;
	}

	void Flight::setDestination(const string& arrivalGate)
	{
		mdestination = arrivalGate;
	}

	const string& Flight::getDestination() const
	{
		return mdestination;
	}

	void Flight::setdepartureAirport(const std::string& departureAirport)
	{
		mdepartureAirport = departureAirport;
	}

	const std::string&  Flight::getDepartureAirport() const
	{
		return mdepartureAirport;
	}

	void Flight::setAirrvalAirport(const std::string& airrvalAirport)
	{
		mairrvalAirport = airrvalAirport;
	}

	const std::string& Flight::getAirrvalAirpot() const
	{
		return mairrvalAirport;
	}

	void Flight::setFlightStatus(const flightstatusEnum flightStatus)
	{
		mflightStatus = flightStatus;
	}

	const flightstatusEnum Flight::getFlightStatus()
	{
		return mflightStatus;
	}

}



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


