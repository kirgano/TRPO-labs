#include <stdio.h>
Методические указания к лабораторной работе №2 17
по курсу «Технологии разработки программного обеспечения»
#include <string.h>
int main(int argc, char **argv)
{
char name[255];
printf("Enter your name: ");
fgets(name, 255, stdin);
name[strlen(name)-1] = '\0'; /* remove the newline at the end aaaaaaaaaaaaaaaaaaaaaaaaaaa*/
printf("Hello %s!\n", name);
return 0;
}