#pragma once
#include "Automaton.h"
class CommentAutomaton :
    public Automaton
{
private:

public:
    CommentAutomaton(TokenType type)
    {
        this->type = type;
    }

    int Start(string input, int lineNumber)
    {
        maxReadCount = 0;
        if (type != COMMENT)
        {
            cout << "ERROR: Comment Automaton Improperly Requested";
            return 0;
        }
        else if (input[0] == '#')
        {
            maxReadCount++;
            /*if (input[1] == '|')
            {
                maxReadCount++;
                bool cycle = true;
                for (unsigned int i = 2; i < input.length() && cycle; i++)
                {
                    maxReadCount++;
                    if (input[i] == '|')
                    {
                        if (input[i + 1] == '#')
                        {
                            cycle = false;
                            maxReadCount++;
                        }
                    }
                }
            }
            else {*/
                for (unsigned int i = 1; input[i] != '\n' && i < input.length(); i++)
                {
                    maxReadCount++;
                }
                return maxReadCount;
            //}
        }
        return 0;
    }
};

