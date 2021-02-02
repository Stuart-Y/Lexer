#pragma once
#include "Automaton.h"

class IDAutomaton :
    public Automaton
{
private:
public:
    IDAutomaton(TokenType type)
    {
        this->type = type;
    }

    int Start(string input, int lineNumber)
    {
       if (isalpha(input[0]))
        {
           cout << isalpha(input[0]) << '\n';
           for (unsigned int i = 0; isalpha(input[i]); i++)
           {
               cout << isalpha(input[i]) << '\n';
               maxReadCount++;
           }
           return maxReadCount;
        }
        return 0;
    }
};

