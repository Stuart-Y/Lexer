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
       if (isalpha(input[0]) == true)
        {
           cout << isalpha(input[0] == true) << '\n';
           for (unsigned int i = 0; isalpha(input[i]) == true; i++)
           {
               cout << isalpha(input[i] == true) << '\n';
               maxReadCount++;
           }
           return maxReadCount;
        }
        return 0;
    }
};

