#include <iostream>
#include <fstream>
#include<string>

using namespace std;

int main(int argc, char* argv[])
{
    string fileName = argv[1];
    ifstream input;
    string read;
    string file;

    input.open(fileName);
    if (input.fail())
    {
        cerr << "File Read Error" << endl;
        exit(1);
    }
    else
    {
        while (!input.eof())
        {
            input >> read;
            if (input.peek() != EOF)
            {
                file = file + read;
                file = file += input.get();
            }
            else 
            {
                file = file + read;
                file = file += EOF;
            }
        }
        cout << file << '\n';
    }
    input.close();
    return 0;
}