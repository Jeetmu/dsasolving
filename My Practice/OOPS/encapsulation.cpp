#include<iostream>
#include<cstdlib>
#include<cmath>
#include<cstring>
 
using namespace std;
 
//encapsulation all data members in private
//make only read function getter no setter

 class Student{
    private:
        string name;
        int age;
        int height;

    public:
        int getAge(){
            return this->age;
        }
 };

int main()
{
    Student first;

    cout<< "All good "<<endl;
 
    return 0;
};