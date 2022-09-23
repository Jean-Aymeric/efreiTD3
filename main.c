#include <stdio.h>
#include "stack_table.h"
#include "queue_table.h"

int main() {
   /* PStackTable stackTable=createStackTable();
    for(int i =0; i<15; i++){
        stackOnTableStack(stackTable,i);
    }
    while (!isTableStackEmpty(*stackTable)){
        printf("%d\t", unstackOfTableStack(stackTable) );
    }
    */

   TableQueue* tableQueue = createTableQueue();
   Customer* c1 = createCustomer("arthur", 500);
   Customer* c2 = createCustomer("jad", 200);
   Customer* c3 = createCustomer("paul", 300);

    queueOnTableQueue(tableQueue, *c1);
    queueOnTableQueue(tableQueue, *c2);
    queueOnTableQueue(tableQueue, *c3);

    while (!isTableQueueEmpty(*tableQueue)){
        displayCustomer(unqueueOfTableQueue(tableQueue));
        printf("\t");
    }

}


