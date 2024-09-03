// testing visibility modifiers public and private

#include<iostream>
using namespace std;

class simple
{
   private: int i=1;
   public: int j=2;
   void out()
   {
      cout<<i;
   }
};

int main()
{
    simple sobj;
    // can't access i directly since its private
    sobj.out();
    cout<<endl<<sobj.j;

    return 0;
}

