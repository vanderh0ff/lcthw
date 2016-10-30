#include <stdio.h>
#blag
int main(int argc, char *argv[])
{
    // go through each string in argv
    int i = argc;
    while(i > 0){
        i--;
        printf("arg %d: %s\n",i,argv[i]);
    }
    char *states[] = {
        "California", "Oregon",
        "Washington", "Texas"
    };

    int num_states = 4;

    i = num_states;
    while(i > 0){
        i--;
        printf("state %d: %s\n", i, states[i]);
    }

    i = 0;
    while( i < 4 ){
        states[i] = argv[i];
        i++;
    }

    printf("after setting argvs\n%s\n%s\n%s\n%s\n",states[0],states[1],states[2],states[3]);

    return 0;
}


