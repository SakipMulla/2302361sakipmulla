// revise a simple program with a structure.

#include<iostream>
using namespace std;
int main()
{
    struct simple
    {
        int i=1;
        string word="hello";
    }sobj;

    cout<<sobj.i<<"."<<sobj.word<<endl;
    return 0;
}
