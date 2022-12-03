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

int main()
{
    Dogs d;
    d.speak();

    return 0;
}