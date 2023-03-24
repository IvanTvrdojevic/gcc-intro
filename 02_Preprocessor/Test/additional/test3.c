#include <stdio.h>

#include "test1.h"
#ifdef TEST
#define b 1
#endif

#ifdef TEST2
#define a 1
#endif

int main(){
    printf("%d\n", a);
    printf("%d\n", b);
}
