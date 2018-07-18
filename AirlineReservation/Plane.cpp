#include "stdafx.h"
#include <string>
#include <iostream>
#include "Plane.h"
#include <algorithm>
#include <iterator>
#include <array>

using namespace std;


namespace FlightbookingApp {
	/******
	Plane::Plane(std::string name, int bRows, int bCols, int eRows, int eCols)
	:mBusRows(bRows),mBusCols(bCols),mEconomyRows(eRows),mEconomyCols(eCols),
	mPlaneName(name) {
	economy[eRows*eCols];
	business[bRows*bCols];
	}*******/

	Plane::Plane(std::string name, int busSeats, int economySeats)
		:mBusSeats(busSeats), mEconomySeats(economySeats), mPlaneName(name),
		mAvailableSeats(mEconomySeats) {
		//economy = (Seat*)malloc(economySeats * sizeof(Seat));
		//Seat x[economySeats];
		//economy = x;
		//x.reserve(mEconomySeats);
		//std::vector<Seat> x(10);
		economy = new Seat[mEconomySeats];
		//delete[] economy;
		//business = new Seat[mBusSeats];
		//delete[] business;

	}

	Plane::~Plane()
	{
		if (economy != NULL)
			delete[] economy;
		if (business != NULL)
			delete[] business;

		cout << "destr called" << endl;
	}
	void Plane::displayAllSeats()
	{
		int count = 5;
		for (int i = 0; i < mEconomySeats; i++)
		{


			cout << economy[i].status << " ";


		}
	}
	bool Plane::checkAvailabilityOfSeats()
	{

		if (mAvailableSeats > 0)
		{
			return true;
		}
		else
		{
			return false;
		}

	}

	int Plane::bookSeat(int seatNo)
	{
		if (economy[seatNo].isAvailable) {
			cout << "The seat has been reserved" << endl;
			economy[seatNo].isAvailable = false;
			mAvailableSeats--;
			return seatNo;
		}
		else {
			cout << "choose another one" << endl;
			return 0;
		}

	}




}
