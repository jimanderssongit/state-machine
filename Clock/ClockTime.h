#pragma once
#include <string>
class ClockTime
{
private:
	int theHour;
	int theMinute;
	int theSecond;

public:
	ClockTime(int hour, int minute, int second);

	std::string timeSet(int hour, int minute, int second);

	std::string showTime();

};

