#include<iostream>
using namespace std;
int main(){

    int x = 10;
    int *y =&x;
    *y = 12;
    cout << x << " and Y value is " << *y ;

    int a = 40;
    int b = 50;

    string c ="name";
    a = 20;

    cout << a << " and c is "<< c ;
    return 0;
}   