#include <stdio.h>
int stack[100],Top,stackSize=10;

void push(int data){
    if(Top>=stackSize-1){
        printf("Overflow");
    }else{
        Top++;
        stack[Top]=data;
    }
}

void pop(){
    if(Top<=-1){
        printf("underflow");
    }else{
        Top--;
    }
}

void peek(){
    if(Top<=-1){
        printf("stack is empty");
    }else{
        printf("%d",stack[Top]);
    }
}

void isEmpty(){
    if(Top<=-1){
        printf("stack is empty");
    }else{
        printf("stack is not empty");
    }
}

int main() {
    Top=-1;
    push(10);
    push(11);
    push(12);
    push(13);
    push(14);
    pop();
    push(56);
    pop();
    pop();
    peek();
    isEmpty();
    
    

    return 0;
}