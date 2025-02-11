// /// for loop , 
// #include<iostream>
// using namespace std; 
// int main()
// {
//    int i ; 
//    for( i =0; i<101; i++){
//     if(i%2==0){
//         cout<<i<<endl; 
//     }
//    }
// }

//print the odd numbers, 
// #include<iostream>
// using namespace std;
// int main()
// {
//    int i ;
//    for( i =0; i<101; i++){
//     if((i%2)!=0){
//         cout<<i<<endl;
//     }
//    }
//}
//print an ap of 1,3,5...n  ' 

// #include<iostream>
// #include<bitstring.h>
// using namespace std; 
// int main(){
//     int i , n ;
//     cout<<"enter the value of n "; 
//     cin>>n ;
//     for(int i = 1; i<=2*n-1 ;i+=2){
//      cout<<i<<endl; 
//     }
// }

//print the highest factor of number ,
// #include <iostream>
// #include <bitstring.h>
// using namespace std;
// int main()
// {
//     int i, n,f;
//     cout << "enter the value of n : ";
//     cin >> n;
//     for(i= 1 ; i<n ;i++){
//         if(n%i==0){
//         // cout<<i<<" "; 
//         f=i ; 
            
//         }
//     }cout<<endl ; 
//     cout << "highest factor is "<<f << endl;
// }

///print a number is prime or not

// imp thing to note down ; 
// koi bhi ke factor sirf uske half tk ho skte h you just need to check its half only ;
// 
// 1 method 
// #include<iostream>
// #include<bitstring.h>
// using namespace std; 
// int main(){
// bool flag = true ; // if flag is true thaat means number is prime 
// int i,n; 
// cout<<"enter the number "; 
// cin>>n ;
// for(i = 2; i < n/2; i++){
//     if(n%i==0){
//         cout<<"composite"; 
//         flag = false; 
//     }
// }
//  if(n ==1 )cout<<"neither prime not composite";
// else if(flag ==true ){
//     cout<<"prime"<<" "<< n; 
// }
// }

// 2 method ; 
