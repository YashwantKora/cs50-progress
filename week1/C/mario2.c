#include <stdio.h>
//trying to make it more modular
//update: works as intended, very cool

void print_row(int n);
void print_col(int n);

int main(void) { 
    int rows = 5;
    int cols = 5;

    for (int i = 0; i < rows; i++){
        print_col(rows);
    }
}




void print_row(int n) { 
    for (int i = 0; i < 3; i++) {
        printf("#");
    }
    printf("\n");
}

void print_col(int n) {
    for (int i = 0; i < n; i++) {
        printf("#");
    }
    printf("\n");
}