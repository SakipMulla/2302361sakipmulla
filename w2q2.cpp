// swap two numbers with call by value, call by reference

#include<iostream>
using namespace std;

void function(int &a, int &b)
{
    int x;
   
    x=a;
    a=b;
    b=x;
}

   int main()
{
    int a, b;
    cout<<"enter 1 value : A= ";
    cin>>a;
    cout<<"enter 2 value : B= ";
    cin>>b;
    

     cout<<"before swapping the number was : A = "<< a <<" B = "<< b <<endl;

    
    function(a, b);

     cout<<" after swapping values are   : A = "<< a <<" B= "<< b <<endl;

    return 0;
}

