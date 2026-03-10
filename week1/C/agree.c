#include <stdio.h>

int main(void) {
    char response; 
    printf("Do you agree y/n?\n");
    scanf("%c", &response);
    
    if (response == 'y' ||  response == 'Y') {
        printf("Agreed\n");
    }
    else if (response == 'n' || response == 'N'){
        printf("Not Agreed\n");
    }
    else {
        printf("Please enter either 'y/Y' or 'n/N'\n");
    }
    return 0;
}