#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node* next;
};
struct node* top = NULL;
struct node* newnode =  (struct node*)malloc(sizeof(struct node));
void insert(){
    int no; 
    printf("enter the number: \n");
    scanf("%d",&no);
    newnode->data = no;
}

int main(){
    
}