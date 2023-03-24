#include <stdio.h>

#ifdef TEST
#define a 1
#endif

#ifndef TEST
#define a 2
#endif

int main(){
    printf("%d\n", a);
}