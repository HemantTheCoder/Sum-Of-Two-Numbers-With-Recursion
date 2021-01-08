#include <stdio.h>
#include <math.h>
int main()
{
    float x, y, sum;
    char ch;
    print:
        printf ("Enter the first number:");
        scanf ("%f",&x);
        printf ("Enter the second number:");
        scanf ("%f",&y);
        sum=x+y;
        printf ("\nThe total number is:%.2f\n",sum);
    again:
        printf ("\n\tDo you want to repeat the operation(Y/N): ");
        scanf (" %c", &ch);

        if(ch == 'y' || ch == 'Y'){
            goto print;
        }
        else if(ch == 'n' || ch == 'N'){
            return 0;
        }
        else{
            printf("\n\tPlease enter Yes or NO.\n");
            goto again;
        }
    return 0;
}
