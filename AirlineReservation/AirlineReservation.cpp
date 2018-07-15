// AirlineReservation.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
#include <string>
#include <sstream>

#include "scheduleManager.h"


using namespace std;
using namespace AirlineReservation;


int main()
{

	int optionSelected;
	string departure = "";
	string destination="";
	string departingDate="";
	
	while (true) {

		ScheduleManager sm;
		
		cout << "*********************************************************************" << std::endl;
		cout << "            W E L C O M E     T O   K A L'S    A I R L I N E         " << endl;
		cout << "*********************************************************************" << endl << endl;
		cout << "   Please select an  option:" << endl;
		cout << "	  1.-Search Flight Schedule" << endl;
		cout << "	  2.-Reserve Flight" << endl;
		cout << "	  3.-Check-In " << endl;
		cout << "	  4.-Search Reservation" << endl;
		cout << "	  5.-Flight Information" << endl;
		cout << "	  0.-Exit" << endl;
		cout << "   Please select an  option: ";
		cin >> optionSelected;

		switch (optionSelected) {
		case 1:
			cout << "Fying from: ";
			cin >> departure;
			cout << "Flying to:";		
			cin >> destination;
			cout << "Departing Date: ";
			cin >> departingDate;		
			break;
		case 2:
			cout << "OPtion 2 Selected" << endl;
			break;
		case 3:
			cout << "OPtion 3 Selected" << endl;
			break;
		case 4:
			break;
		case 5:
			cout << "Option 5 Selected" << endl;
			cout << " Flight Information" << endl;
			
		    sm.displayAllFlights();

			break;
		case 0:
			return 0;
			//break;
		default:
			cout << "Default Selected" << endl;
			break;
		}
		
		/*cout<< flush;*/
		//system("CLS");
	}
	
	return 0;
}
