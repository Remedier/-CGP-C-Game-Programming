#include <stdio.h>

enum COUNT { ZERO, ONE, TWO, THREE, }; // ZERO : 0, ONE : 1, TWO : 2

int main(void){
    enum COUNT nCount; // enum declaration
    nCount = TWO; // assign value
    printf("출력 : nCount = %d\n", nCount);
    return 0; 
}