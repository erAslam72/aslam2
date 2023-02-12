#include<stdio.h>
int main()
{
   int num;

   printf("Enter score( 0-100 ) ");
   scanf("%d", &num);

   switch( num / 10 )
   {
   case 10:
   case 9:
     printf("Grade: A");
     break;

   case 8:
     printf("Grade: B");
     break;

   case 7:
     printf("Grade: C");
     break;

   case 6:
     printf("Grade: D");
     break;

   case 5:
     printf("Grade: E");
     break;
     
   case 4:
     printf("Grade: fail");
     break;

   default:
     printf("Grade: F");
     break;

   }

   return 0;
}

