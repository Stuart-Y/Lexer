#pragma once
#include <string>
#include <cctype>
#include "Token.h"

using namespace std;

class Automaton
{
protected:
	int readCount = 0;
	int newLines = 0;
	TokenType type;
public:
	Automaton() {
		type = UNDEFINED;
	}
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

