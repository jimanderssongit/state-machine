#include "ClockTime.h"

ClockTime::ClockTime(int hour, int minute, int second)
{
	this->theHour = hour;
	this->theMinute = minute;
	this->theSecond = second;
}

std::string ClockTime::timeSet(int hour, int minute, int second)
{
	if ((hour >= 0 && hour <= 23) &&
		(minute >= 0 && minute <= 59) &&
		(second >= 0 && second <= 59)) {
		theHour = hour;
		theMinute = minute;
		theSecond = second;

		return "The time has been set to " + std::to_string(theHour) + ':' + std::to_string(theMinute) + ':' + std::to_string(theSecond);
	}
	else {
		return "ERROR: Please enter a valid time.";
	}
}

std::string ClockTime::showTime()
{
	return "The time is " + std::to_string(theHour) + ':' + std::to_string(theMinute) + ':' + std::to_string(theSecond);
}
