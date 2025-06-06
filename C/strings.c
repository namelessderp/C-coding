#include <stdio.h>
#include <stdbool.h>
#include <string.h> // needed to use strlen

// use \"...\" for inverted 2 commas and \'...\' for 1 inverted comma in strings 
// anything after backslash will be added to the string at that positon. Eg : "\\" gives output : '\'
// use strcat(name,surname) to concatenate 2 strings

int main(){
    char name[] = "Johnny ";
    char name2[] = {'J','o','h','n',' ','T','a','n','\0'};// another way of creating string
    char animal[] = {'D','o','g','\0'};
    char surname[] = "Lee";
    int i;
    // printf("%d\n",strlen(name));
    // printf("%lu\n",sizeof(name)); // sizeof() includes \0, so output from strlen() would be diff by 1.
    // printf("Your name is %s and the first letter of your name is : %c\n\n",name,name[0]);
    // printf("%s is called the \'King\' of the north !\n\n ",name);
    // printf("Name 2 : %s\n",name2);
    // printf("Animal : %s\n",animal);
    
    name[0] = 'L';
    for (i = 0;i<strlen(name);i+=1){
        printf("%c\n",name[i]);
    }
    strcat(name,surname); // result is stored in first variable in the function
    printf("%s\n",name);
    return 0;
}