#include "customer.h"

Customer* createCustomer(char name[30], float amount){
    Customer* customer = malloc (sizeof(Customer));
    if (customer != NULL) {
        strcpy(customer->name, name);
        customer->amount = amount;
        customer->passedTime = 0;
    }
    return customer;
}

void displayCustomer (Customer* customer){
    if (&customer != NULL) {
        printf("%s(%f, %d)", customer->name, customer->amount, customer->passedTime);
    }
}

void copyCustomer (Customer* dest, Customer* source){
    if (source != NULL) {
        strcpy(dest->name, source);
        dest->amount = source->amount;
        dest->passedTime = source->passedTime;
    }
}
