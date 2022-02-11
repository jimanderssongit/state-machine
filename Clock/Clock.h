#pragma once
#include <string>
#include "ClockTime.h"
#include "ClockDate.h"


class Clock
{
private:
	ClockTime* theTime;
	ClockDate* theDate;

	const std::string ILLEGAL = "Illegal transition";

public:

	Clock();

	std::string changeMode();

	std::string ready();

	std::string set();

	enum State {
		displayTime,
		displayDate,
		changeTime,
		changeDate
	};


};

