#include <stdio.h>
#include <stdlib.h>
#include "getLine.h"
#include "trimSpaces.h"


int main(void) {
    const int originSize = 10;
    char* string = (char *)malloc(originSize * sizeof(char));

    char* str = getLine();
    trimSpaces(str);
    printf("%s", str);


    free(str);
    return 0;
}
