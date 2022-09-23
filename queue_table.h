#ifndef EFREITD3_QUEUE_TABLE_H
#define EFREITD3_QUEUE_TABLE_H

#include <stdbool.h>
#include "customer.h"
#define QueueTableSizeMax 3

typedef struct TableQueue {
    Customer values[QueueTableSizeMax];
    int first;
    int last;
}TableQueue;

TableQueue* createTableQueue ();

void queueOnTableQueue (TableQueue* tableQueue, Customer customer);

Customer* unqueueOfTableQueue (TableQueue* tableQueue);

bool isTableQueueEmpty (TableQueue tableQueue);

bool isTableQueueFull (TableQueue tableQueue);

#endif //EFREITD3_QUEUE_TABLE_H
