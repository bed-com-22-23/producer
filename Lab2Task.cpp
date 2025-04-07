#include <iostream>
using namespace std;
int g;
int main(){
    cout<<"size of char"<<sizeof(char)<<endl;
    cout<<"size of int"<<sizeof(int)<<endl;
    cout<<"size of short int"<<sizeof(short int)<<endl;
    cout<<"size of long in"<<sizeof(long int)<<endl;
    cout<<"size of float"<<sizeof(float)<<endl;
    cout<<"size of double"<<sizeof(double)<<endl;
    cout<<"size of wchar_t "<<sizeof(wchar_t)<<endl;
    int a,b;
    a=10;
    b=20;
    g=a +b;
    cout<<g<<endl;
    int g =23;
    cout<<g<<endl;
        const int LENGTH =10;
    const int WIDTH=5;
    const int NEWLINE ='\n';
    int area;
    area = LENGTH *WIDTH;
    cout<<area<<endl;
    cout<<NEWLINE<<endl;
    //user iputs
    int x;
    cout<<"Type the number"<<endl;
    cin>>x;
    cout<<"your number is "<<x<<endl;

    //
    int m,y;
    int sum;
    cout<<"type another number";
    cin>>y;
    sum=m+y;
    cout<<"sum is "<<sum;
    return 0;
    //creating helloword
    cout<<"Hello world"<<endl;
}