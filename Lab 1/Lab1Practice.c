//By: Vijay Patel
//Lab 1 Practice Questions
//McMaster University
//Computer Eng and Management

#include <stdio.h>
#include <stdlib.h>

/***********************************************************Question 1*************************************************************/
//Using a for loop
int main()
{
    int i, sum=0;
    for (i=30; i<=1000; i++)
    {
        if(i%4==0)
        {
            sum += i;
        }
    }
    printf("The sum of all numbers from 30 to 1000 that are divisible by 4 is %d.\n", sum);
    return 0;
}
//Using a while loop
int main(void)
{
    int i=30, sum=0;
    while(i<1001)
    {
        if(i%4==0)
        {
            sum += i;
        }
        i++;
    }
    printf("The sum of all numbers from 30 to 1000 that are divisible by 4 is %d.\n", sum);
    return 0;
}
//Using a do-while loop
int main(void)
{
    int i=30, sum=0;
    do
    {
        if(i%4==0)
        {
            sum += i;
        }
        i++;
    }
    while(i<=1000);
    printf("The sum of all numbers from 30 to 1000 that are divisible by 4 is %d.\n", sum);
    return 0;
}

/***********************************************************Question 2*************************************************************/
int main(void)
{
    int num;
    printf("Enter a positive number to end the program\n");
    scanf("%d", &num);
    while(num<0)
    {
        printf("INVALID INPUT\nPlease enter a positive number\n");
        scanf("%d", &num);
    }
    printf("Your number is %d.", num);
    return 0;
}

/***********************************************************Question 3*************************************************************/
int main (void)
{
    int i, counter=-1, number, smallest;
    while(counter<0)
    {
        printf("How many integers will you input?\n");
        scanf("%d", &counter);
    }
    printf("Enter a number:  \n");
    scanf("%d", &smallest);
    for(i=1; i<counter; i++)
    {
        printf("Enter a number:  \n");
        scanf("%d", &number);
        if(number<smallest)
        {
            smallest= number;
        }
    }
    printf("The smallest number is %d", smallest);
    return 0;
}

/***********************************************************Question 4*************************************************************/
int main(void)
{
    int i=0, num;
    do
    {
        printf("\nPlease input an integer (0 to end): ");
        scanf("%d", &num);
        if(num/10000 >0 && num/10000 <10 || num/10000 <0 && num/10000 >-10)
        {
            printf("Your input is a five-digit number: %d", num);
        }
        i++;
    }
    while(num!=0);
    printf("Thank you for using my software. Bye");
    return 0;
}

/***********************************************************Question 5*************************************************************/
int main(void)
{
    float avg;
    printf("Please enter the students average: ");
    scanf("%f", &avg);
    switch((int)avg)
    {
        case 90 ... 100 : printf("4\n");
            break;
        case 80 ... 89 : printf("3\n");
            break;
        case 70 ... 79 : printf("2\n");
            break;
        case 60 ... 69 : printf("1\n");
            break;
        case 50 ... 59 : printf("0\n");
            break;
        default : printf("Invalid Input\n");
    }
    return 0;
}

/***********************************************************Question 6*************************************************************/
/*int main(void)
{
    float sum=0;
    int i, n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            sum -= 4/(2*((float)i)-1);
        }
        else
        {
            sum += 4/(2*((float)i)-1);
        }
    }
    printf("The sum of the first %d terms is %f", n, sum);
    return 0;
}
/***********************************************************Question 7*************************************************************/
int main(void)
{
    int side1, side2, hyp, sumsquare, counter;
    for(side1=1; side1<=400; side1++)
    {
        for(side2=1; side2<=400; side2++)
        {
            for(hyp=1; hyp<=400; hyp++)
            {
                sumsquare= side1*side1 + side2*side2;
                if(sumsquare==hyp*hyp && side1<=side2)
                {
                    printf("%d, %d, %d\n", side1, side2, hyp);
                    counter += 1;
                }
            }
        }
    }
    printf("There are %d tuples", counter);
    return 0;
}

