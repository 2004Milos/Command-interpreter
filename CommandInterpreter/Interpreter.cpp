#include "Interpreter.h"
#include <iostream>
#include <string.h>

using namespace std;

Interpreter::Interpreter() {

}

Interpreter* Interpreter::Instance() {
	static Interpreter instance;
	return &instance;
}

void Interpreter::setCommandPrompt(char c) {
	this->commandPrompt = c;
}

void Interpreter::processLine(char in[]) {

}


void Interpreter::run() {
	while (1) {
		std::cout << commandPrompt << " ";
		char input[512];
		std::cin >> input;
		processLine(input);
	}
}

