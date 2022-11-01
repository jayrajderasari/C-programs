#include<stdio.h>
#include<stdlib.h>
struct product{
    char *itemName;
    int quantity;
    float price, amount;
};

void readItem(const struct product *i){
  printf("Enter Item name, price and quantity");
  scanf("%s %f %d", i->itemName, &i->price, &i->quantity);
}
void printItem(struct product *i){
  printf("\nName: %s", i->itemName);
  printf("\nQuantity: %d", i->quantity);
  printf("\nRate: %f", i->price);
  printf("\nAmount: %f", i->amount);
}

void main(){
  struct product item;
  struct product *pItem;
  pItem = &item;
  pItem->itemName = (char *) malloc(30*sizeof(char));
  if(pItem == NULL){
    exit(-1);
  }
  readItem(pItem);
  printItem(pItem);
  free(pItem->itemName);
  return 0;
}