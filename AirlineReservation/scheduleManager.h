#pragma once
#include <unordered_map>
#include "Reservation.h"
#include "ticket.h"

namespace AirlineReservation {
	class ScheduleManager {

	private:
		std::unordered_map<int, Ticket> ALLTickets;

	public:
		ScheduleManager() = default;
		static Reservation reserveFlight();
		void displayTicket(const Ticket& ticket);
		void displayTicket(int reservationId);
		void cancelReservationId();
		void passengerCheckin(int reservationId);
		//Ticket flightCheckIn(int reservationId);
	};
}