#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;
float x, y;
int c;
string s;
float probeg(float a)
{
    float b = 0;
    // прямая с углом 45
    if (a > -4 && a < -1)
    {
      b = x + 1;
    }
    // прямая на оси х
    if (a >= -1 && a <= 1)
    {
      b = 0;
    }
    // окружность
     if (a > 1 && a <= 5) 
    {
      b = sqrt(4 - ((x - 3)*(x - 3)));
    }
    // прямая по двум точкам
    if (a > 5 && a <= 7)
    {
      b = ((5 - x)/5);
    }
    return b;
};

int main()
{
    // Код для вычисления Y при X для 16 варианта
    ofstream prout("text2.txt");

    x = -4;
    c = 7;
    for (x; x < 10; x++)
    {
        prout << c << " ";
        c++;
        y = probeg(x);
        prout << y << "\n";
    }
    prout.close();
    ifstream prin("text2.txt");
    while (getline(prin, s))
    {
        cout << s;
        cout << "\n";
    };
    prin.close();
}
