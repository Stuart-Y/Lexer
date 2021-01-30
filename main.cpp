#include <iostream>
#include <fstream>
#include<string>
using namespace std;
int main(int argc, char* argv[])
{
    string fileName = argv[1];
    ifstream input(fileName);
    string out((std::istreambuf_iterator<char>(input)),
        (std::istreambuf_iterator<char>()));
    cout << out;
    return 0;
}