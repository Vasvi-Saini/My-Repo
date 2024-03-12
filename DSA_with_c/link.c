#include<stdio.h>
struct node{
    int data;
    struct node* next;
}*newnode,*prev,*temp;


void insert_at_beg();
void insert_at_pos();
void insert_at_end();
void delete_at_beg();
void delete_at_pos();
void delete_at_end()
void display();