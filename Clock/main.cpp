#include "Clock.h"
#include <iostream>
#include <string>

void loop(Clock* clock) {
	bool run = true;
	std::string command;

	while (run) {
		std::cout << "Enter a command (ready, changemode, set, exit)" << std::endl;
		std::cin >> command;

		if (command == "changemode") {
			std::cout << clock->changeMode() << std::endl;
		}
		else if (command == "ready") {
			std::cout << clock->ready() << std::endl;
		}
		else if (command == "set") {
			std::cout << clock->set() << std::endl;
		}
		else if (command == "exit") {
			run = false;
		}
		else {
			std::cout << "Unknown command" << std::endl;
		}
	}
}

int main() {
	Clock* clock = new Clock();
	loop(clock);
	//std::cout << clock->changeMode() << std::endl;
	//std::cout << clock->ready() << std::endl;
	//std::cout << clock->set() << std::endl;
	//std::cout << clock->changeMode() << std::endl;
	//std::cout << clock->set() << std::endl;

	delete clock;
}
