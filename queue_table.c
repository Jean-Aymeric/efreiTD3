#include "queue_table.h"


TableQueue* createTableQueue () {
    TableQueue* tableQueue = malloc(sizeof (TableQueue));
    if (tableQueue != NULL){
        tableQueue->first = 0;
        tableQueue->last = -1;
    }
    return tableQueue;
}

bool isTableQueueEmpty (TableQueue tableQueue) {
    return tableQueue.last == -1 && tableQueue.first == 0;
}

bool isTableQueueFull (TableQueue tableQueue){
    return ((tableQueue.last+1)%QueueTableSizeMax) == tableQueue.first;
}


void queueOnTableQueue (TableQueue* tableQueue, Customer customer){
    if (!isTableQueueFull(*tableQueue) || tableQueue->last == -1){
        tableQueue->last = (tableQueue->last+1)%QueueTableSizeMax;
        copyCustomer(&(tableQueue->values[tableQueue->last]), &customer);
    }
}

Customer* unqueueOfTableQueue (TableQueue* tableQueue){
    Customer* temp = NULL;
    if (!isTableQueueEmpty(*tableQueue)){
        temp = &tableQueue->values[tableQueue->first];
        tableQueue->first = (tableQueue->first+1)%QueueTableSizeMax;
        if ((tableQueue->first == 0) && (tableQueue->last == (QueueTableSizeMax-1))){
            tableQueue->last = -1;
        }
    }
    return temp;
}