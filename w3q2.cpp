// simple i/o program with a class, accessing class instance in main ().

#include<iostream>
using namespace std;

class simple
{
   public: int i=1;
   string word="Hello";
};

int main()
{
    simple sobj;

    cout<<sobj.i<<"."<<sobj.word<<endl;
    return 0;
}
