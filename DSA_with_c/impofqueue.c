#include<stdio.h>
#define size 5
int queue[size],front=-1,rear=-1,choice;
void enqueue();
void dequeue();
void display();
void enqueue(){
    int no;
    printf("enter the number you want to insert : \n");
    scanf("%d",&no);
    if(front==-1&&rear==-1){
        front=0;
        rear=0;
        queue[rear]=no;
        printf("value inserted\n");
        return;
    }
    else{
        rear++;
        queue[rear]=no;
        printf("value inserted\n");
    }
    return;
}
void dequeue(){
    int item;
    if(front=-1 || front>rear){
        printf("underflow\n");
        return;
    }
    else{
        item=queue[front];
        if(front==rear){
            front=-1;
            rear=-1;
        }
        else{
        front++;
        }
        printf("no deleted is: %d\n,item");
    }
    return;
}
void display(){
    if(rear==-1){
        printf("queue is empty!!!\n");
    }
    else{
        printf("elements are:\n");
    for(int i=front; i<=rear; i++){
        printf("%d ",queue[i]);
    }
}
}
void main(){
    while(choice!=4){
    printf("\nenter the operation you want to perform on queue: \n");
    printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:{
            enqueue();
            break;
        }
        case 2:{
        dequeue();
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
        default:printf("\ninvalid choice\n");
    }
    }
}