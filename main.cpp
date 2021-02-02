#include <iostream>
#include <fstream>
#include<string>
#include "Lexer.h"
#include "Token.h"

using namespace std;

int main(int argc, char* argv[])
{
    string fileName = argv[1];
    ifstream input;
    string file;
    vector <Token*> out;

    input.open(fileName);
    if (input.fail())
    {
        cerr << "File Read Error" << endl;
        exit(1);
    }
    else
    {
        for (int i = 0; input.peek() != EOF; i++)
        {
            file = file += input.get();
        }
        cout << file << '\n';
    }
    input.close();
    Lexer read;
    out = read.Run(file);
    for (unsigned int i = 0; i < out.size(); i++)
    {
        cout << out[i]->toString();
    }
    return 0;
}