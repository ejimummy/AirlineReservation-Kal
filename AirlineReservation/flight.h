#pragma once
# include<string>
#include<ctime>
namespace AirlineReservation {
	enum airportsEnum { SEA, HYD, DEL, DWT, KOL, LA };
	enum flightstatusEnum { Delayed, Boarding, Ontime, Deparated };

	
	class Flight {
	public:
		// enum declaration
		
		// constructors
		Flight() = default;
		Flight(const int id, const std::string date, const std::string  departureTime, const std::string arrivalTime, const std::string    departureGate,
			const std::string arrivalGate, const airportsEnum departureAirport, const airportsEnum airrvalAirport);

		void displayFlight() const;
		void addFlight()const;

		// Getters and Setters
		void setFlightId(int id);
		int getFlightId() const;

		void setAirplaneName(std::string& airplaneName);
		std::string& getAirplaneName();

		void setFlightNumber(std::string& flightNumber);
		std::string& getFlightNumber();

		
		void setDate(const std::string date);
		const std::string getDate() const;
		void setDepartureTime(const std::string departureTime);
		const std::string getDepartureTime() const;
		void setArrivalTime(const std::string arrivalTime);
		const std::string getArrivalTime() const;
		void setDepartureGate(const std::string& departureGate);
		const std::string& getDepartureGate() const;
		void setArrivalGate(const std::string& arrivalGate);
		const std::string& getArrivalGate() const;
		void setdepartureAirport(const airportsEnum departureAirport);
		const airportsEnum getDepartureAirport() const;
		void setAirrvalAirport(const airportsEnum airrvalAirport);
		const airportsEnum  getAirrvalAirpot() const;
		void setFlightStatus(const flightstatusEnum flightStatus);
		const flightstatusEnum  getFlightStatus();


	private:
		int mflightId = -1;
		std::string mAirplaneName;
		std::string mFlightNumber;
		std::string mdate;
		std::string mdepartureTime;
		std::string marrivalTime;
		std::string    mdepartureGate;
		std::string marrivalGate;
		airportsEnum mdepartureAirport;
		airportsEnum mairrvalAirport;
		flightstatusEnum mflightStatus;
		//airplane airplane;

	};
}

