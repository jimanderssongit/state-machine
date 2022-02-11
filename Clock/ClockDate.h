#pragma once
#include <string>
class ClockDate
{
private:
	int theDay;
	int theMonth;
	int theYear;

public:
	ClockDate(int year, int month, int day);

	std::string dateSet(int year, int month, int day);

	std::string showDate();
};

