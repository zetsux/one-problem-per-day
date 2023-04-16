#include <stdio.h>
#include <string.h>
#include <iostream>

int main() {
    char stra[100], strb[100];
    scanf("%s", stra);
    scanf("%s", strb);

    for (int i = 0; i < strlen(stra); i++) {
        stra[i] = tolower(stra[i]);
        strb[i] = tolower(strb[i]);
    }

    printf("%d", strcmp(stra, strb));
}