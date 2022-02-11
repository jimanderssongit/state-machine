#include "ClockDate.h"
#include <iostream>
#include <string>

ClockDate::ClockDate(int year, int month, int day)
{
	this->theYear = year;
	this->theMonth = month;
	this->theDay = day;
}

std::string ClockDate::dateSet(int year, int month, int day)
{
	if ((year >= 2000 && year <= 2100) &&
		(month >= 1 && month <= 12) &&
		(day >= 1 && day <= 31)) {
		this->theYear = year;
		this->theMonth = month;
		this->theDay = day;

		return std::string("The date has been set to " + std::to_string(theYear) + '-' + std::to_string(theMonth) + '-' + std::to_string(theDay) );
	}
	else {
		return std::string("ERROR: Please enter a valid date");
	}
	
}

std::string ClockDate::showDate()
{
	return std::string("The date is: " + std::to_string(theYear) + '-' + std::to_string(theMonth) + '-' + std::to_string(theDay));
}
