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

};

class GermanSheperd : public Dogs{


};

int main()
{
    Dogs d;
    d.speak();

    GermanSheperd g;
    g.speak();

    return 0;
}