***DOUBLE WAY CIRCULAR LINKED LIST***

**<INTRODUCTION:>**

 *Doubly circular linked list is a more complexes type of data structure in which a node contains pointers to its previous node as well as the next node. Doubly circular linked list   doesn’t contain NULL in any of the node. The last node of the list contains the address of the first node of the list. The first node of the list also contains address of the last node in its previous pointer.
Following functions that I have implemented:
1.	Menu()
2.	Display()
3.	Front()
4.	Back()
5.	Size()
6.	Empty()
7.	Push Front()
8.	Push Back()
9.	Pop Front()
10.	Pop Back()
11.	Clear()*


**USES:**

*1.	Managing songs playlist in media player applications.

2.	Managing shopping cart in online shopping.

3.	Circular linked lists are useful for playing video and sound files in looping mode

4.	They are also a stepping stone to implementing graphs.*
 

**CODE:**

  ***Display Function:***
```C
 void display()
{
    node *temp;
    temp=head;
    if(head == NULL)
    {
        printf("\nnothing to print");
    }
    else
    {
        printf("\n printing values ... \n");

        while(temp -> next != head)
        {

            printf("%d ", temp-> data);
            temp = temp -> next;
        }
        printf("%d\n", temp-> data);
    }

}

```
***Push Front Function:***
```c
void push_front()
{
   node *newnode,*temp;
   int item;
   newnode = (node *)malloc(sizeof(node));
   if(newnode == NULL)
   {
       printf("\nOVERFLOW");
       getchar();
       printf("\n\nPress Enter to Continue");
       getchar();
   }
   else
   {
    printf("\nEnter Item value:");
    scanf("%d",&item);
    newnode->data=item;
   if(head==NULL)
   {
      head = newnode;
      newnode-> next = head;
      newnode -> prev = head;
   }
   else
   {
       temp = head;
    while(temp -> next != head)
    {
        temp = temp -> next;
    }
    temp -> next = newnode;
    newnode-> prev = temp;
    head -> prev = newnode;
    newnode -> next = head;
    head = newnode;
   }
   printf("\nNode inserted\n");
   getchar();
   printf("\n\nPress Enter to Continue");
   getchar();
}
}
```
***Push Back Function:***
```C
void push_back()
{
   node *new_node,*temp;
   int item;
   new_node= (node *) malloc(sizeof(node));
   if(new_node == NULL)
   {
       printf("\nOVERFLOW");
       getchar();
       printf("\n\nPress Enter to Continue");
       getchar();
   }
   else
   {
       printf("\nEnter value:");
       scanf("%d",&item);
        new_node->data=item;
       if(head == NULL)
       {
           head = new_node;
           new_node -> next = head;
           new_node-> prev = head;
       }
       else
       {
          temp = head;
          while(temp->next !=head)
          {
              temp = temp->next;
          }
          temp->next = new_node;
          new_node ->prev=temp;
          head -> prev = new_node;
          new_node -> next = head;
        }
   }
     printf("\nnode inserted\n");
     getchar();
     printf("\n\nPress Enter to Continue");
     getchar();
}
```
***Pop Front Function:***
```c
void pop_front()
{
     node *temp;
    if(head == NULL)
    {
        printf("\n UNDERFLOW");
        getchar();
        printf("\n\nPress Enter to Continue");
        getchar();
    }
    else if(head->next == head)
    {
        head = NULL;
        free(head);
        printf("\nnode deleted\n");
        getchar();
        printf("\n\nPress Enter to Continue");
        getchar();
    }
    else
    {
        temp = head;
        while(temp -> next != head)
        {
            temp = temp -> next;
        }
        temp -> next = head -> next;
        head -> next -> prev = temp;
        free(head);
        head = temp -> next;
        printf("\nnode deleted\n");
        getchar();
        printf("\n\nPress Enter to Continue");
        getchar();

    }

}
```
***Pop Back Function:***
```C
void pop_back()
{
    node *temp;
    if(head == NULL)
    {
        printf("\n UNDERFLOW");
        getchar();
        printf("\n\nPress Enter to Continue");
        getchar();
    }
    else if(head->next == head)
    {
        head = NULL;
        free(head);
        printf("\nnode deleted\n");
        getchar();
        printf("\n\nPress Enter to Continue");
        getchar();
    }
    else
    {
        temp = head;
        if(temp->next != head)
        {
            temp = temp -> next;
        }
        temp-> prev -> next = head;
        head -> prev = temp-> prev;
        free(temp);
        printf("\nnode deleted\n");
        getchar();
        printf("\n\nPress Enter to Continue");
        getchar();
    }
}
```
***Size Function:***
```C
void size(node *temp){
if(head==NULL){
        return 0;
}

    int count = 0;
    node *current = head;
    do
    {
        count++;
        current = current->next;
    }
    while(current != head);
    printf("Size:%d\n",count);
    return count;
}
```
***Empty Function:***
```C
void empty(node *temp){
temp=head;
if(temp==NULL){
    printf("list Empty\n");
}
else
    printf("List is not Empty.\n");
}
```
***Front Function:***
```C
int front(node *temp){
   if(temp!=NULL){
    while(temp->next!=head->prev){
        temp=temp->next;
    }
    return temp->data;
}
else
    printf("LIST EMPTY\n");
}
```
***Back Function:***
```C
int back(node *temp){
if(temp!=NULL){
    while(temp->prev!=head){
        temp=temp->prev;
    }
    return temp->data;
}
else
    printf("LIST EMPTY\n");
}
```
***Full List Delete Function:***
```C
void clear(){
if(head!=NULL){
node *all_delete;
node *temp=head->next;
while(temp!=NULL && temp!=head){
    all_delete=temp;
    temp=temp->next;
    free(all_delete);
  }
 }
}
```
