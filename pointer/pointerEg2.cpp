// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    
    int arr[5]={1,2,3,4,5};
    int *ptr=arr;
    cout<<*(ptr+2)<<endl;
    cout<<ptr<<" "<<*ptr<<endl;
    ptr++;
    cout<<ptr<<" "<<*ptr<<endl;
    ptr++;
    cout<<ptr<<" "<<*ptr<<endl;
   

    return 0;
}