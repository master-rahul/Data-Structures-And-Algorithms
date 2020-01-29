#include<bits/stdc++.h>
using namespace std;

struct stack_node{
    int data;
    stack_node *next;
}*head = NULL,*top = NULL;

void stack_push();
void stack_pop();
void stack_display();

int main(){
    cout<<"\nWELCOME TO THE STACK USING LINKED LIST PROGRAM\n\n";
    while(1){
        cout<<"\n1. PUSH\n"<<"2. POP\n"<<"3. DISPLAY\n"<<"4. EXIT\n\n";
        int user_input;
        cout<<"Enter Choice : \t";
        cin>>user_input;
        cout<<endl;
        switch (user_input)
        {
        case 1:
            stack_push();
            break;
        case 2:
            stack_pop();
            break;
        case 3:
            stack_display();
            break;
        case 4:
            exit(0);
        default:
            break;
        }
    }
    return 0;
}

void stack_push(){
    if(head == NULL){
        head = new stack_node;
        head->next = NULL;
        cout<<"\nEnter Data: \t";
        cin>>head->data;
        top = head;
    }
    else{
        stack_node *temp = new stack_node;
        temp->next = NULL;
        cout<<"\n Enter Data: \t";
        cin>>temp->data;
        top->next = temp;
        top = temp;
    }
}

void stack_pop(){
    if(head == NULL)
        cout<<"\n Stack Underflow\n";
    else{
        if(head->next == NULL){
            head = NULL;
        }
        else{
            stack_node *ptr = head;
            stack_node *pptr = ptr->next;
            while(pptr->next != NULL){
                ptr = pptr;
                pptr = pptr->next;
            }
            ptr->next = NULL;
            top = ptr;
        }
    }
}

void stack_display(){
    if(head == NULL)
        cout<<"\nStack Empty\n";
    else{
        stack_node *temp1;
        temp1 = head;
        cout<<"\n";
        while(temp1 != NULL){
            cout<<temp1->data<<" ";
            temp1 = temp1->next;
        }
        cout<<"\n";
    }
}