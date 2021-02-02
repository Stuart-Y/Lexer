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
        maxReadCount = 0;
       if (isalpha(input[0]) == 0)
        {
           cout << isalpha(input[0]) << "if" << '\n';
           for (unsigned int i = 0; isalpha(input[i]) == 0; i++)
           {
               cout << isalpha(input[i]) << "for" << '\n';
               maxReadCount++;
           }
           return maxReadCount;
        }
        return 0;
    }
};

