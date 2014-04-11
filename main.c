#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>

#ifdef _WIN32

#include <string.h>

static char buffer[2048];

char * readline(char * prompt){
    fputs(prompt, stdout);
    fgets(buffer, 2048, stdin);
    char * copy = malloc(strlen(buffer) + 1);
    copy = strcpy(copy, buffer);
    copy[strlen(buffer+1)] = '\0';
    return copy;
}

#else

void add_history(char * unused ){}

#endif


int main(int argc, char ** argv){

    puts("Lispy Version 0.0.0.0.1");
    puts("Press Ctrl+c to Exit\n");

    while(1){
        char * input = readline("lispy> ");
        add_history(input);

        printf("No you are a %s\n", input);
        free(input);
    }
}
