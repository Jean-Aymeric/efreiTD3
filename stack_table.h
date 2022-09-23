
#ifndef EFREITD3_STACK_TABLE_H
#define EFREITD3_STACK_TABLE_H

#include <stdbool.h>
#include <stdlib.h>
#define StackTableSizeMax 100
struct StackTable{
    int values[StackTableSizeMax];
    int size;
};
typedef struct StackTable StackTable, *PStackTable;

PStackTable createStackTable();

void stackOnTableStack(PStackTable stackTable, int value);

int unstackOfTableStack (PStackTable stackTable);

bool isTableStackEmpty(StackTable stackTable);

bool isTableStackFull (StackTable stackTable);

#endif //EFREITD3_STACK_TABLE_H
