#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"
#include "Queue.h"

int main(int argc , char **argv) {
  NodePtr headPtr=NULL;
  NodePtr tailPtr=NULL;
// 5 x 9 x 7 x 8 2 x
  int x;
  // enqueue(&headPtr, &tailPtr,5);
  // enqueue(&headPtr, &tailPtr,6);
  // enqueue(&headPtr, &tailPtr,7);
  // x = dequeue(&headPtr, &tailPtr);
  // printf("%d",x);

  // x = dequeue(&headPtr, &tailPtr);
  // printf("%d",x);

  // x = dequeue(&headPtr, &tailPtr);
  // printf("%d",x);

  Queue q;
  q.headPtr = NULL;
  q.tailPtr = NULL;
  q.size = 0;


 for(int i=1;i<argc;i++){
        if(strcmp(argv[i],"x")==0){
            x=dequeue_struct(&q);
            printf("dequeing %d\n",x);
        }
        else {
       enqueue_struct(&q, atoi(argv[i]));
           
        }
 }
  return 0;
}
