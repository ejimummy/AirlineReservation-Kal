#pragma once

#include "Reservation.h"
//#include "flight.h"
//#include "ticket.h"


class ScheduleManager {
public:
	ScheduleManager() = default;
	static Reservation& reserveFlight();
	void displayTicket(int reservationId);
	void cancelReservationId();
	void passengerCheckin(int reservationId);
	//Ticket flightCheckIn(int reservationId);
};