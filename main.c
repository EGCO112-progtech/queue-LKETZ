#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"
#include "Queue.h"

int main(int argc , char **argv) 
{
  NodePtr headPtr=NULL;
  NodePtr tailPtr=NULL;
// 5 x 9 x 7 x 8 2 x
  int x;
  printf("List of order number\n");
  printf("Ramen 100 Baht\n");
  printf("Somtum 20 Baht\n");
  printf("Fried Chicken 50 Baht\n");

  Queue q;
  q.headPtr = NULL;
  q.tailPtr = NULL;
  q.size = 0;


 for(int i=1;i<argc;i++){
        
        //price
        if(strcmp(argv[i],"x")==0){
          if(q.size>=1)
          {
            x=dequeue_struct(&q);
            printf("customer %d\n",x);
          }
          else
          {
            printf("Empty Queue\n");
          }
           
        }
        else {
       enqueue_struct(&q, atoi(argv[i]));
           
        }
 }
  return 0;
}
