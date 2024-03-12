#include<stdio.h>
#define size 10
int choice,no,top=-1,stack[size];
void push();
void pop();
void display();

void push(int no){
    if(top==size-1){
        printf("Stack Overflow!!!\n");
        return;
    }
    top++;
    stack[top]=no;
    printf("Number inserted!!!\n");
    return;
}
void pop(){
    if(top==-1){
        printf("Underflow!!!");
        return;
    }
    top--;

    return;
}
void display(){
    printf("stack elements: \n");
    while(top!=-1){
        printf("%d ",stack[top--]);
    }
    return;
}

int main(){
    while(choice!=4){
    printf("\nPlease select an operation which you want to perform on stack: \n");
    printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:{
            printf("Enter a number which is to be inserted\n");
            scanf("%d",&no);
            push(no);
            break;
        }
        case 2:{
            pop();
            break;
        }
        case 3:{
            display();
            break;
        }
        case 4:{
            printf("Exiting...\n");
            break;
        }
    }
    }
    return 0;
}