// #1 Write a program in C++ to find the first 10 natural numbers.

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=10;i++){
//         cout<<i<<endl;
//     }
//     return 0;
// }


// #2 Write a program in C++ to find the sum of first 10 natural numbers.    

// #include<iostream>
// using namespace std;
// int main(){
//     int j=0,i=1;
//         cout<<"The first 10 Natural Numbers are "<<endl;
//     for(int i=1;i<=10;i++){
//         cout<<i<<endl;
//         j=j+i;
//     }
//     cout<<"The Sum of first 10 Natural Numbers is "<<j;
//     return 0;
// }


// #3 Write a program in C++ to display n terms of natural number and their sum

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// int x,sum=0;
// cout<<"Enter the number of natural to find sum: ";
// cin>>n;
//     cout<<"The namtural numbers to the n terms are:"<<endl;
//     for(int x=1;x<=n;x++){
//         cout<<x<<endl;
//         sum=sum+x;
//     }
//     cout<<"The sum of natural numbers to the n terms is "<<sum;
//     return 0;
// }

// #3 Write a program in C++ to find the perfect numbers between 1 and 500

// #include <iostream>
// using namespace std;
// int main() 
// {
//   int i = 1, u = 1, sum = 0;
//   cout << "\n The perfect numbers between 1 to 500 are: \n";
//   while (i <= 500){
//     while (u <= 500){
//       if (u < i){
//         if (i % u == 0)
//           sum = sum + u;
//       }
//       u++;
//     }
//     if (sum == i) {
//       cout << i << "  " << "\n";
//     }
//     i++;
//     u = 1;
//     sum = 0;
//   }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int p;
//     int n=0;
//     cout<<"Enter the number to check whether it is prime or not: "<<endl;
//     cin>>p;
//     for(int a=1;a<=p;a++){
//         if (p%a==0){
//             n++;}
//         }
//     if (n==2){
//         cout<<"Entered number is a Prime number"<<endl;  
//     }    
//     else{
//         cout<<"Number is not a Prime number"<<endl;
//         }
//     return 0;
// }

// #5 Write a program in C++ to find the FACTORIAL of a number

// #include<iostream>
// using namespace std;
// int main(){
//     int f;
//     int fact=1;
//     cout<<"Enter the number to which find the Factorial: ";
//     cin>>f;
//     int v= f;
//     for(f;f>=1;f--){
//         fact=fact*f;
//     }
//     {
//         cout<<"Factoial of "<<v<< " is " << fact;
//     }
//     return 0;
// }

// #6 Write a program in C++ to find the Greatest Common Divisor (GCD) of two numbers.

// #include<iostream>
// using namespace std;
// int main(){
//     int num1,num2,gcd;
//     cout<<"Program to find GCD of Two Numbers"<<endl;
//     cout<<"Enter first Number: ";
//     cin>>num1;
//     cout<<"Enter second Number: "<<endl;
//     cin>>num1;
//     for (int i = 1; i <= num1 && i <= num2; i++) 
//     {
//         if (num1 % i == 0 && num2 % i == 0) 
//         {
//             gcd = i;
//         }
//     }
//     cout<<"GCD is "<<gcd;
//     return 0;
// }

// #7 Write a program in C++ to find the sum of digits of a given number
// #include<iostream>
// using namespace std;
// int main(){
//     int num,sum=0,rum;

//     cout<<"Enter a number to find the sum of digits: ";
//     cin>>num;
//     while(num>0){
//         rum = num%10;
//         num = num/10;
//         sum = sum + rum;
//     }
//     cout<<"The Sum of the digits of the number is "<<sum;
//     return 0;
// }

// #8 Write a program in C++ to find the sum of the series 1 + 1/2^2 + 1/3^3 + ..+ 1/n^n.

#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int a = 1,sum = 0, num;
    cout<<"Enter number to find sum: "<<endl;
    cin>>num;
    for(int num;num>=1;num--){
        a=(1/pow(num,num));
    }
    return 0;
}