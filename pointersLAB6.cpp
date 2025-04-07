#include <iostream>
#include <string>
using namespace std;

int main(){
 // into pointers

    // int *pPointer = nullptr;
    // int integerVar= 5;
    // // assigning the adress of interfervar to the pointer
    // pPointer =&integerVar;
    // cout<<"the integerVar is "<<integerVar<<endl;
    // cout<<"the address of integerVar is "<<&integerVar<<endl;

    // cout<<"ointer "<<pPointer<<endl;
    // cout<<"the address of pointer is "<<&pPointer<<endl;
    
    // name pointers.cpp
    int firstValue ;
    int secondValue;
    int *pPointer = nullptr;
     pPointer =&firstValue;
     *pPointer =10;

     pPointer =&secondValue;
     *pPointer =20;
     cout<<"the adress of a pointer "<<firstValue<<endl;
     cout<<"the adress of a pointer "<<secondValue<<endl;

// 

    return 0;
}