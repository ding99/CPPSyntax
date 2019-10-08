#include <iostream>
#include <csignal>
#include <windows.h>

#include "Raise.h"

void signalHandler(int signum) {
	std::cout << "Interrupt signal (" << signum << ") received" << std::endl;
	exit(signum);
}

int signalRaise() {
	std::cout << "Signal Raise Test" << std::endl;

	int i = 0;

	signal(SIGABRT, signalHandler);

	while (++i) {
		std::cout << "Going to sleep ..." << std::endl;
		if (i == 3)
			raise(SIGABRT);

		Sleep(1000);
	}

	return 0;
}