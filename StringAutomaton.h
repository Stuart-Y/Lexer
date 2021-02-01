#pragma once
#include "Automaton.h"
class StringAutomaton :
    public Automaton
{
private:
    string element;

public:
    StringAutomaton(TokenType type)
    {
        this->type = type;
    }

    int Start(string input, int lineNumber)
    {
        if (input[0] == '\'')
        {
            bool cycle = true;
            maxReadCount = 1;
            element = "'";
            for (unsigned int i = 0; cycle && i < input.length(); i++)
            {
                element = element + input[i];
                if (input[i] == '\'')
                {
                    if (input[i + 1] != '\'')
                    {
                        cycle = false;
                    }
                }

            }
            return element.length();
        }
        return 0;
    }
};

