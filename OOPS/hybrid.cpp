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

class Dogs : public Animal{
    public:
        void noMan(){
            cout<<"hichal "<<endl;
        }
};

class Cats : public Animal{
    public:
        void print(){
            cout<<"herichichal "<<endl;
        }
};

class Libra : public Cats, public Dogs{

};

int main()
{
    Dogs d;
    d.speak();
    Cats c;
    c.speak();
    Libra l;
    l.print(); 
    l.noMan();

    return 0;
}