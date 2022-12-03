#include<iostream>
#include<cstdlib>
#include<cmath>
#include<cstring>
 
using namespace std;
 
//inheritance child class inherit properties of parent class

class Human{
    public:
        int height;
        int weight;
        int age;

        int getAge(){
            return this->age;
        }
        void setWeight(int w){
            this->weight = w;
        }
};

class Male: public Human{

    public:
    string color;

    void sleep(){
        cout<<"Male Sleeping" <<endl;
    }
};

int main()
{
    Male object1;
    cout<< object1.age <<endl;
    object1.sleep();
 
    return 0;
};