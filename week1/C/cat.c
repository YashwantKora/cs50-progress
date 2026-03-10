#include <stdio.h>

void meow(void);
void meow1(int n);

// int main(void) {
//     int i = 3;
//     while (i > 0) {
//         printf("meow\n");
//         i--;
//     }
//     return 0;
// }

// int main(void) {
//     for(int i = 0; i < 3; i++) {
//         printf("meow\n");
//     }
// }

//infinite loop osns

// int main(void) {
//     while(1) {
//         printf("meow\n");
//     } 
//     return 0;
// }

int main(void) {
    int n;
    do {
        printf("Number:\n");
        scanf("%i", &n);
    }while (n < 1);
    
    meow1(n);
    return 0;
}

// void meow(void) {
//     for (int i = 0; i < 3; i++) {
//         printf("meow\n");
//     }
// }

void meow1(int n) {
    for(int i = 0; i < n; i++) {
        printf("meow\n");
    }
}

