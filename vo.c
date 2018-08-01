#include<stdio.h>
int main()
{
  char ch;
  printf("\nEnter the a character");
  scanf("%c",&ch);
    switch(ch)
     {
       case'a':
       case'e':
       case'i':
       case'o':
       case'u':
        printf("It is a vowel\n");
	break;
   default: printf("it is a consonant\n");
   }
   return 0;
}   
