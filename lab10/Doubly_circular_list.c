/*Doubly Circular Linked List*/


#include<stdio.h>
#include<stdlib.h>


typedef struct Node node;
struct Node{
int data;
node *next;
node *prev;
};
node *head=NULL;
void menu();
void display();
void push_front();
void push_back();
void pop_front();
void pop_back();
void empty(node *temp);
void size(node *temp);
int front(node *temp);
int back(node *temp);


int main(){
node *head=NULL;
menu();
return 0;
}
void menu(){
int choice;
    do
    {
        system("cls");
        printf("\nMain Menu\n");
        printf("\nChoose one option from the following list ...\n");
        printf("\n===============================================\n");
        printf("1. Display\n");
        printf("2. Empty\n");
        printf("3. Size\n");
        printf("4. Front\n");
        printf("5. Back\n");
        printf("6. Push Front\n");
        printf("7. Push Back\n");
        printf("8. Pop Front\n");
        printf("9. Pop Back\n");
        printf("10. Clear\n");
        printf("11. Close\n");
        printf("\n");
        printf("\nEnter your choice:\n");
        scanf("%d", &choice);

         if(choice<=0 || choice>11)
        {
            printf("Invalid Choice.\nPlease Insert Between 1 to 11\n");
            getchar();
            printf("\nPress Enter to Continue");
            getchar();

        }
        else if(choice==1)
        {
            printf("....\n Doubly Circular Linked List.\n....");
            display();
            getchar();
            printf("\n\nPress Enter to Continue");
            getchar();
        }
        else if(choice==2)
        {
            empty(head);
            getchar();
            printf("\nPress Enter to Continue");
            getchar();
        }
        else if(choice==3)
        {
            size(head);
            getchar();
            printf("\nPress Enter to Continue");
            getchar();
        }
        else if(choice==4)
        {
            printf("List Front: %d\n",front(head));
            getchar();
            printf("\nPress Enter to Continue");
            getchar();
        }
        else if(choice==5)
        {

            printf("List Back: %d\n",back(head));
            getchar();
            printf("\nPress Enter to Continue");
            getchar();
        }
        else if(choice==6)
        {
            push_front();
        }
        else if(choice==7)
        {
            push_back();
        }
        else if(choice==8)
        {
            pop_front();
        }
        else if(choice==9)
        {
            pop_back();
        }
        else if(choice==10)
        {
            clear();
            printf("Delete All Node From List");
            getchar();
            printf("\n\nPress Enter to Continue");
            getchar();
        }
    }
while(choice!=11);
}
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
void size(node *temp){
if(head==NULL){
        return printf("Empty List");
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


void empty(node *temp){
temp=head;
if(temp==NULL){
    printf("list Empty\n");
}
else
    printf("List is not Empty.\n");
}

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

