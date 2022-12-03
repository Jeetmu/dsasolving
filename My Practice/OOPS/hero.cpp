#include<iostream>
#include<cstdlib>
#include<cmath>
#include<cstring>
 
using namespace std;
 
class Hero {

    private:
        int health;
    //properties
    public:
        char level;
        //dynaically allocate
        char *name;

    //contructor called- default constructor without parameter 
    Hero(){
        cout << "Defaukt Contructor called "<< endl;
        name = new char[100];
    }

    //paramerterised Contructor
    Hero(int health){
        //this takes the address of current object ramesh
        cout << "this-> " << this <<endl;
        this -> health = health;
    }

     Hero(int health, char level){
        //this takes the address of current object ramesh
        cout << "this--> " << this <<endl;
        this -> health = health;
        this -> level = level;
    }   

    //copy constructor
    Hero(Hero& temp){
        //deep copy -> make a new array and copy the old array to this one
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch; 

        cout << "Copy constructor called "<<endl;
        this->health =  temp.health;
        this->level = temp.level;
    }

    void print(){
        cout << level << endl;
        cout<< "health "<<this->health<<endl;
        cout<<"level "<< this->level << endl;
        cout << endl;
        cout << "[ Name: "<<this->name<<" ,";
        cout << "health: "<< this->health << " ,";
        cout << "level: " <<this->level << " }";
        cout << endl;
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
    void setName(char name[]){
        strcpy(this->name, name);
    }
};

int main(){

    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7] = "Babbar";
    hero1.setName(name);
    hero1.print();

    //use default copy construct -> shallow copy
    Hero hero2(hero1);
    hero2.print();

    //using paramererized constructor
    Hero suresh(70, 'C');
    //suresh.print();

    //copy constructor
    Hero R(suresh);
    //R.print();

    //normal set
    suresh.setHealth(70);
    suresh.setLevel('C');

    //copy assignment operator
    hero1 = hero2;

    return 0;
}