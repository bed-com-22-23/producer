#include <iostream>
#include <fstream>
using namespace std;
int main(){
//create and open a file
ofstream MyFile;
MyFile.open("files/example.txt", ios::app);
MyFile<<"Hey gal i damnly fell in love with you"<<endl;
//close file
MyFile.close();
return 0;
}

