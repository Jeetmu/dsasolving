#include<iostream>
#include<cstdlib>
#include<cmath>
#include<string>
 
using namespace std;
 
class Hero {

    private:
        int health;
    //properties
    public:
        char level;

    //contructor called- default without parameter 
    Hero(){
        cout << "Contructor called "<< endl;
    }

    //paramerterised Contructor
    Hero(int health){
        //this takes the address of current object ramesh
        cout << "this-> " << this <<endl;
        this -> health = health;
    }

     Hero(int health, int level){
        //this takes the address of current object ramesh
        cout << "this-> " << this <<endl;
        this -> health = health;
        this -> level = level;
    }   

    void print(){
        cout << level << endl;
    }
    //getter => fetch
    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }
    //setter
    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }
};

int main()
{
    //object created statially
    cout << "Hi! "<<endl;
    Hero ramesh(10);
    cout <<"Address of ramesh "<< &ramesh << endl;
    ramesh.getHealth();
    ramesh.print();

    Hero temp(22, '8');
    ramesh.print();

    //dynamically
    Hero *h = new Hero;

    //dynamic allocation - heap
    Hero *b = new Hero;
    b->setHealth(70);
    b->setLevel('A');

    cout << "sizeof b " << sizeof(b)<<endl;
    cout << "level is "<< b->getHealth()<<endl; 
    cout << "health is "<< b->level<<endl;
    //static allocation - stack
    //creation of object
    Hero h1;
    cout << "Size of "<< sizeof(h1)<<endl;
    h1.setHealth(70);
    cout<< "Ramesh health is "<< h1.getHealth() << endl;
    h1.level = 'A';

    //cout << "h1 is: "<< h1.health <<endl;

    cout <<"size: "<< sizeof(h1) <<endl;

    
    return 0;
};