#pragma once
//#include "Reservation.h"
//#include "flight.h"
//#include "ticket.h"


class ScheduleManager {
public:
	ScheduleManager() = default;

	//int reserveFlight(Passenger p, Flight f);
	void displayTicket(int reservationId);
	void cancelReservationId();
	void passengerCheckin(int reservationId);
	//Ticket flightCheckIn(int reservationId);
};