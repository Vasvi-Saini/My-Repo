#include<stdio.h>
#define size 20
int stack[size],choice,no,top=-1;
void push();
void pop();
void display();

void push(){
    printf("enter a no. which you want to insert :\n");
    scanf("%d",&no);
    if(top==size-1){
        printf("Overflow\n");
    }
    else{
       top = top + 1;
       stack[top]= no;
       printf("Value inserted...");
    }
   return ;
}
void pop(){
    if(top==-1){
        printf("Underflow\n");
    }
    else
    top = top - 1;
    printf("Value deleted...");
    return ;
}
void display(){
    if(top==-1){
        return ;
    }
    printf("elements are :\n");
for(int i=0; i<=top ; i++){
    printf("%d ",stack[i]);
}
}

int main(){
    while(choice!=4){
        printf("\nSelect the operation you want to perform :\n");
        printf("1.Push\n2.Pop\n3.display\n4.Exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:{
            push();
            break;
            }
            case 2:{
                pop();
                break;
        }
        case 3: {
            display();
            break;
        }
        case 4: {
            printf("Exiting....");
            break;
        }
    }
}
return 0;
}