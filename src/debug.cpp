#include <iostream>
#include "debug.h"

bool Debug::DEBUG_ENABLED = false;

void Debug::debug_message(std::string message) {
	if (DEBUG_ENABLED)
		std::cout << "DEBUG: " << message << std::endl;
}