#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>

using namespace std;

int digitSqSum(int n){
        int sum = 0;
        while(n > 0){
            sum = sum + ((n%10)*(n%10));
            cout<<"sum "<< sum << endl;;
            //sum = 9*9 = 81;
            //s = 82
            n=n/10;
            cout<<"n "<<n << endl;
            //n = 1
            //n = 0;
        }
        return sum;
    }
    bool isHappy(int n) {
        //numbers either ends with 1 or 89
        bool count = false;

        while(1){
            n = digitSqSum(n);
            if(n==1){
                count = true;
                break;
            }else if(n == 89){
                count = false;
                break;
            }
        }
        if (count == true){
            return true;
        }else {
            return false;
        }
    }

int main()
{

    int n = 19;
    isHappy(19);

    return 0;
};