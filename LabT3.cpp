#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int choice;
int main(){
    srand(time(NULL));
    int random=rand()% 100 +1;
    cout<<"Random number between 1 - 100 is "<<random<<endl;
    int trials =0;
    while(trials<4){
        cout << "\n===== MOBILE MONEY MENU =====\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Send Money\n";
        cout << "5. Exit\n";
        cout << "Choose an option";
        cout<<"Enter choice"<<endl;
        cin>>choice;
        
        if (choice ==1) {
            double amount;
            cout<<"Enter amount"<<endl;
            cin>>amount;
            double balance;
            if (amount >0){
                balance -=amount;
            }
            cout<<"Enter phone number"<<endl;
            int phoneNumber;
            cin>>phoneNumber;
            cout<<"Money sent k "<<amount<<" sent to"<<phoneNumber<<"new balance is :"<<balance<<endl;    

            
         trials++;
        }
    }
    return 0;
}