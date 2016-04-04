#include <iostream>
#include <fstream>
#include <cstdlib>
#include <map>
#include "parser.h"
#include "debug.h"

// Define tokens
#define T_CREATE "."
#define T_SELECT "-"
#define T_SET ":"
#define T_OUTPUT ";"
#define T_OUTPUT_ASCII "|"
#define T_IF "_"
#define T_ELSE ","
#define T_END "*"

void Parser::read_file(std::string path) {
	std::vector<std::string> tokens;
	std::ifstream stream;

	stream.open(path);
	if (stream.is_open()) {
		std::string t;
		while (stream >> t) {
			tokens.push_back(t);
		}
	}
	stream.close();

	parse(tokens);
}

void Parser::parse(std::vector<std::string> tokens) {
	std::map<std::string, int> variables;
	std::string selected_variable;

	for (int i = 0; i < tokens.size(); i++) {
		// Current token
		std::string t = tokens[i];

		if (t == T_CREATE) {

			std::string name = tokens[i + 1];
			variables[name] = 0;
			selected_variable = name;

			Debug::debug_message("Creating and selecting variable " + name);

		} else if (t == T_SELECT) {

			std::string name = tokens[i + 1];
			selected_variable = name;

			Debug::debug_message("Selecting variable " + name);

		} else if (t == T_SET) {
			
			int value = atoi(tokens[i + 1].c_str());
			variables[selected_variable] = value; 

			// A bug in MinGW wont let me use std::to_string(),
			// so I can't be bothered to print what it's changed to
			Debug::debug_message("Changing value of selected");

		} else if (t == T_OUTPUT) {
			
			std::cout << variables[selected_variable];

			Debug::debug_message("Writing selected to stdout");

		} else if (t == T_OUTPUT_ASCII) {
			
			std::cout << static_cast<char>(variables[selected_variable]);

			Debug::debug_message("Writing selected to stdout as char");

		} else if (t == T_IF) {
			
		} else if (t == T_ELSE) {
			
		} else if (t == T_END) {
			
		}
	}
}
