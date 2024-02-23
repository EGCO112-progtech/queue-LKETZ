//
//  linkedlist.h
//  LinkedList_simple
//
//  Created by Mingmanas Sivaraksa on 5/2/2566 BE.
//
#ifndef Node_h
#define Node_h

typedef struct node{
   struct node* nextPtr;
   int order_number;
   int q;
}order;



typedef struct node Node;
typedef struct node* NodePtr;


void enqueue(NodePtr * head, NodePtr* tail, int x ,int y){
  Node* new_node=(NodePtr) malloc(sizeof(Node));
if(new_node)
{ 
    /* Finish queue*/
    new_node->order_number = x;
    new_node->q = y;
    new_node->nextPtr = NULL;
    if( *head =NULL) *head = new_node;
    else (*tail)->nextPtr=new_node;
  *tail=new_node;
}
}


int dequeue(NodePtr* head, NodePtr* tail){
  NodePtr t=*head;
  if(t)
  {
  int customer=t->order_number;
  *head= (*head)->nextPtr; // NULL
  free(t);
  if(*head==NULL) 
  *tail=NULL;
  return customer;
  }
  printf("Empty queue");
  return 0;
}

void price()


#endif
