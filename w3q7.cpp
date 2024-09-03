// demonstrate static member function to access static data member

#include<iostream>
using namespace std;

// simple = counter
class simple
{ 
    private:
    //static variable to keep track of the count
   static int count;

   public:
   // constructor
   simple(){
    count++;
   }

   //static function to get current count
   //count_track = getcount

   static int count_track()  
   {
     return count;
   }

   // static function to reset the count of zero
   static void resetcount_track()
   {
      count=0;
   }
};

// initialize static variable outside the class

int simple :: count=0;

int main()
{
    // display the initial count should be 0

    cout<<"initial count = "<<simple::count_track()<<endl;

    // create objects of counter class(that is simple class)
    simple sobj, sobj2;   

    // display the current count should be 2
    cout<<"count after creating 2 instances = "<<simple::count_track()<<endl;

   /* // reset the output using the static function
    simple::resetcount_track();
    cout<<" count after reset = "<<simple::count_track()<<endl;  */
   
  return 0;
}
