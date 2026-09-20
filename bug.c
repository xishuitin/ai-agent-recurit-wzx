#include <stdio.h>

double average(double a, double b)
{
    return (a + b) / 2;
}

int main()
{
    double x = 4, y = 6;
    double res = average(x, y);
    printf("平均值是：%f\n", res);
    return 0;
}