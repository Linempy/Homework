//
// Created by mazin on 28.02.2025.
//

#include "trimSpaces.h"


void trimSpaces(char *buffer) {
    char *read_ptr = buffer;
    char *write_ptr = buffer;
    bool flag = false;

    while (*read_ptr == ' ') {
        read_ptr++;
    }

    while (*read_ptr != '\0') {
        if (*read_ptr != ' ') {
            *write_ptr = *read_ptr;
            write_ptr++;
            flag = false;
        } else if (!flag) {
            *write_ptr = ' ';
            write_ptr++;
            flag = true;
        }
        read_ptr++;
    }
    *write_ptr = '\0';
}
