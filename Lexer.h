#pragma once
#include <string>
#include <vector>
#include "Token.h"
#include "Automaton.h"

using namespace std;

class Lexer
{
private:
	vector<Token*> tokens;
	vector<Automaton*> automata;

public:
	Lexer()
	{
		/*vector<Token*> token();
		tokens = token;
		automata = new vector<Automaton*>();*/
	}
};

