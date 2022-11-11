#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i < n; i++)
    {
        int j = 1;
        for (j = 1; j < n; j++)
        {
            char ch = 'A' + i - 1;
            cout << ch;
        }
        cout << endl;
    }

    for (int i = 1; i < n; i++)
    {
        int j = 1;
        for (j = 1; j < n; j++)
        {
            char ch = 'A' + j - 1;
            cout << ch;
        }
        cout << endl;
    }
    char start = 'A';
    for (int i = 1; i < n; i++)
    {
        int j = 1;
        for (j = 1; j < n; j++)
        {
            cout << start;
            start = start + 1;
        }
        cout << endl;
    }

    for (int i = 1; i < n; i++)
    {
        int j = 1;
        for (j = 1; j < n; j++)
        {
            char start = i + j - 1 + 'A' - 1;
            cout << start;
        }
        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            char start = i + j - 1 + 'A' - 1;
            cout << start;
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        char start = 'A' + n-i;
        for (int j = 1; j <= i; j++)
        {
            cout << start;
            start = start + 1;
        }
        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= i; k++)
        {
            cout<<"*"; 
        }
        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= i; k++)
        {
            cout<<k; 
        }

        for (int l = 1; l < i; l++)
        {
            cout<<l;
        }
        
        cout << endl;
    }
    return 0;
}