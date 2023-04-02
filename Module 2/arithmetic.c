#include<stdio.h>
int main()
{

    int a=3,b=20,c=70;
    printf("%d\n",c);
    double divide = b*1.0/a;
    printf("%lf\n",divide);

    int mod = b%a;
    int mod1 = a%b;
    printf("%d\n",mod);
    printf("%d\n",mod1);  
    return 0;
}