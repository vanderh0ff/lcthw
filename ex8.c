#include <stdio.h>

int main(int argc, char* argv[])
{
    char full_name[] = {
    'Z','e','d',' ',
    'A',' ',
    'S','h','a','w'
    //,'\0'
    };
    int areas[] = {10,12,13,14,20};
    char name[] = "Zed";

    //WARNING: on some systems you may have to change the
    // %ld in this code to a %u since it will use unsigned ints
    printf("the size of an int %ld\n", sizeof(int));
    printf("the size of areas(int[]): %ld\n", sizeof(areas));
    printf("the number of ints in areas: %ld\n", sizeof(areas)/sizeof(int));
    printf("the first areas is %d the second is %d\n",areas[10],areas[1]);
    printf("the size of a char: %ld\n", sizeof(char));
    printf("the size of name (char[]): %ld\n", sizeof(name));
    printf("the numbers of chars in name: %ld\n",sizeof(name)/sizeof(char));
    printf("the size of full name (char[]): %ld\n", sizeof(full_name));
    printf("the numbers of chars in fullname: %ld\n",sizeof(full_name)/sizeof(char));

    return 0;
}
