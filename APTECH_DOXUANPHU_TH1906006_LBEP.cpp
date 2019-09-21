#include <stdio.h>
 
void concat(char*, char*);
 
int main()
{
    char s1[100], s2[100];
   
    printf("Enter first string\n");
    gets(s1);
   
    printf("Enter secornd string\n");
    gets(s2);
   
    concat(s1,s2);
   
    printf("String after concatenation: \"%s\"\n", s1);
       
    return 0;
}
 
void concat(char *s1, char *s2)
{
   while(*s1)
      s1++;
     
   while(*s2)
   {
      *s1 = *s2;
      s1++;
      s2++;
   }
   *s1 = '\0';
}

