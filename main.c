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

    printf("\nSum of both numbers is: %d", a+b);

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

    printf("\nSubtraction of both numbers is: %d", a-b);

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

    printf("\nProduct of both numbers is: %d", a*b);

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
    printf("\nSum of both numbers is: %d", a/b);

    printf("\n\nPress enter...");
    getch();
}

void reverse(){
    printf("\n---REVERSE NUMBER---\n");

    int a=0, res=0;
    printf("\n Enter number: ");
    scanf("%d", &a);

    while (a!=0)
    {
        int r= a%10;
        res= res*10 + r;
        a=a/10;
    }
    

    printf("\nReversed Number is: %d", res);

    printf("\n\nPress enter...");
    getch();


}

void countDig(){
    printf("\n---COUNT DIGITS OF A NUMBER---\n");

    int a=0, sum=0;
    printf("\n Enter number: ");
    scanf("%d", &a);

    while (a!=0)
    {
        sum++;
        a=a/10;
    }
    

    printf("\nCount of digits is: %d", sum);

    printf("\n\nPress enter...");
    getch();
    
}

void sumDig(){
    printf("\n---SUM OF ALL DIGITS---\n");

    int a=0, sum=0;
    printf("\n Enter number: ");
    scanf("%d", &a);

    while (a!=0)
    {
        int r= a%10;
        sum+=r;
        a=a/10;
    }
    

    printf("\nSum of all digits is: %d", sum);

    printf("\n\nPress enter...");
    getch();
    
}

void gcd(){
    
}

void lcm(){
    
}

void mulTable(){
    printf("\n---MULTIPLICATION TABLE---\n");

    int a=0;
    printf("\n Enter number: ");
    scanf("%d", &a);

        for(int i=1; i<=10; i++){
            int b= a*i;
            printf("%d x %d = %d\n", a, i, b);
        }

    printf("\n\nPress enter...");
    getch();
}

void sumtillN(){

    printf("\n---SUM OF ALL NUMBERS TILL N---\n");

    int n=0,sum=0;
    printf("\n Enter n: ");
    scanf("%d", &n);

        for(int i=0; i<=n; i++){
            sum= sum + i;
        }

        printf("\nTotal sum is: %d", sum);

    printf("\n\nPress enter...");
    getch();
    
}

void oddtillN(){
    
    printf("\n---SUM OF ALL ODD NO. TILL N---\n");

    int n=0,sum=0;
    printf("\n Enter n: ");
    scanf("%d", &n);

        for(int i=0; i<=n; i++){
            if(i%2!=0){
                sum= sum + i;
            }
            
        }

        printf("\nSum of all Odd numbers is: %d", sum);

    printf("\n\nPress enter...");
    getch();
}

void eventillN(){

    printf("\n---SUM OF ALL EVEN NO. TILL N---\n");

    int n=0,sum=0;
    printf("\n Enter n: ");
    scanf("%d", &n);

        for(int i=0; i<=n; i++){
            if(i%2==0){
                sum= sum + i;
            }
            
        }

        printf("\nSum of all Even numbers is: %d", sum);

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
        printf("\n 5: Reverse a number."); //done
        printf("\n 6: Count Digits."); //done
        printf("\n 7: Sum of digits."); //done
        printf("\n 8: Greatest common devisor (GCD)");
        printf("\n 9: Lowest common multiple (LCM)");
        printf("\n 10: Multiplication Table"); //done
        printf("\n 11: Sum of first N natural numbers"); //done
        printf("\n 12: Sum of all odd no. till N"); //done
        printf("\n 13: Sum of all even no. till N"); //done
        printf("\n 14: List of all factors of a number");
        printf("\n 15: nth Fibonacci number ");
        printf("\n 16: Electricity Bill Calculator");
        printf("\n 17: Square Root");
        printf("\n 18: Power of n");
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

            case 5:

            system("cls");
            reverse();
            system("cls");
            break;

            case 6:

            system("cls");
            countDig();
            system("cls");
            break;

            case 7:

            system("cls");
            sumDig();
            system("cls");
            break;

            case 8:

            system("cls");
            gcd();
            system("cls");
            break;

            case 9:

            system("cls");
            lcm();
            system("cls");
            break;

            case 10:

            system("cls");
            mulTable();
            system("cls");
            break;

            case 11:

            system("cls");
            sumtillN();
            system("cls");
            break;

            case 12:

            system("cls");
            oddtillN();
            system("cls");
            break;

            case 13:

            system("cls");
            eventillN();
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