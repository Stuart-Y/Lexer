#pragma once
#include <cctype>
#include "Automaton.h"
class IDAutomaton :
    public Automaton
{
private:
    string element;
public:
    IDAutomaton(TokenType type)
    {
        this->type = type;
    }

    int Start(string input, int lineNumber)
    {
       if (isalpha(input[0]))
        {
           element = input[0];
           maxReadCount = 1;
           for (unsigned int i = 0; isalnum(input[i]) && i < input.length(); i++)
           {
               element = element + input[i];
               maxReadCount++;
           }
           if (input[maxReadCount] == ' ' || input[maxReadCount] == '\t' || input[maxReadCount] == '\n')
           {
               return maxReadCount;
           }
           return 0;
        }
        return 0;
    }
};

