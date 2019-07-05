#include <stdio.h>

main(){
    char c=getchar();
    (c=='+' || c=='-' || c=='*' || c=='/')? main(),main(): 0;
    putchar(c);
}
