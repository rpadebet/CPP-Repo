
#include <boost/date_time/gregorian/gregorian.hpp>
#include <iostream>
#include <boost/date_time/local_time/local_time.hpp>

int main() {
 
	// Initializing Date object with 21st March 2016
        boost::gregorian::date dateObj(2016, 3, 21);
 
	// Printing complete Date object on console
	std::cout << "Initial Date = " << dateObj << '\n';
 
	// Initialize days object with 10 days
	boost::gregorian::days daysObj(10);
 
	// Subtract 10 days from date object
	dateObj = dateObj - daysObj;
 
	// Printing complete Date object on console
	std::cout << "Date After Subtracting " << daysObj << " days = " << dateObj<< '\n';
 
	// Initialize days object with 2 Months
	boost::gregorian::months monthObj(4);
 
	// Add 2 Months in date object
	dateObj = dateObj + monthObj;
 
	// Printing complete Date object on console
	std::cout << "Date After Adding " << monthObj.number_of_months()
			<< " Months = " << dateObj << '\n';
	
	std::cout << "Date After Adding " << monthObj.number_of_months()
			<< " Months and End of Month = " << dateObj.end_of_month() << '\n';

	std::cout << "Date After Adding " << monthObj.number_of_months()
			<< " Months and End of Month Weekday = " << dateObj.end_of_month().day_of_week() << '\n';
	// Initialize days object with 3 Years
	boost::gregorian::years yearsObj(3);
 
	// Subtract 3 Years from date object
	dateObj = dateObj - yearsObj;
 
	// Printing complete Date object on console
	std::cout << "Date After Subtracting " << yearsObj.number_of_years()
			<< " Years = " << dateObj << '\n';
 
}
