// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int x=20;
    int *ptr=&x;
    *ptr=30;
     x=50;
    *ptr=19;
    int **ptr1=&ptr;
    
    cout<<ptr<<endl;
    cout<<*ptr1<<endl;
    cout<<**ptr1<<endl;
    
    
    
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<x<<endl;
    cout<<&x;

    return 0;
}