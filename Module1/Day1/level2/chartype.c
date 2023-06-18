#include <stdio.h>
int typeofchar(char c) {
    if (c >= 'A' && c <= 'Z') {
        return 1;  
    } else if (c >= 'a' && c <= 'z') {
        return 2;  
    } else if (c >= '0' && c <= '9') {
        return 3; 
    } else if (c >= ' ' && c <= '~') {
        return 4;  
    } else {
        return 5;  
    }
}

int main() {
    char character;
    printf("character");
    scanf(" %c", &character);

    int chartype = typeofchar(character);

    switch (chartype) {
        case 1:
            printf("uppercase \n");
            break;
        case 2:
            printf("lowercase \n");
            break;
        case 3:
            printf("digit\n");
            break;
        case 4:
            printf("printable symbol\n");
            break;
        case 5:
            printf("non-printable symbol\n");
            break;
        default:
            printf("invalid\n");
            break;
    }

    return 0;
}
