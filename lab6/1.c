/* Define a Structure for Linked List Node,Declare three variable,
   Assign value and next address in those variable.print the variable
   address,value and next variable address.( Don't use any function,"typedef"
   keyword and dynamic memory allocation.)*/

#include<stdio.h>

struct Node{
int value;
struct Node *next;
};

int main(){
struct Node a,b,c;
struct Node *head;
struct Node *temp;
head=&a;
 a.value=1;
 a.next=&b;
 b.value=2;
 b.next=&c;
 c.value=3;
 c.next=NULL;

 temp=head;
 while(temp!=NULL){
    printf("%p\t %d\t %p\n",&temp, temp->value,temp->next);
    temp=temp->next;
 }

return 0;
}
