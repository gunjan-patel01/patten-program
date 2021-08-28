#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter Age: ";
    cin>>age;
    
    switch (age)
    {
    case 18:
        cout<<"Aatma-nirbhar Bharat";
        break;
    case 60:
        cout<<"Nivrrut Bharat";
        break;
    case 15:
        cout<<"Tejasvi Bharat";
        break;
    default:
        break;
    }    
    return 0;

}