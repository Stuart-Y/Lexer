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
    cout << out[1]+out[2]+out[3];
    return 0;
}