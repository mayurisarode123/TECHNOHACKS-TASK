#include <stdio.h>
#include <string.h>
  
void main() 
{
   char array1[100]; 
   char array2[100];
   
   printf("Enter a string:-\n");

   scanf("%s", &array1); 

   gets(0);

   strcpy(array2,array1);
    
   strrev(array2);
    
   if(strcmp(array1,array2) == 0 )

   {
        printf("%s Given string is a palindrome.\n", array1);
   }

   else
   
   {
        printf("%s Given string is not a palindrome.\n",array2);
   }     
   
}