/* Surprise me. */

#include <stdio.h>

int main()
{
  int month;

  /* Input month number from user */
  printf("Enter month number(1-12): ");
  scanf("%d", &month);

  switch(month){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
         printf("31");
         break;
        
        case 4: case 6: case 9: case 11:
         printf("30");
         break;
        
        case 2:
         printf("28/29");
         break;
        
        default: printf("Invalid input! Please enter month number between 1-12");
                 return 0; 
  }
  
  printf(" days");
  return 0;
}