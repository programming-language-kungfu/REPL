#include<stdio.h>

static char user_input_buffer[2048];

int main(int argc, char ** argv){

    puts("Lispy Version 0.0.0.0.1");
    puts("Press Ctrl+c to Exit\n");

    while(1){
        fputs("Lispy>", stdout);
        fgets(user_input_buffer, 2048, stdin);

        printf("No you are a %s", user_input_buffer);
    }
}
