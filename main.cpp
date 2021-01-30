#include <iostream>
#include <fstream>
#include<string>
using namespace std;
int main(int argc, char* argv[])
{
    string fileName = argv[1];
    ifstream input(fileName);
    string out;
    input >> out;
    cout << out;
    return 0;
}