#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cmath>

using namespace std;

class Human{
    private:
        int color;

    public:
        int count;
};

class child : public Human{ 

    public:
        int colors; 

};

int main()
{ 
    cout<<"Hi"<<endl;

    return 0;
}
