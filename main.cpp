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
        for (int i = 0; !input.eof(); i++)
        {
            input >> read;
            cout << read << endl;
            file = file + read;
        }
        cout << file << endl;
    }
    input.close();
    return 0;
}