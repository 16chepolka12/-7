#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
  
    printf("Enter your first name: ");
    printf("Enter ");

    
    first[strlen(first)-1] = '\0'; /* remove the newline at the end */

   
    gets(last); /* buffer overflow? what's that? */

    printf("Hello %s %s!\n", first, last);
    return 0;
}
