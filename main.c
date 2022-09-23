#include <stdio.h>
#include "stack_table.h"
int main() {
    PStackTable stackTable=createStackTable();
    for(int i =0; i<15; i++){
        stackOnTableStack(stackTable,i);
    }
    while (!isTableStackEmpty(*stackTable)){
        printf("%d\t", unstackOfTableStack(stackTable) );
    }
}
