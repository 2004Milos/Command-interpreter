#pragma once
using namespace std;

class Interpreter
{
public:
	void setCommandPrompt(char);
	static Interpreter* Instance();
	void run();

private:
	Interpreter();
	void processLine(char[]);
	char commandPrompt = '$';
};

