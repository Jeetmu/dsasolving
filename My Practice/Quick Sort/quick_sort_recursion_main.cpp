#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>

using namespace std;

bool isHappy(int n)
{
    int x1;
    int x2;

    bool count = false;

    while (n > 0)
    {
        x1 = n % 10;
        cout << "x1 " << x1 <<endl; 
        x2 = n / 10;
        cout << "x2 " << x2 <<endl; 
        n = round(pow(x2, 2)) + round(pow(x1, 2));
        cout << "n " << n <<endl; 

        if (n == 1)
        {
            count = true;
            break;
        }
    }
    if (count == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    int n = 19;
    isHappy(19);

    return 0;
};