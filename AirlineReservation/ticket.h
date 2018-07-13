#pragma
#include "Passenger.h"
#include "Flight.h"
#include "Reservation.h"
#include<string>
using std::string;
using namespace std;

class Ticket {
private:
	int mLastTicketId;
	int mTicketId;
	Reservation mReservation;
	Flight mReservedFlight;
	Passenger mPassenger;
	string mSeatNumber;
	//Bitmap mQrCode;
	
public:
	//constructors and destructor
	Ticket();
	Ticket(Reservation reservation);
	~Ticket();

	//getters and setters
	int getTicketId();

	void setTicketId();

	int getTicketId();

	Flight getReservedFlight();

	void setReservedFlight(Flight flight);

	Passenger getPassenger();

	void setPassenger(Passenger p);

	string getSeatNumber();

	void setSeatNumber(string seatNumber);
		
	//methods
	/*void createQRCode(); */

	

};