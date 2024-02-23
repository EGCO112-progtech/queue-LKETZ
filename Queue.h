

typedef struct Queue{
   order *head,*tail;
    int size;
}order;



void enqueue_struct(order* q, int x){
  Node *new_node=(Node*) malloc(sizeof(Node));

if(new_node){ 
  new_node->data=x;
  if(q->size==0) q->headPtr=new_node;
  else q->tailPtr->nextPtr=new_node;
  q->tailPtr=new_node;
  q->size++;
 }
}


int dequeue_struct(order *q){
   NodePtr t=q->headPtr;
   if(t){
   int value=t->data;
   q->headPtr=t->nextPtr;
   if(q->size==1)
   {
    q->tailPtr=NULL;
   }
   q->size--;
   free(t);
   return value;
   }
   printf("order %d is complted\n");
   return 0;
}

