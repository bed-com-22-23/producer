#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
      srand(time(nullptr));
      int daysUnitExpiration =rand() % 10 +1;
      cout<<"The random number is "<<daysUnitExpiration <<endl;
      if(daysUnitExpiration >5){
        cout<<"Your subscription expires soon.Renew now "<<endl;
      }
      else if(daysUnitExpiration ==1){
        cout<<"Your subscription will expire in one day!Renew now and save 20 % "<<endl;
      }
      else if(daysUnitExpiration == 0){
        cout<<"Your subscription has epired "<<endl;
      }
      else{
        cout<<"You have an active subscription "<<endl;
      }
// a programs invoving arrays .To check if each string in the array starts with the letter 'B', you can use the .front() or .at(0) method for std::string. Here’s how you can do it:


     string names[] ={"B123","C234","A346","c15","b177","G3003","c235","b179"};
     for (int i = 0; i < sizeof(names); i++) {
        // Step 4: Check if the first character is 'B'
        if (!names[i].empty() && names[i].front() == 'B') {
            cout << names[i] << " starts with B" << endl;
 }
}
return 0;
}