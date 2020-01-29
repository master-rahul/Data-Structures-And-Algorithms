#include<bits/stdc++.h>
using namespace std;

int stack1[10] = {0};
int top =0;
int size = 10;

void stack_push();
void stack_pop();
void stack_display();

int main(){
    cout<<"\nWELCOME TO STACK PROGRAM\n"<<endl;
    while(1){
        cout<<"1. PUSH"<<endl;
        cout<<"2. POP"<<endl;
        cout<<"3. DISPLAY"<<endl;
        cout<<"4. EXIT"<<endl;
        int val;
        cout<<"\nEnter Choice    :   ";
        cout<<endl;
        cin>>val;
        switch(val){
            case 1:
                stack_push();
                break;
            case 2:
                stack_pop();
                break;
            case 3:
                stack_display();
                break;
            default:
                exit(0);
        }
    }
    return 0;
}

void stack_push(){
    if(top == size)
        cout<<"/nStack Overflow"<<endl;
    else{
        int val;
        cout<<"\nEnter data  : \n";
        cin>>val;
        stack1[top++] = val;
    }
}

void stack_pop(){
    if(top == 0)
        cout<<"\nStack Underflow"<<endl;
    else
        stack1[--top] = 0;
}

void stack_display(){
    if(top != 0){
        cout<<"STACK: "<<endl;
        for(int i = top-1; i>=0; i--)
            cout<<stack1[i]<<" ";
        cout<<endl<<endl;
    }
    else{
        cout<<"\nStack Underflow"<<endl;
    }
}