#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
}*head=NULL,*newnode,*temp,*prev;

int no;
void insert_at_beg();
void insert_at_pos();
void insert_at_end();
void del_beg();
void del_pos();
void del_end();
void display();

void insert_at_beg(){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the no: \n");
    scanf("%d",&newnode->data);
        newnode->next=head;
        head = newnode;
        printf("new node inserted successfully: \n");
}

void insert_at_pos(){
    newnode=(struct node*)malloc(sizeof(struct node));
    int k;
    printf("enter the position at which you want to insert the node: \n");
    scanf("%d",&k);
    printf("enter the no: ");
    scanf("%d",&newnode->data);
      for(temp=head; temp->data!=k; prev=temp, temp=temp->next);
         prev->next=newnode;
         newnode->next=temp;
      printf("new node inserted at %d :",k);
}

void insert_at_end(){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the no: \n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    for(temp=head;temp->next!=NULL; temp= temp->next);
    temp->next=newnode;
    temp=newnode;
    printf("One node added at the end...\n");
}

/*void dlt_beg(){
   temp = head;
   head = head->next;
   free(temp);
   printf("one element deleted at beg: \n");
}

void dlt_pos(){
    int k;
    scanf("%d",&k);
    for(temp=head; temp->data==k; prev=temp,temp=temp->next){
        prev->next=NULL;
        free(temp);
    }
}

void dlt_end(){
    for(temp=head; temp!=NULL; prev=temp, temp=temp->next){
        prev->next=NULL;
        free(temp);
    }
}*/

void display(){
    temp=head;
    printf("your linked list is: ");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
    }

int main(){
    int choice=0;
    while(choice!=8){
    printf("\nWhat operation you want to perform on linked list\n");
    printf("\n1.insert_at_beg\n2.insert_at_pos\n3.insert_at_end\n4.del_beg\n5.del_pos\n6.del_end\n7.display\n8.exit\n");
    printf("\nenter your choice: \n");
    scanf("%d",&choice);
    switch (choice){
        case 1:{
            insert_at_beg();
            break;
        }
        case 2:{
            insert_at_pos();
            break;
        }
        case 3:{
            insert_at_end();
            break;
        }
        case 4:{
            del_beg();
            break;
        }
        case 5:{
            del_pos();
            break;
        }
        case 6:{
            del_end();
            break;
        }
        case 7:{
            display();
            break;
        }
        case 8:{
            printf("exiting...\n");
            break;
        }
        default: {
            printf("enter a valid choice:\n");
        }
    }
    }
    return 0;
}
