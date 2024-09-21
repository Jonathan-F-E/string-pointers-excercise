#include "string_operations.h"

int demo_strlen(char *s){
    int i = 0;
    while(*s != '\0'){
        i++;
        s++;
    }
    return i;
}

void demo_strcpy(char *s, char *t){
    while(*t != '\0'){
        *s = *t;
        s++;
        t++;
    }
    *s = '\0';
}

int demo_strcmp(char *s, char *t){
    while(*s != '\0' && *t != '\0'){
        if(*s < *t){
            return -1;
        } else if(*s > *t){
            return 1;
        }
        s++;
        t++;
    }
    if(*s == '\0' && *t == '\0'){
        return 0;
    } else if(*s == '\0'){
        return -1;
    } else{
        return 1;
    }
}