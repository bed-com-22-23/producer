#include <iostream>
using namespace std;

int main(){

    int *pPointer =nullptr;
     
    int numberArray[3]={10,20,30};
    pPointer =numberArray;

    cout<<"Adress at pointer pPointer: "<<pPointer<<endl;
    cout<<"Adress at numberArray[0]: "<<numberArray<<pPointer<<endl;
  
    cout<<"Adress at first element: "<<*pPointer<<endl;//10
    cout<<"Adress at ++pPointer: "<<*(++pPointer)<<endl;//20

    //assigning the adress of the first element
    pPointer =numberArray;


    cout<<"the value at pPointer++  "<<*(pPointer++)<<endl;

}
