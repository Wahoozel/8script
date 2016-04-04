#pragma once

#include <string>
#include <vector>

class Parser {
public:
	// Reads a file, token for token and adds it to a string vector.
	static void read_file(std::string path);

	// Iterates through all tokens from read_file() and does what it's supposed to do.
	static void parse(std::vector<std::string> tokens);
};