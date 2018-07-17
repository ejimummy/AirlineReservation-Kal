#include "stdafx.h"
#include "flight.h"
#include<iostream>
using namespace std;
namespace AirlineReservation {
	/*Flight::Flight(const int id, const std::string date, const std::string departureTime, const std::string arrivalTime, const std::string departureGate,
		const std::string arrivalGate)
	{
		mflightId = id;
		mdate = date;
		mdepartureTime = departureTime;
		marrivalTime = arrivalTime;
		mdepartureGate = departureGate;
		marrivalGate = arrivalGate;
		//mdepartureAirport = departureAirport;
		//mairrvalAirport = airrvalAirport;
	}*/

	Flight::Flight(const int id, const std::string date, const std::string departureTime, const std::string arrivalTime, const std::string departureGate,
		const std::string arrivalGate, const airportsEnum departureAirport, const airportsEnum airrvalAirport)
	{
		mflightId = id;
		mdate = date;
		mdepartureTime = departureTime;
		marrivalTime = arrivalTime;
		mdepartureGate = departureGate;
		marrivalGate = arrivalGate;
		mdepartureAirport = departureAirport;
		mairrvalAirport = airrvalAirport;
	}

	void Flight::displayFlight() const
	{
		const char airport[][10]={ "SEA", "HYD", "DEL","DWT", "KOL","LA" };
		cout << "Flight Id         :" << mflightId << endl;
		cout << "Date              :" << mdate << endl;
		cout << "DepartureTime     :" << mdepartureTime << endl;
		cout << "ArrivalTime       :" << marrivalTime << endl;
		cout << "Departure Gate    :" << mdepartureGate << endl;
		cout << "Arrival Gate      :" << marrivalGate << endl;
		cout << "Departure Airport :" << airport[mdepartureAirport] << endl;
		cout << "Arrival Airport   :" << airport[mairrvalAirport] << endl;
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
	
	void Flight :: setAirplaneName(std::string& airplaneName) {
		mAirplaneName = airplaneName;
	}
	string& Flight :: getAirplaneName() {
		return mAirplaneName;
	}

	void Flight :: setFlightNumber(std::string& flightNumber) {
		mFlightNumber = flightNumber;
	}
	string& Flight :: getFlightNumber() {
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

	void Flight::setDepartureGate(const string& departureGate)
	{
		mdepartureGate = departureGate;
	}

	const string& Flight::getDepartureGate() const
	{
		return mdepartureGate;
	}

	void Flight::setArrivalGate(const string& arrivalGate)
	{
		marrivalGate = arrivalGate;
	}

	const string& Flight::getArrivalGate() const
	{
		return marrivalGate;
	}

	void Flight::setdepartureAirport(const airportsEnum departureAirport)
	{
		mdepartureAirport = departureAirport;
	}

	const airportsEnum  Flight::getDepartureAirport() const
	{
		return mdepartureAirport;
	}

	void Flight::setAirrvalAirport(const airportsEnum airrvalAirport)
	{
		mairrvalAirport = airrvalAirport;
	}

	const airportsEnum Flight::getAirrvalAirpot() const
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

