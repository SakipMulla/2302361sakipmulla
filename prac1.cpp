#include<iostream>
using namespace std;

class animal
{
    public:

    void display()
    {
        cout<<"this is animal class"<<endl;
    }

};

class cat : public animal
{
    public:
    void show()
    {
        cout<<"this is cat class"<<endl;
    }

};


int main()
{
    cat obj;
    obj.display(); //ANIMAL CLASS FUNCTION
    obj.show(); // class cat


    return 0;
}