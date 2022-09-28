#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("================ This is a basic calculator===============\n");
    printf("1-Addition\n2-Subtraction\n3-multiplication\n4-Division\n");

    char opp;
    scanf("%s",&opp);

    if(opp==1){
    int fst;
    int second;
    printf("input first number :\n");
    scanf("%d",&fst);
    printf("input second number :\n");
    scanf("%d",&second);

    printf(fst+second);
    }
    if(opp==2){
    int fstt,secondd;
    printf("input first number :\n");
    scanf("%d",&fstt);
    printf("input second number :\n");
    scanf("%d",&secondd);
    int sub = fstt - secondd;
    printf(sub);
    }
    if(opp==3){
    int first,sec;
    printf("input first number :\n");
    scanf("%d",&first);
    printf("input second number :\n");
    scanf("%d",&sec);
    int multiply = first * sec;
    printf(multiply);
    }
    if(opp==4){
    int firstt,secc;
    printf("Note that:\nThe first number must be bigger than the second");
    printf("input first number :\n");
    scanf("%d",&firstt);
    printf("input second number :\n");
    scanf("%d",&secc);
    int divide = firstt / secc;
    printf(divide);
    }

    return 0;
}
