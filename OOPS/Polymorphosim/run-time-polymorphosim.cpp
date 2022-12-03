#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cmath>

using namespace std;

class Animal{
    public:
    void speak(){
        cout<<"Speaking "<<endl;
    }
};

class dog:public Animal{
    public:
    void speak(){
        cout <<"Barking "<<endl;
    }
};

int main(){

    dog obj;
    obj.speak();

    return 0;
}