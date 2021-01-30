#include <iostream>
#include <fstream>
#include<string>
using namespace std;
int main(int argc, char* argv[])
{
    string fileName = argv[1];
    ifstream input(fileName);
    cout << fileName;
    char out[input.gcount()];
    cout << out;
    input.read(out, input.gcount());
    cout << out;
    return 0;
}