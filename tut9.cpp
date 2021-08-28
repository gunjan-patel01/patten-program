#include<iostream>            
using namespace std;

int main()
{   
    int age;
    cout<<"This is Tutorial 9"<<endl;
    cout<<"Tell Admin you age: "    ;
    cin>>age;
    if (age==0){
        cout<<"You are not born yet"<<endl;
    }
    else if (age<=18){
        cout<<"You are a kiddo Don't come here";
    }
    else{
        cout<<"Party Welcomes you, knock exactly 9'O Clock";
    }
    return 0;
}
