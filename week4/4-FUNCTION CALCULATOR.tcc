#include <stdio.h>
#include <stdlib.h>
/*PROTOTYPING COPYING AND PASTING THE FUNCTION SIGNATURE ABOVE THE MAIN IT FIXES THE IMPLICIT DECLARATION ERROR*/
/*FOR IF STATEMENTS USING &&- ALL CONDITIONS MUST WORK WHILE ||-"OR" AT LEAST ONE OR MORE*/
int main(){
   /*DECLARATION OF VALUES*/
    double num1;
    double num2;
    char sign;

/*PROMPTING USER TO GIVE VALUES*/
    printf("Please enter first number:\n");
    scanf("%lf",&num1);
    printf("Please enter operator:\n");
    scanf(" %c",&sign);
    printf("Please enter second number:\n");
    scanf("%lf",&num2);

/*OPERATOR LOOPS
if(sign == '+'){
        printf("%lf",num1 + num2);
    }else if(sign == '-'){
        printf("%lf",num1 - num2);
    }else if(sign == '/'){
        printf("%lf",num1 / num2);
    }else if(sign == '*'){
        printf("%lf",num1 * num2);
    }else {printf("INVALID OPERATOR SELECTED PLEASE TRY AGAIN");}*/

/*OPERATOR LOOPS BUT THIS TIME WITH SWITCH STATEMENTS*/
    switch(sign){
case '+':
    printf("%lf",num1 + num2);
    break;
case '-':
    printf("%lf",num1 - num2);
    break;
case '/':
    printf("%lf",num1 / num2);
    break;
case '*':
    printf("%lf",num1 * num2);
    break;
default:
    printf("INVALID OPERATOR TRY AGAIN SCRUB");
    break;
    }

return 0;
}






