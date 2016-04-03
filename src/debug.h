#pragma once

#include <string>

class Debug {
public:
	// Is debug mode enabled?
	static bool DEBUG;

	// Leaves a debug message on stdout
	static void debug_message(std::string message);
};