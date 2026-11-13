//https://coddy.tech/learn/es/c/logic_and_flow/pointers_to_structs

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int id;
    char name[25];
    float price;
    int quantity;
}Product;

int main()
{
    Product item = {501, "Laptop", 899.99, 15};
    Product *itemPtr = &item;

    printf("Original Product Info:\n");
    printf("------------------------\n");
    printf("ID: %i\nName: \t\t%s\nPrice: \t\t%.2f\nQuantity: \t%i\n\n", item.id, item.name, item.price, item.quantity);
    printf("Product Info via Pointer:\n");
    printf("------------------------\n");
    printf("ID: %i\nName: \t\t%s\nPrice: \t\t%.2f\nQuantity: \t%i\n\n", itemPtr->id, itemPtr->name, itemPtr->price, itemPtr->quantity);
    itemPtr->id = 502;
    strcpy(itemPtr->name, "PC Destop");
    printf("------------------------\n");
    itemPtr->price = 788.95;
    itemPtr->quantity = 13;
    printf("Product Info Changed via Pointer:\n");
    printf("ID: %i\nName: \t\t%s\nPrice: \t\t%.2f\nQuantity: \t%i\n\n", item.id, item.name, item.price, item.quantity);

    return 0;
}
