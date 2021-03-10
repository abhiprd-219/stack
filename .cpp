#include <stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next;
};

  struct node *top=NULL;

void push(int x){
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=top;
    top=newnode;
    
    
}

void display(){
    struct node *temp;
    temp=top;
    while(temp!=NULL){
        printf(" %d ",temp->data);
        temp=temp->next;
    }
}

//void peek(){
    //printf("\ntop most element is = ////%d\n",top->data);
}

void pop(){
    struct node *t;
    t=top;
    printf("\npopped element is %d ",top->data);
    top=top->next;
    free(t);
}

int main() {

   push(1);
   push(2);
   pop();
   pop();
   push(3);
   pop();
   //rintf("\nelements in stack are = ");
   
   display();
   
   
   //printf("\nelements in stack are = ");
   
   //display();
    return 0;
}
