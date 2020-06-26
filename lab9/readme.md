***Implement an "insert front" function to insert an element at the beginning (front) linked list.***

```C
node* insert_front(node *temp, int key){
node *new_head;
new_head=(node*)malloc(sizeof(node));
new_head->value=key;
new_head->next=temp;
return new_head;
}
```
****Implement an "insert back" function to insert an element at end (back) of the linked list.***

```C
node* insert_back(node *temp, int key){
if(temp==NULL){
node *new_head;
new_head=(node*)malloc(sizeof(node));
new_head->value=key;
new_head->next=NULL;
return new_head;
}
node *head=temp;
while(temp->next){
    temp=temp->next;
    }
    node *new_node;
new_node=(node*)malloc(sizeof(node));
new_node->value=key;
new_node->next=NULL;
temp->next=new_node;
return head;
}
```
***/*Implement an "insert at" function to insert an element at nth index of the linked list.
   Take input n And value from user.(Check index out of range)[Let, for the first element n=1]***
   
   ```C
   

