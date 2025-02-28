//
// Created by mazin on 28.02.2025.
//
#include "getLine.h"


char * getLine(){
    int originSize = 16;
    size_t len = 0;

    char *string = (char *)malloc(originSize * sizeof(char));

    if (!string) {
        printf("Ошибка в выделении памяти");
        return NULL;
    }

    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF) {
        *(string + len) = ch;
        len++;

        if (len > originSize - 1) {
            originSize *= 2;
            char *time_buffer = (char*)realloc(string, originSize * sizeof(char));

            if (!time_buffer) {
                printf("Ошибка в выделении памяти");
                free(string);
                return NULL;
            }
            string = time_buffer;
        }
    }
    *(string + len) = '\0';

    return string;
}
