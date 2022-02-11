#include "Clock.h"
#include "ClockTime.h"
#include <string>
#include <iostream>

Clock::State state;

Clock::Clock()
{
	theTime = new ClockTime(10, 11, 12);
	theDate = new ClockDate(2000, 1, 1);
	state = State::displayTime;
}

std::string Clock::changeMode()
{
	std::string statement = "STATEMENT";

	switch (state) {
	case State::displayTime:
		state = State::displayDate;
		statement = theDate->showDate();
		break;

	case State::displayDate:
		state = State::displayTime;
		statement = theTime->showTime();
		break;

	case State::changeTime:
		statement = ILLEGAL;
		break;
		
	case State::changeDate:
		statement = ILLEGAL;
		break;

	}

	
	return statement;
}

std::string Clock::ready()
{
	std::string statement = "STATEMENT";

	switch (state) {
		case State::displayTime:
			state = State::changeTime;
			statement = "Ready to set time";
			break;

		case State::displayDate:
			state = State::changeDate;
			statement = "Ready to set date";
			break;

		case State::changeTime:
			statement = ILLEGAL;
			break;

		case State::changeDate:
			statement = ILLEGAL;
			break;
	}

	return statement;
}

std::string Clock::set()
{
	int p1, p2, p3;

	std::string statement = "STATEMENT";

	if (state == State::changeTime) {
		std::cout << "Enter a time (HHMMSS)" << std::endl;
		std::string input;
		std::cin >> input;
		int num = std::stoi(input);
		p3 = num % 100; num /= 100; p2 = num % 100; num /= 100; p1 = num;
	}

	if (state == State::changeDate) {
		std::cout << "Enter a date (YYYYMMDD)" << std::endl;
		std::string input;
		std::cin >> input;
		int num = std::stoi(input);
		p3 = num % 100; num /= 100; p2 = num % 100; num /= 100; p1 = num;
	}

	switch (state) {
		case State::displayTime:
			statement = ILLEGAL;
			break;

		case State::displayDate:
			statement = ILLEGAL;
			break;

		case State::changeTime:		
			state = State::displayTime;
			statement = theTime->timeSet(p1, p2, p3);
			break;

		case State::changeDate:
			state = State::displayDate;
			statement = theDate->dateSet(p1, p2, p3);
			break;
	}
	return std::string(statement);
}



