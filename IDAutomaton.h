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
           for (unsigned int i = 0; isalpha(input[i]) == 0; i++)
           {
               cout << input[i] << '\n';
               maxReadCount++;
           }
           cout << maxReadCount << '\n';
           return maxReadCount;
        }
        return 0;
    }
};

