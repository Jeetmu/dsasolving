#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cmath>

using namespace std;

class Animal{

    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<< "speaking "<<endl;
    }
};

class Human{
    public:
    string color;

    public:
    void bark(){
        cout<< "Barking "<<endl;
    }
};

//Multiple Inheritance
class Hybrid : public Animal, public Human{

};


int main()
{
    Hybrid d;
    d.speak();
    d.bark();

    return 0;
}