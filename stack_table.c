
#include "stack_table.h"
PStackTable createStackTable(){
    PStackTable stackTable = malloc(sizeof (StackTable));
    if(stackTable!= NULL){
        stackTable->size=0;
    }
    return stackTable;
}

void stackOnTableStack(PStackTable stackTable, int value){
    if(!isTableStackFull(*stackTable)){
        stackTable->values[stackTable->size]=value;
        stackTable->size++;
    }
}

int unstackOfTableStack (PStackTable stackTable){
    stackTable->size--;
    return stackTable->values[stackTable->size];
}

bool isTableStackEmpty(StackTable stackTable){
    return stackTable.size==0;
}

bool isTableStackFull (StackTable stackTable){
    return stackTable.size==StackTableSizeMax;
}