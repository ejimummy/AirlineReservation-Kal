#pragma once
//#include "Reservation.h"
#include "flight.h"
#include <vector>
//#include "ticket.h"

namespace AirlineReservation {
	class ScheduleManager {
		private:
			std::vector<Flight> mAllFlights;
		public:
			ScheduleManager() = default;

			//int reserveFlight(Passenger p, Flight f);
			void displayTicket(int reservationId);
			void cancelReservationId();
			void passengerCheckin(int reservationId);
			//Ticket flightCheckIn(int reservationId);
	
			//Flight:
			//Display All Flights Information
			void displayAllFlights() const;
			void addFlightInformation();
			void deleteFlight(int flightId);
			void dummyFlightInformation();

			//File - Read and Write Functions
			void writeFlightVectorToFile(std::vector<Flight> allFlights);
			void readFlightVectorFromFile() const;
	
	};
}