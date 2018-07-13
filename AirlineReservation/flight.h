#pragma once
# include<string>

class Flight {
private:
	int flightId, cost;
	std::string date, departureTime, arrivalTime, departureGate, arrivalGate;
	//std::enum departureAirport, arrivalAirport, flightstatus;
	//std::airplane airplane;
	void createFlight();
	void removeFlight();
	//std::string set ArrivalGate(airportId);
	//std::string set departureGate(airportId);


};
