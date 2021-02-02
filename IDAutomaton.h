#pragma once
#include <cctype>
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
           for (unsigned int i = 0; isalpha(input[i]); i++)
           {
               maxReadCount++;
           }
           return maxReadCount;
        }
        return 0;
    }
};

