#include <stdio.h>
#include <conio.h>
void main()
 {
   int n1,n2,res,ch;
   float div;
   
   printf("\n  1- addition ,\n  2-subtraction,\n  3-multiplication,\n  4-division");
   printf("\n enter your choice");
   scanf("%d",&ch);
   printf("\n enter two numbers");
   scanf("%d%d",&n1,&n2);
   switch(ch)
   {
       case 1:
       res=n1+n2;
       printf("\n addition is %d",res);
       break;
       case 2:
       res=n1-n2;
       printf("\n subtraction is %d",res);
       break;
       case 3:
       res=n1*n2;
       printf("\n multiplication is %d",res);
       break;
       case 4:
       res=n1/n2;
       printf("\n division is %d",res);
       break;
   }

     getch();
}
