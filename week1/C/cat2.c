#include <stdio.h>

int get_positive_int(void);
void meow_print(int n);

int main(void) {
    int times = get_positive_int();
    meow_print(times);
}



int get_positive_int(void){
    int n;
    do{
        printf("Number: ");
        scanf("%i", &n);
    }while(n <= 0);
    return n;
}

void meow_print(int n) {
    for(int i = 0; i < n; i++) {
        printf("meow\n");
    }

}