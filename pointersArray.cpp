#include <iostream>
using namespace std;

int main(){

    int numberArray[5];

    int *pPointer =nullptr;
    pPointer =numberArray;//assigning adress of the first element to the array
    *pPointer =10;

    pPointer++;
    *pPointer =20;//assigning the adress of the 2nd element to the pointer

    pPointer=&numberArray[2];//assigning the adress of the 3rd element to the pointer
    *pPointer=30;
      
    pPointer = numberArray +3;// pointing to the adress of the furth element using pointer arithmetic
    *pPointer =40;

    *(pPointer+1)=50;// using indirection to assign the adress of the5th element of array to the pointer
     //not that *(pPointer+4)=50 points to the 7th element not the 5th
    for(int i=0;i<5;i++){
        cout<<numberArray[i]<<" "<<endl;

    }
    
    return 0;
}