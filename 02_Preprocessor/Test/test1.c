#include "test1.h"

int func(){
    print("func\n");
}

int main(){
    printf("test1");
    int b = MACRO;
    func();
}