#pragma once
# include<string>
# include<ctime>

class Flight {
public:
	// enum declaration
	enum airportsEnum { SEA, HYD, DEL, DWT, KOL, LOA };
	enum flightstatusEnum { Delayed, Boarding, Ontime, Deparated };

	// constructors
	Flight() = default;
	Flight(const int id, const time_t date, const time_t departureTime, const time_t arrivalTime, const std::string	departureGate,
		const std::string arrivalGate,const airportsEnum departureAirport,const airportsEnum airrvalAirport);
	void display() const;

	// Getters and Setters
	void setId(int id);
	int getId() const;
	void setDate(const time_t date);
	const time_t getDate() const;
	void setDepartureTime(const time_t departureTime);
	const time_t getDepartureTime() const;
	void setArrivalTime(const time_t arrivalTime);
	const time_t getArrivalTime() const;
	void setDepartureGate(const string& departureGate);
	const string& getDepartureGate() const;
	void setArrivalGate(const string& arrivalGate);
	const string& getArrivalGate() const;
	void setdepartureAirport(const airportsEnum departureAirport);
	const airportsEnum getDepartureAirport() const;
	void setAirrvalAirport(const airportsEnum airrvalAirport);
	const airportsEnum  getAirrvalAirpot() const;
	void setFlightStatus(const flightstatusEnum flightStatus);
	const flightstatusEnum  getFlightStatus();

private:
	int mflightId=-1;
	time_t mdate;
	time_t mdepartureTime;
	time_t marrivalTime;
	std::string	mdepartureGate;
	std::string marrivalGate;
	airportsEnum mdepartureAirport;
	airportsEnum mairrvalAirport;
	flightstatusEnum mflightStatus;
	//airplane airplane;

};
