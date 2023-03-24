#include <stdlib.h>

int main(){
    //int n = 100000;
    //char* ptr;
    //while(n-- > 0){
        //*ptr++ = 0;
    //}
}

char arr[8];
void test(void){
    for (int i=0; i<7; i++)
        arr[i]=arr[i+1];

    // the compiler replaces the loop with memmove  
}












