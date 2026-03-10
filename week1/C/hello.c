#include <stdio.h>

// int main(void)
// {
//     char name[50];
//     int age;

//     printf("What's your name? \n");
//     scanf("%s", name);

//     printf("What's your age? \n");
//     scanf("%i", &age);

//     printf("Hello %s!\n", name);
//     printf("You are %i years old!\n", age);

//     if (age <= 17)
//     {
//         printf("NO! minors can't enter\n");
//     }
//     else if (age >= 18 && age < 65)
//     {
//         printf("YES! you can enter\n");
//     }
//     else 
//     {
//         printf("Dawg u unc, please retire!\n");
//     }
//     return 0;
// }

int main(void) {
    char name[50];
    int age;

    printf("What is your name? \n");
    scanf("%s", name);

    printf("What is your age? \n");
    scanf("%i", &age);

    printf("Welcome %s\n", name);
    if(age > 59 && age < 90) {
        printf("Senior discount available! pay $20");
    }
    else if (age > 17 || age < 60) {
        printf("Pay $40");
    }
    else {
        printf("Too young to buy online!");
    }
    return 0;
}

