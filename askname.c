#include <stdio.h>
#include <string.h>
void askname(char *first, char *last)
{
<<<<<<< HEAD
printf("Enter your first name: CHANGE 4 COPY");
=======
printf("Enter your first name: ");
>>>>>>> d3d1bfb (vse ok)
fgets(first, 255, stdin);
first[strlen(first)-1] = '\0'; /* remove the newline at the end */
printf("Now enter your last name: ");
gets(last); /* buffer overflow? what's that? */
}
