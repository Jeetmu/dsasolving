#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int n =7;

    for (int i = 1; i <= n; i++)
    {
        int j = 1;
        for (j = j+1; j <= n; j++)
        {
            cout<< "*";
        }
        cout << endl;
    }
    

    return 0;
}