#include <iostream>
#include <fstream>
#include<string>
using namespace std;
int main(int argc, char* argv[])
{
    string fileName = argv[1];
    ifstream input(fileName);
    string out = "whoops";
    out.assign((istreambuf_iterator<char>(input)),
        (istreambuf_iterator<char>()));
    cout << out;
    return 0;
}