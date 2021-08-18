#include<stdio.h>
int main()
{
  int choose;
  printf("enter the choose from 1-5");
  scanf("%d",&choose);
  switch(choose)
  {
    case 1: printf("food item - sandwich \n price-Rs149");
    case 2: printf("food item - pizza \n  price-Rs239");
    case 3: printf("food item - pasta \n price-Rs179");
    case 4: printf("food item - burger \n price-Rs129");
    case 5: printf("food item - french fries \n price-Rs99");
      default :printf("choose not in list");
      return 0;
  }
      
    
  
