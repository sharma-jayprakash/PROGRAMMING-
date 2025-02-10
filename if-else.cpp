// #include<iostream>
// using namespace std; 
// int main(){
//     int a; 
//     cout<<"enter the number a : "; 
//     cin >>a; 
//     if(a>0){
//     cout<<"positive"; 
//     }
//     else{
//         cout<<"negative"; 
//     }
// }
// #include<iostream>
// #include<bitstring.h>
// using namespace std; 
// int main(){
// int a; 
// cout<<"enter the a :";
// cin>>a; 
// if(a%2==0){
//     cout<<"even"; 
// }else{
//     cout<<"odd";
//  }
// }

// #include<iostream>
// #include<bitstring.h>
// using namespace std; 
// int main(){
// int a ; 
// cout<<"enter the number : "; 
// cin>>a;
 
// if( a>0){
//     cout<<a<<endl; 
// }
// else{
//     cout<< (-a); 
// }
// }
// #include<iostream>
// #include<bitstring.h>
// using namespace std; 
// int main(){
//     int sp , cp ; 
//     cout<<"enter the sp : "; 
//     cin>>sp ; 
//     cout<<"enter the cp : "; 
//     cin>>cp ; 
    
//     if(sp<cp){
//         cout<<"loss"; 
//     }
//     else if (sp>cp){
//         cout<<"profit"; 

//     }
//     else{
//         cout<<"no more profit or loss,"; 
//     }
// }

// multiples conditions and using of and and 0r 

// #include<iostream>
// #include<bitstring.h>
// using namespace std; 
// int main(){
//     int a ; 
//     cout<<"enter the number :"; 
//     cin>>a ; 
//     // and = && , or = ||
//     if(a>99 and a<1000){
//         cout<<"ya its greater "; 
//     }
//     else {
//         cout<<"i don't think its 3 digits number "; 
//     }
// }

// divisible by 3 and 5 ; 

// #include<iostream>
// #include<bitstring.h>
// using namespace std; 
// int main(){
//     int a ; 
//     cout<<"enter the number :"; 
//     cin>>a ; 
//     // and = && , or = ||
//     if(a%5==0 && a%3==0){
//         cout<<"divisible by 3 and 5"; 
//     }
//     else{
//         cout<<"not divisible by 3 and 5 " ; 
//     }
// }


// take 3 sides of triangle  and find out they can form a trianlge and not ; 


// #include<iostream>
// #include<bitstring.h>
// using namespace std; 
// int main(){
//     int a , b , c ; 

//     cout<<"enter the side a  :"; 
//     cin>>a ; 
//     cout<<"enter the side b  :"; 
//     cin>>b ; 

//     cout<<"enter the side c  :"; 
//     cin>>c ; 

//     if(a+b>c && b+c>a && c+a> b ){
//         cout<<"can make a triangle"; 
//     }
//     else {
//         cout<<"cant make a triangle "; 
//     }
// }

//terniraty operators 
#include<iostream>
#include<bitstring.h>
using namespace std; 
int main(){
    int a=8, b=9; 
   (a>b) ?  cout<<"a is greatest" : cout<<"b is greatest "; 
}
