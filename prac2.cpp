#include<iostream>
using namespace std;

class parent
{
    protected:
    int id_protected;

};

class child: public parent{
    public:
    void setId(int id)
    {
        id_protected=id;

    }
    void display(){
        cout<<"id_protected is :"<<id_protected<<endl;
    }
};

main()
{
    child c;
    c.setId(10);
    c.display();

    return 0;
}