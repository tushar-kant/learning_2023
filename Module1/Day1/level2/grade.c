#include<stdio.h>
char grade(int m)
{
    switch(m)
    {
        case 90 ... 100 : 
            return 'A';
        case 75 ... 89  : 
            return 'B';
        case 60 ... 74  :
             return 'C';
        case 50 ... 59  : 
            return 'D';
        case 36 ... 49  :
             return 'E';
        case 0 ... 35   : 
            return 'F';
        default :
             return 'X';
    }
}
int main()
{
    int mark;
    printf("enter mark");
    scanf("%d",&mark);

    int result = grade(mark);
    if(result=='X')
    {
        printf("failed");
    }
    else
    {
        printf("%d -> \"Grade- %c\" ",mark,result);
    }
}

