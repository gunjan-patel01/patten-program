
// using namespace std;
// int main(){
//     for(int a=1;a<=5;a++){
//         for(int b=1;b<=a;b++){
//             if(a==2 || a==4){
//                 cout<<"+";
//             }
//             else{
//                 cout<<"*";
//             }            
//         }
//         cout<<endl;
//     }  
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int a=1;a<=5;a++){
//         for(int b=5;b>=1;b--){
//             if(a<b){
//                 cout<<" ";
//             }
//             else{
//                 cout<<"*";
//             }            
//         }
//         cout<<endl;
//     }  
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"How many coulumns Pattern to be made?: ";
//     int i;
//     cin>>i;
//     for(int a=1;a<=i;a++){
//         for(int b=1;b<=i;b++){
//             if(a<(i+1)-b){
//                 cout<<" ";
//                 cout<<endl;
//                 cout<<endl;
//             }

//             else{
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;

// }

// 1 1 1 1 1 
// 2 2 2 2
// 3 3 3
// 4 4
// 5


// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=5;j>=1;j--){
//             if(i<=j){
//                 cout<<i<<" ";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// 5
// 44
// 333
// 2222
// 11111

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=5;i>0;i--){
//         for(int j=5;j>=i;j--){
//             cout<<i;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15

// #include<iostream>
// using namespace std;
// int main(){
//     int x=1;
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             cout<<x<<" ";
//             x+=1;
//             }
            
//         cout<<endl;
//     }
//     return 0;
// }

// A 
// B B 
// C C C 
// D D D D 
// E E E E E

// #include<iostream>
// using namespace std;
// int alpha=65;
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             cout<<char(alpha)<<" ";
//         }
//         alpha+=1;
//         cout<<endl;
//     }

//     return 0;
// }

// A 
// B B 
// C C C 
// D D D D 
// E E E E E
// With while loop

// #include<iostream>
// using namespace std;
// int main(){
//     int x=1;
//     for(int i=1;i<=4;i++){
//         for(int j=1;j<=i;j++){
//                 cout<<"*";           
//         }
//             cout<<endl;
//     }
//     for(int a=5;a>=1;a--){
//         for(int b=1;a>=b;b++){   
//             cout<<"*";
//         }
//             cout<<endl;
//     }
//     return 0;
// }

// *****
//  ****
//   ***
//    **
//     *

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=5;j>=1;j--){
//             if(j>6-i){
//                 cout<<" ";
//             }
//             else{
//                 cout<<"*";
//             }
//         }
//             cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=5;j>=1;j--){
//             if(i>=j){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }

//         }
//             cout<<endl;
//     }
//     return 0;
// }

// *****
//  ****
//   ***
//    **
//     *

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<endl;
//     for(int a=5;a>=1;a--){
//         for(int b=5;b>=1;b--){
//             if(a>=b){
//                 cout<<"*";
//             }
//             else{
//                 cout<<(" ");
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

    //     * 
    //    * * 
    //   * * * 
    //  * * * * 
    // * * * * *

// #include<iostream>
// using namespace std;
// int main(){
//     for(int a=1;a<=5;a++){
//         for(int b=1;b<=a+1;b++){
//             if()
//         }
//     }
//     return 0;
// }

    //     * 
    //    *** 
    //   ***** 
    //  ******* 


    // #include<iostream>
    // using namespace std;
    // int main(){
    //     for(int i=1;i<=4;i++){
    //         for(int j=5;j>=1;j--){
    //             if(j<=i){
    //                 cout<<"* ";
    //             }
    //             else{
    //                 cout<<" ";
    //             }
    //         }
    //         for(int b=1;b<i;b++){
    //                 cout<<"* ";
    //         }
    //         cout<<endl;
    // }
    //     return 0;
    // }

    //        *
    //       ***
    //      *****
    //     *******
    //    *********
    //     *******
    //      *****    
    //       ***
    //        *
    
    
    
    #include<iostream>
    using namespace std;
    int main(){
        for(int i=1;i<=4;i++){
            for(int j=5;j>=1;j--){
                if(j<=i){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            for(int b=1;b<i;b++){
                    cout<<"* ";
            }
            cout<<endl;
    }
    for(int x=5;x>=1;x--){
        for(int y=5;y>=1;y--){
            if(x>=y){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }    
            
        }
        for(int z=1;z<x;z++){
            cout<<"* ";
        }
        cout<<endl;

        // Comment added
    }
        return 0;
    }


// #include<iostream>
// using namespace std;
// int main(){
//     for(int x=5;x>=1;x--){
//         for(int y=5;y>=1;y--){
//             if(x>=y){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }    
            
//         }
//         for(int z=1;z<x;z++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }