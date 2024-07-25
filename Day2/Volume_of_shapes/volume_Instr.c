#include <stdio.h>

double result;
void vol_cube(double e)
{
    result = e * e * e;
    printf("Volume of cube is : %lf", result);
}

void vol_cuboid(double l,double b,double h)
{
    result = l * b * h;
    printf("Volume of cuboid is : %lf", result);
}

void vol_sphere(double r)
{
    result = (4 / 3) * 3.14 * r * r * r;
    printf("Volume of sphere is : %lf", result);
}

void vol_cylinder(double r,double h)
{
    result = 3.14 *(r*r)*h;
    printf("Volume of cylinder is : %lf", result);
}

void vol_cone(double r,double h)
{ 
    result = (1/3)*3.14*(r*r)*h;
    printf("Volume of cone is : %lf", result);
}

