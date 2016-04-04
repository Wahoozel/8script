#include <iostream>
#include <fstream>
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
	for (int i = 0; i < tokens.size(); i++) {
		// Current token
		std::string t = tokens[i];

		if (t == T_CREATE) {

		} else if (t == T_SELECT) {

		} else if (t == T_SET) {
			
		} else if (t == T_OUTPUT) {
			
		} else if (t == T_OUTPUT_ASCII) {
			
		} else if (t == T_IF) {
			
		} else if (t == T_ELSE) {
			
		} else if (t == T_END) {
			
		}
	}
}
