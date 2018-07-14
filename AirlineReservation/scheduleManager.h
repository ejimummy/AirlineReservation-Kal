#pragma once
#include "Reservation.h"
#include "Passenger.h"
#include "flight.h"
#include "ticket.h"


class ScheduleManager {
	public:
	ScheduleManager() = default;

	static int reserveFlight(Passenger p, Flight f);
	void displayTicket(int reservationId);
	void cancelReservationId();
	void passengerCheckin(int reservationId);
	//Ticket flightCheckIn(int reservationId);
};