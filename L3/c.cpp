#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int x,y;
int main()
{
    ofstream prout("text2.txt");
    ifstream prin("text.txt");
    prin >> x >> y;
    prout << (x + y)*2 <<endl;
    prin.close();
    prout.close();

};
