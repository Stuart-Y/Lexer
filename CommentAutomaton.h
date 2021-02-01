#pragma once
#include "Automaton.h"
class CommentAutomaton :
    public Automaton
{
private:
    string element;

public:
    CommentAutomaton(TokenType type)
    {
        this->type = type;
    }

    int Start(string input, int lineNumber)
    {
        if (type != COMMENT)
        {
            cout << "ERROR: Comment Automaton Improperly Requested";
            return 0;
        }
        else if ((input[0] = '#'))
        {
            element = "#";
            for (unsigned int i = 1; input[i] != '\n' && i < input.length(); i++)
            {
                maxReadCount = i;
                element = element + input[i];
            }
            if (input[maxReadCount] = '\n')
            {
                maxLines = lineNumber++;
            }
            return maxReadCount;
        }
        return 0;
    }
};

