// making a class function inline

#include<iostream>
using namespace std;

class simple
{ 
   public: inline void func()  
   {
      cout<<"this is an inline function"<<endl;
   }
};

int main()
{
    simple sobj;   
    sobj.func();

    return 0;
}
