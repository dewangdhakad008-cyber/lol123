#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
};
void input(struct node*);
void traverse_ll(struct node* ptr);
void search(struct node*,int);
struct node*  at_start(struct node* ptr,struct node* new,int element);
void main(){
int element;
struct node *start=NULL;
struct node *first = (struct node*)malloc(sizeof(struct node));
struct node *second = (struct node*)malloc(sizeof(struct node));
struct node *third = (struct node*)malloc(sizeof(struct node));
struct node *fourth = (struct node*)malloc(sizeof(struct node));
struct node *fiveth = (struct node*)malloc(sizeof(struct node));
struct node *sixth = (struct node*)malloc(sizeof(struct node));
struct node *seventh = (struct node*)malloc(sizeof(struct node));
struct node *eighth = (struct node*)malloc(sizeof(struct node));
struct node *nineth = (struct node*)malloc(sizeof(struct node));
struct node *tenth = (struct node*)malloc(sizeof(struct node));
struct node *new1 = (struct node*)malloc(sizeof(struct node));
struct node *new2 = (struct node*)malloc(sizeof(struct node));
struct node *new3 = (struct node*)malloc(sizeof(struct node));
struct node *new4 = (struct node*)malloc(sizeof(struct node));

start=first;
first->link=second;
second->link=third;
third->link=fourth;
fourth->link=fiveth;
fiveth->link=sixth;
sixth->link=seventh;
seventh->link=eighth;
eighth->link=nineth;
nineth->link=tenth;
tenth->link=NULL;
input(start);
traverse_ll(start);
printf("Enter the element to be inserted at first node: ");
scanf("%d",&element);
start = at_start(start,new1,element);
traverse_ll(start);
}
void input(struct node* ptr){
    int i =1;
    while(ptr!=NULL){
        printf("Enter the element number %d: ",i);
        scanf("%d",&ptr->info);
        i++;
        ptr=ptr->link;
    }
}
void traverse_ll(struct node* ptr){
    int i =1;
    while(ptr!=NULL){
        printf("Element no. %d=%d\n",i,ptr->info);
        i++;
        ptr=ptr->link;
    }
   
}
struct node* at_start(struct node* ptr,struct node* new,int element){
new->link=ptr;
new->info=element;
ptr=new;
return ptr;
}
