#include <iostream>
#include <fstream>
#include<string>
using namespace std;
int main()
{
    ifstream input("in10.txt");
    string out;
    input >> out;
    cout << out;
    return 0;
}