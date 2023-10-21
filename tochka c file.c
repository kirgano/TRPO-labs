#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
<<<<<<< HEAD
char name[255];
printf("Enter your name: ");
fgets(name, 255, stdin);
name[strlen(name)-1] = '\0'; /* remove the newline at the end*/
printf("Hello %s!\n", name);
return 0;
}
=======
char first[255], last[255];
printf("Enter your first name: ");
fgets(first, 255, stdin);
first[strlen(first)-1] = '\0'; /* remove the newline at the end */
printf("Now enter your last name: ");
gets(last); /* buffer overflow? what's that? */
printf("Hello %s %s!\n", first, last);
>>>>>>> 3ed7f81a5afb0b762f98e4b285a5f588348bf4d2
