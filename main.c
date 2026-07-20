#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//functions

//Addition
void Add(){
    printf("\n---ADDITION---\n");

    int a=0, b=0;
    printf("\n Enter no. 1: ");
    scanf("%d", &a);

    printf("\n Enter no. 2: ");
    scanf("%d", &b);

    printf("Sum of both numbers is: %d", a+b);

    printf("\n\nPress enter...");
    getch();

}

//subtraction
void Subtract(){
    printf("\n---SUBTRACTION---\n");

    int a=0 ,b=0;
    printf("\n Enter no. 1: ");
    scanf("%d", &a);

    printf("\n Enter no. 2: ");
    scanf("%d", &b);

    printf("Subtraction of both numbers is: %d", a-b);

    printf("\n\nPress enter...");
    getch();
}

//Multiplication
void Multiply(){
    printf("\n---MULTIPLICATION---\n");

    int a=0, b=0;
    printf("\n Enter no. 1: ");
    scanf("%d", &a);

    printf("\n Enter no. 2: ");
    scanf("%d", &b);

    printf("Product of both numbers is: %d", a*b);

    printf("\n\nPress enter...");
    getch();
}

//Devision
void Devide(){
    printf("\n---DEVISION---\n");
    
    int a=0, b=0;
    printf("\n Enter no. 1: ");
    scanf("%d", &a);

    printf("\n Enter no. 2: ");
    scanf("%d", &b);
    if(a==0 || b==0){
        printf("Cannot devide by zero.");
        return;
    }
    printf("Sum of both numbers is: %d", a/b);

    printf("\n\nPress enter...");
    getch();
}

int main(){
    int choice= -1;

    do{
        printf("\n----- C - Calculator -----\n");
        printf("\n Choose an option: ");
        printf("\n 1: Addition of two numbers."); //done
        printf("\n 2: Subtaction of two numbers."); //done
        printf("\n 3: Multiplication of two numbers.");  //done
        printf("\n 4: Devision of two numbers."); //done
        printf("\n 5: Reverse a number.");
        printf("\n 6: Count Digits.");
        printf("\n 7: Sum of digits.");
        printf("\n 8: Greatest common devisor (GCD)");
        printf("\n 9: Lowest common multiple (LCM)");
        printf("\n 10: Multiplication Table");
        printf("\n 11: Sum of first N natural numbers");
        printf("\n 12: Sum of all odd no. till N");
        printf("\n 12: Sum of all even no. till N");
        printf("\n 0: Exit program");

        printf("\n\n Enter choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
            //sum
            system("cls");
            Add();
            system("cls");
            break;

            case 2:
            //subtract
            system("cls");
            Subtract();
            system("cls");
            break;

            case 3:
            //multiply
            system("cls");
            Multiply();
            system("cls");
            break;

            case 4:
            //devide
            system("cls");
            Devide();
            system("cls");
            break;

            case 0:
            //program ended
            system("cls");
            printf("\nExit Program");
            break;

            default :
                printf("Invalid Choice.");
        }

    }

    while(choice != 0);


    return 0;
}