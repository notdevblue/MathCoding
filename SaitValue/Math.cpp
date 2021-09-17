#include <iostream>
#include <math.h>

void solution(double (*f)(double), double z);

double foo(double x)
{
    return (x * x);
}

int main()
{
    solution(foo, 0.1);
    return (0);
}

void solution(double (*f)(double x), double z)
{
    double posA = 0.0;
    double posB = 1.0;

    double a = f(posA);
    double b = f(posB);
    double c;
    double res;

    while (a * b < 0)
    {
        posA -= 0.1;
        posB += 0.1;

        a = f(posA);
        b = f(posB);
    }

    while(b - a > z)
    {
        c = 0.5 * a + 0.5 * b;

        res = c * a;

        if(res > 0)
        {
            a = c;
        }
        else if(res < 0)
        {
            b = c;
        }
        else 
        {
            std::cout << c << std::endl;
            return;
        }
    }

    b < a ? std::cout << a << " ~ " << b << std::endl : std::cout << b << " ~ " << a << std::endl;

    std::cout << "오차: " << abs(abs(b) - abs(a)) << std::endl;
    return;
}