#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cmath>

using namespace std;

//function overloading
class A {

    public:

    void sayHello(){
        cout<< "Hello love babbr "<<endl;
    }
    void sayHello(string name){
        cout << "Hello "<<name<<endl;
    }
    int sayHello(string name, int n){
        cout<< "Hello love babbr "<<endl;
        return n;
    }
    
};
// operator overloading
class B{
    public:
    int a;

    void operator+ (B &obj){
        int value1 = this->a;
        cout<< " vale "<<value1 <<endl;
        int value2 = obj.a;
        cout << "output "<<value2 - value1 <<endl;
    }
    void operator() (){
        cout << "maine bracket hun "<< this->a <<endl;
    }
};


int main(){

    A obj;
    obj.sayHello();

    B obj2, obj3;

    obj2.a = 7;
    obj3.a = 4;
    

    obj3 + obj2;
    obj2();

    return 0;
}