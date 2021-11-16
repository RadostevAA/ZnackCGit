#include <stdio.h>

#include <string.h>

int main(int argc, char **argv)

{

<<<<<<< HEAD
    
printf("Hello world!\n");
char name[255];
=======
char first[255], last[255];
>>>>>>> a06663a38f13820b1aab874c5053456443db89db

printf("Enter your first name: ");

fgets(first, 255, stdin);

first[strlen(first)-1] = '\0'; /* remove the newline at the end */

printf("Now enter your last name: ");

gets(last); /* buffer overflow? what's that? */

printf("Hello %s %s!\n", first, last);

return 0;

}