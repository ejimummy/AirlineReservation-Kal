#include "stdafx.h"
#include "Utils.h"
#include <algorithm> 
#include <functional>
#include <cctype>
#include <string>



using namespace std;


 bool Utils::isValidDate(int month, int day,int year ) {
	
	int monthlen[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	if (month <1 || month>12 )
		throw logic_error("Month is not valid");
	
	
	if (month == 2) {
		if(!(year % 4) && (year % 100) || !(year % 400)) //Is Leap Year			
			monthlen[1]++;
	}
	if (day>monthlen[month - 1])
		throw logic_error("Day is not valid");

	if (year<18 || year >99)
		throw logic_error("Year is not valid");

	return true;
}

 string Utils::toUpper(string s) {
	 std::transform(s.begin(), s.end(), s.begin(), std::ptr_fun<int, int>(std::toupper));
	 return s;
 }

 string Utils::toString(int month, int day, int year) {
	 string m = to_string(month); 
	 string d = to_string(day);
	 if (month < 10)
		 m = "0" + m;
	 if (day < 10)
		 d = "0" + d;

	 return m + "/" + d + "/" + to_string(year);
 }

Utils::Utils()
{
}


Utils::~Utils()
{
}
