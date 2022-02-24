#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct item
{
    char *itemName;
    int quantity;
    float price;
    float amount;
};

void readItem(struct item *myItem);
void printItem(struct item *myItem);

int main()
{
    struct item itemOne;
    struct item *pItemOne;
    pItemOne = &itemOne;

    pItemOne->itemName = (char*)malloc(30 * sizeof(char));

    if (pItemOne == NULL)
    {
        exit(-1);
    }
    
    readItem(pItemOne);
    printItem(pItemOne);

    free(pItemOne->itemName);

    return 0;
}

void readItem(struct item *myItem)
{
    printf("Enter product name: ");
    scanf("%s", myItem->itemName);
    
    printf("\nEnter price: ");
    scanf("%f", &myItem->price);

    printf("\nEnter quantity: ");
    scanf("%d", &myItem->quantity);

    myItem->amount = (float)(myItem->price * myItem->quantity);
}

void printItem(struct item *myItem)
{
    printf("\n========== ITEM ==========\n");
    printf("Name: %s\nPrice: %.2f\nQuantity: %d\nAmount: %.2f\n", myItem->itemName, myItem->price, myItem->quantity, myItem->amount);
}