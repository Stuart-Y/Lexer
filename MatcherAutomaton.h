#pragma once
#include<string>
#include "Automaton.h"
class MatcherAutomaton :
    public Automaton
{
private:
    string actual;
public:
    MatcherAutomaton(TokenType type)
    {
        this->type = type;
		switch (type) {
		case COMMA: actual = ","; break;
		case PERIOD: actual = "."; break;
		case Q_MARK: actual = "?"; break;
		case LEFT_PAREN: actual = "("; break;
		case RIGHT_PAREN: actual = ")"; break;
		case COLON: actual = ":"; break;
		case COLON_DASH: actual = ":-"; break;
		case MULTIPLY: actual = "*"; break;
		case ADD: actual = "+"; break;
		case SCHEMES: actual = "Schemes"; break;
		case FACTS: actual = "Facts"; break;
		case RULES: actual = "Rules"; break;
		case QUERIES: actual = "Queries"; break;
		case ID: 
			cout << "ERROR: Matcher Automaton Improperly Requested";
			actual = ""; break;
		case STRING:
			cout << "ERROR: Matcher Automaton Improperly Requested";
			actual = ""; break;
		case COMMENT:
			cout << "ERROR: Matcher Automaton Improperly Requested";
			actual = ""; break;
		case UNDEFINED:
			cout << "ERROR: Matcher Automaton Improperly Requested";
			actual = ""; break;
		case ENDFILE:
			cout << "ERROR: Matcher Automaton Improperly Requested";
			actual = ""; break;
		}
    }
};

