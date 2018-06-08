#include<stdio.h>
main()
{
    float a, b,med;
    scanf("%f%f", &a, &b);
    med=((a*3.5)+(b*7.5))/(3.5+7.5);
    printf("MEDIA = %.5f\n", med);
    return 0;
}
