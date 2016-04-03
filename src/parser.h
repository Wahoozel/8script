#pragma once

#include <string>
#include <vector>

class Parser {
public:
	// Reads a file into a string and sends it to tokenize();
	static void read_file(std::string path);

	// Tokenizes the string. (splits each word adds it to a string vector)
	static void tokenize(std::string file);

	// Iterates through all tokens from tokenize() and does what it's supposed to do.
	static void parse(std::vector<std::string> tokens);
};