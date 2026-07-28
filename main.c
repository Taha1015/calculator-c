#include <stdio.h>

void add();
void subtract();
void multiply();
void divide();
void square();
void cube();

int main(){
    printf("Enter Your Name: ");
    char name[100];
    scanf("%s", name);
    printf("Hello, %s!\n", name);
    printf("\n=================================\n");
    printf("      WELCOME TO CALCULATOR\n");
    printf("=================================\n");
    for (;;){
        printf("\nSelect an operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Square\n");
        printf("6. Cube\n");
        printf("7. Exit\n");
        int i;
        printf("Enter your choice (1-7): ");
        scanf("%d", &i);

        switch(i){
            case 1:
                add();

                break;
            case 2:
                subtract();
                break;
            case 3:
                multiply();
                break;
            case 4:
                divide();            
                break;
            case 5:
                square();
                break;
            case 6:
                cube();
                break;
            case 7:
                printf("Exiting the calculator. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Please select a valid option.\n");
        }
    printf("\n=================================\n");
    printf("      THANK YOU FOR USING CALCULATOR\n");
    printf("=================================\n");
    }
    return 0;
}

void square(){
    int a;
    printf("Enter a number to find its square: ");
    scanf("%d", &a);
    printf("The Square of %d is: %d\n", a, a*a);
}
void cube(){
    int a;
    printf("Enter a number to find its cube: ");
    scanf("%d", &a);
    printf("The Cube of %d is: %d\n", a, a*a*a);
}
void add(){
    int a,b,sum;
    printf("Enter two numbers to add: ");
    scanf("%d %d", &a, &b);
    sum=a+b;
    printf("The Sum of %d and %d is: %d\n",a,b,sum);
} 
void subtract(){
    int a,b,difference;
    printf("Enter two numbers to subtract: ");
    scanf("%d %d", &a, &b);
    difference = a - b;
    printf("The Difference of %d and %d is: %d\n", a, b, difference);
}
void multiply(){
    int a,b,product;
    printf("Enter two numbers to multiply: ");
    scanf("%d %d", &a, &b);
    product = a * b;
    printf("The Product of %d and %d is: %d\n", a, b, product);
}
void divide(){
    float a,b;
    printf("Enter two numbers to divide: ");
    scanf("%f %f", &a, &b);
    if (b != 0) {
        float quotient = (float)a / b;
        printf("The Quotient of %f and %f is: %f\n", a, b, quotient);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

