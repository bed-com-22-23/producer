#include <iostream>
#include <string>
using namespace std;

int main(){
string text;
cout<<"Enter your name"<<endl;
getline(cin,text);
cout<<"enter your code"<<endl;
int number;
cin>>number;
       if(cin.fail()){
          cout<<"invalid code"<<endl;
          cin.clear();
    //cin.ignore(numeric_limits<streamsize>::max(),"\n");
      }
      else{
    cout<<"You have entered"<<number<<endl;
      }


    return 0;
}