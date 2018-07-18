#pragma once
#include <string>
#include <iostream>
#include<array>
#include <vector>

namespace FlightbookingApp {
	struct Seat {
		//char status;
		//bool isAvailable;
		char status = '*';
		bool isAvailable = true;
		//static constexpr char status = '*';
		//static constexpr bool isAvailable = true;
	};

	class Plane
	{
	public:
		Plane() = default;
		//Plane(std::string name,int bRows, int bCols, int eRows, int eCols);
		Plane(std::string name, int busSeats, int economySeats);
		~Plane();

		bool checkAvailabilityOfSeats();
		int bookSeat(int seatNo);
		void displayAllSeats();

	private:
		//int mBusRows, mBusCols, mEconomyRows, mEconomyCols;
		int mBusSeats, mEconomySeats, mAvailableSeats;
		std::vector<Seat> x;
		Seat *economy;
		Seat  *business;
		std::string mPlaneName;
	};

}


