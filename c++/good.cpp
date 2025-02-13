// write a program to print the digit of  given number ; ❤️


// #include<iostream>
// using namespace std; 
// int main(){
//     int i, n,a,b,count =0 ; 
//     cout<<"enter the number : "; 
//     cin>>n; 
//     while(n!=0){
//         a=n%10; // a%b=a (if a<b )
//         b=n/10; // always return quotient 
//         n=b; 
//         count+=1; //count is connecting with while because count is in while loop ; 
//     }
// cout<<count<<" "; 
// }

//optimised way ; 

// #include<iostream>
// using namespace std; 
// int main(){
//     int n ,count= 0 ; 
//     cout<<"enter the number :"; 
//     cin>>n ;
//     while(n>0){
//         n = n / 10; 
//         count += 1;
//     }
//     cout<<count<<" "; 
// }
//write a program to print the sum of digit of number 
// #include<iostream>
// using namespace std; 
// int main(){
//     int sum = 0 ,n,a ;
//     cout<<"enter the number "; 
//     cin>>n; 
//     while(n!=0){
//         a = n % 10;
//         n=n/10; 
//         sum = sum+a; 
//     }
//     // cout<<a<<" "; 
//     cout<<sum<<" "; 
// }

// write a program to print the product  of digit of number

//  #include<iostream>
//  using namespace std;
//  int main(){
//      int product  = 1 ,n,a ;
//      cout<<"enter the number ";
//      cin>>n;
//      while(n!=0){
//          a = n % 10;
//          n=n/10;
//          product  = product *a;
//      }
//      // cout<<a<<" ";
//      cout << product << " ";
//  }

// write a program to print the sum of digit of even number
// #include<iostream>
// using namespace std;
// int main(){
//     int sum = 0 ,n,a ;
//     cout<<"enter the number ";
//     cin>>n;
//     while(n!=0){
//         a = n % 10;
//         n=n/10;
//         if(a%2==0){
//             sum = sum+a; 
//         }
//     }
//     cout<<sum<<" ";
// }

//find the reverse of number ; //try to find out yourself its tough ; 
// #include<iostream>
// using namespace std; 
// int main(){
//     int ld, n,r =0; 
//     cout<<"enter the number :";
//     cin>>n; 
//     while(n!=0){
//         ld = n % 10;
//         r *= 10;
//         r += ld;
//         n = n / 10;
//     }
//     cout<<r<<" "; 
// }

//print the factorial of number ; 
// #include<iostream>
// using namespace std; 
// int main(){
//     int fact=1 , n ; 
//     cout<<"enter the number : ";
//     cin>>n ;
//     while (n!=0){
//         fact = fact*(n); 
//         n=n-1; 
//     }
//     cout<<fact<<" "; 
// }