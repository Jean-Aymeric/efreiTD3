#ifndef EFREITD3_CUSTOMER_H
#define EFREITD3_CUSTOMER_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


typedef struct Customer {
    char name[30];
    float amount;
    int passedTime;
}Customer;

Customer* createCustomer(char name[30], float amount);

void displayCustomer (Customer* customer);

void copyCustomer (Customer* dest, Customer* source);

#endif //EFREITD3_CUSTOMER_H
