#pragma once
#include <string>
#include "Token.h"

using namespace std;

class Automaton
{
private:
	int readCount = 0;
	int newLines = 0;
	TokenType type;
public:
	Automaton(TokenType type)
	{
		this->type = type;
	}

	virtual int Start(string input, int lineNumber) = 0;

	virtual Token* CreateToken(string input, int lineNumber)
	{
		return new Token(type, input, lineNumber);
	}

	virtual int NewLinesRead() const {
		return	newLines;
	}
};

