#include <iostream>
#include "debug.h"

bool Debug::DEBUG = false;

void Debug::debug_message(std::string message) {
	std::cout << "DEBUG: " << message << std::endl;
}