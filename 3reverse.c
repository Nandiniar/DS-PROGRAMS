//PROGRAM TO REVERSE The circular linked list

#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
int val;
struct Node*next;

}Node;
Node *createNode(int val){
    Node*temp=(Node*)malloc(sizeof(Node));
    temp->val=val;
    temp->next=NULL;
}
void insert_beg(Node*last,int val){
if(last==NULL){
    last=createNode(val);
    last->next=last;
}
else{
    Node *temp=createNode(val);
    Node*t=last->next;
    last->next=temp;
    temp->next=t;
}
}
void reverselist(Node **last){
Node *current=(*last)->next;
Node *prev=NULL,*next=NULL;
(*last)->next=NULL;
Node *temp=current;
while(current!=NULL){
    next=(current)->next;
    (current)->next=prev;
    prev=current;
    current=next;

}
*last=temp;
}
void show(Node *last){
if(last==NULL){
    printf("Empty Circular linked list\n");
    return ;
}
Node *current=last->next;
printf("\n Nodes of Circular linked list are\n");
do{
    printf("%d %p\t",current->val,current->next);
    current=current->next;

}while(current!=last->next);
}
Node *conact(Node *last1,Node*last2){
Node *temp=last1->next;
last1->next=last2->next;
last2->next=temp;
return last2;
}

int main(){
    Node *last1=NULL;
    Node *last2=NULL;
 Node *last3=NULL;
    insert_beg(&last1,5);
    insert_beg(&last1,10);
    insert_beg(&last1,15);
    insert_beg(&last1,25);
    insert_beg(&last2,50);
     insert_beg(&last2,10);
      insert_beg(&last2,55);
       insert_beg(&last2,45);
       printf("List1 is\n");
       show(last1);
printf("List 2 is\n");
show(last2);
last3=conact(&last1,&last2);
show(last3);


return 0;
}
