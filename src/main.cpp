#include <iostream>
#include "parser.h"
#include "debug.h"

int main(int argc, char* argv[]) {
	
	// Check if an input file has been passed to the program
	if (argc < 2) {
		std::cout << "Fatal Error: No input file specified." << std::endl;
		return 1;
	}

	// Find commandline options
	for (int i = 0; i < argc; i++) {
		// Convert to c++ string
		std::string arg = argv[i];
		if (arg == "-d") {
			// Enable debug mode
			Debug::DEBUG_ENABLED = true;
			Debug::debug_message("Debug mode enabled!");
		}
	}

	// Input file is always the first (or well, second since the program path is first) argument
	std::string input = argv[1];
	Parser::read_file(input);
	
	return 0;
}
