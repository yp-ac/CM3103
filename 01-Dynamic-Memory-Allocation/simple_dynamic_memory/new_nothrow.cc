#include<iostream>
using namespace std;

int main(){
   int *ptr = NULL;

   ptr=new(nothrow)int; // requesting memory using new operator
   if(!ptr)
        cout<< "Memory allocation failed"<<endl;
    else{
        *ptr=20;
        cout<<"Value of ptr = "<<*ptr<<endl;
    }
    delete ptr; // freed up allocated memory 
   return 0;
}