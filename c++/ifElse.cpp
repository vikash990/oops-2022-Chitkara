#include<iostream>
using namespace std;
int main(){
   int age;
   string country;
   cin>>age;
   cin>>country;
   cout<<country<<endl;
   if(age>=18){
       if(country=="india"){
         cout<<"eligible to vote";
       }else{
           cout<<"not eligible to vote"<<endl;
       }else{
           cout<<"not eligible to vote";
       }
   }
}