/***********************************************************Question 8*************************************************************/
int main(void)
{
    int i, j, m, sum;
    printf("What is the value of m (max value): ");
    scanf("%d", &m);
    printf("The perfect numbers are: \n");
    for(i=1; i<=m; i++)
    {
        sum=0;
        for(j=1; j<i; j++)
        {
            if(i%j==0)
            {
                sum += j;
            }
        }
        if(i==sum)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}

/***********************************************************Question 9*************************************************************/
//9a)
int main(void)
{
    int i, j, n=0;
    while(n<1 || n>25 || n%2 == 0)
    {
        printf("Please input an odd integer from 1 to 25: ");
        scanf("%d", &n);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<2*n-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
//9b)  NOT DONE

//9c)
int main(void)
{
    int i, j, n=0, m;
    while(n<1 || n>25 || n%2 == 0)
    {
        printf("Please input an odd integer from 1 to 25: ");
        scanf("%d", &n);
    }
    m=(2*n)-1;
    for(i=0; i<=2*n-1; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("*");
        }
        printf("\n");
        m=m-2;
    }
    return 0;
}

//9d) NOT DONE
int main(void)
{
    int i, j, n=0, m, o;
    while(n<1 || n>25 || n%2 == 0)
    {
        printf("Please input an odd integer from 1 to 25: ");
        scanf("%d", &n);
    }
    m=n;
    o=n;
    for (i=0; i<(n/2)+1; i++) //for loop for the top triangle
    {
        for (j=0; j<n-o; j++) //for loop for blank spaces (increase by 1 each time)
        {
            printf(" ");
        }
        for (j=0; j<m; j++) //for loop for '^' characters (decrease by 2 each time)
        {
            printf("*");
        }
        printf("\n");
        o -=1;
        m -=2;
    }
    m=3;
    o=1;
    for(i=0; i<n/2; i++) //for loop for botton trapizoid
    {
        for(j=0; j<o; j++)
        {
            printf(" ");
        }
        for(j=0; j<m; j++)
        {
            printf("*");
        }
        printf("\n");
        o -=1;
        m +=2;
    }
    return 0;
}

/***********************************************************Question 10************************************************************/
int main(void)
{
    int num, digits=0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    while(num!=0)
    {
        num=num/10;
        digits += 1;
    }
    printf("Your number has %d digits.", digits);
    return 0;
}

/***********************************************************Question 11************************************************************/
//11a) NOT DONE
/*int main(void)
{
    int i, num;
    printf("Enter a number to be reversed");
    scanf("%d", &num);
    for (i=0; i<)
    return 0;
}*/

/***********************************************************Question 12************************************************************/
int main(void)
{
    int bin, dec=0, remainder, multiplier=1;
    printf("Input your binary integer\n");
    scanf("%d", &bin);
    while(bin!=0)
    {
        remainder= bin%10;
        bin= bin/10;
        dec += multiplier*remainder;
        multiplier= multiplier*2;
    }
    printf("Your number is %d.", dec);
    return 0;
}

/***********************************************************Question 13************************************************************/
//a)
int main(void)
{
    int i, num, factorial=1;
    printf("Enter your factorial:  ");
    scanf("%d", &num);
    for(i=num; i>1; i--)
    {
        factorial = factorial*i;
    }
    printf("The factorial of %d is %d.", num, factorial);
    return 0;
}
//b)
//c)

/***********************************************************Question 14*************************************************************/
int main(void)
{
    int num, i, sumfactor=0;
    printf("Enter an integer\n");
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        if(num%i== 0)
        {
            sumfactor += i;
        }
    }
    if(sumfactor== num+1)
    {
        printf("The number IS prime.");
    }
    else
    {
        printf("The number IS NOT prime.");
    }
    return 0;
}
