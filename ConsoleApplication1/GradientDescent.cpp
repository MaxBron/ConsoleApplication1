#pragma once
#include <iostream>
#include <math.h>

struct point
{
public:
    double x1;
    double x2;
    point(double _x1, double _x2)
    {
        x1 = _x1;
        x2 = _x2;
    }

};

point inline gradu(const point& x, double r)
{
    return point(16 * x.x1 + r * 3 * (3 * x.x1 + x.x2 + 6), 2 * x.x2 + r * (3 * x.x1 + x.x2 + 6));
}

double inline modul(const point& x)
{
    return sqrt(x.x1 * x.x1 + x.x2 * x.x2);
}

double inline func(const point& x)
{
    return 8 * pow(x.x1, 2) + pow(x.x2, 2) - 40;
}
double inline g(const point& x)
{
    return 3 * x.x1 + x.x2 + 6;
}
double inline P(const point& x, double r)
{
    return (r / 2) * pow(g(x), 2);
}
double inline F(const point& x, double r)
{
    return func(x) + P(x, r);
}
point inline mul(const point& x, double a)
{
    return point(x.x1 * a, x.x2 * a);
}
point inline sub(const point& first, const point& second)
{
    return point(first.x1 - second.x1, first.x2 - second.x2);
}


point inline GradDescent(point x, const double r)
{
    int k = 0; double eps1 = 0.01; double eps2 = 0.00001; int M = 10000;
    double t = 0.5;
    bool flag = false;
    while (true)
    {

        point grad_x = gradu(x, r);
        double mod_grad_x = modul(grad_x);
        //printf("Itter %i\n", k + 1);
        //printf("x = [%f;%f]; grad_x = [%f;%f];\n mod_grad_x = %f\n", x.x1, x.x2, grad_x.x1, grad_x.x2, mod_grad_x);
        if (mod_grad_x < eps1)
        {
            //printf("Itter %i(k=%i)\n", k + 1,k);
            //printf("Exit 1\n");
            //printf("Answer: x =[%f;%f]\ny = %f", x.x1, x.x2, func(x));
            return x;
        }
        if (k > M)
        {
            //printf("Itter %i(k=%i)\n", k + 1, k);
            //printf("Exit 2\n");
            //printf("Answer: x =[%f;%f]\ny = %f", x.x1, x.x2, func(x));
            return x;
        }

        point next_x(0, 0);
        int counter = 0;
        while (true)
        {
            /*++counter;
            if (counter > 1000000)
            {
                printf("Циганский цикл %i\n",counter);
            }*/
            next_x = sub(x, mul(grad_x, t));
            //printf("x = [%g;%g], f(x) = %g, f(next_x) = %g", x.x1, x.x2, F(x, r), F(next_x, r));
            //printf("t = %g, x(k+1) = [%g;%g]\n", t,next_x.x1,next_x.x2);
            if (F(next_x, r) < F(x, r))
            {
                break;
            }
            t = t / 2;
        }
        if (modul(sub(next_x, x)) < eps2 and abs(F(next_x, r) - F(x, r)))
        {
            //printf("Itter %i(k=%i)\n", k + 1, k);
            //printf("Exit 3.1\n");

            if (flag)
            {
                //printf("Exit 3\n");
                //printf("Answer: x =[%f;%f]\ny = %f", next_x.x1, next_x.x2, func(next_x));
                return next_x;
            }
            else
            {
                flag = true;
            }
        }
        x = next_x;
        ++k;
    }
}
