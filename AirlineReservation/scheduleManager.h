#pragma once
#include <unordered_map>
#include "Reservation.h"
#include "ticket.h"

namespace AirlineReservation {
	class ScheduleManager {

	private:
		std::unordered_map<int, Ticket> ALLTickets;
		std::vector<Flight> mAllFlights;

	public:
		ScheduleManager() = default;
		static Reservation reserveFlight();
		void displayTicket(const Ticket& ticket);
		void displayTicket(int reservationId);
		void cancelReservationId();
		void passengerCheckin(int reservationId);
		Passenger retrievePassenger(string email) const;

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