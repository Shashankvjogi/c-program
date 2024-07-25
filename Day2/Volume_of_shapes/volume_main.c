#include<stdio.h>
#include<stdbool.h>
#include "volume_Instr.c"


int main(){
    int shape;
    double e,l,b,h,r;
    bool flag=true;
    while(flag){
    printf("Select the shape of which the volume should be calculated :\n 1 - Cube\n 2 - Cuboid\n 3 - Sphere\n 4 - Cylinder\n 5 - Cone\n");
    scanf("%d",&shape);
    switch(shape){
        case 1: printf("Enter the size of the Edge\n");
                scanf("%lf",&e);
                vol_cube(e);
                break;

        case 2: printf("Enter the size of the Length \n");
                scanf("%lf",&l);
                printf("Enter the size of the Breadth \n");
                scanf("%lf",&b);
                printf("Enter the size of the Height \n");
                scanf("%lf",&h);
                vol_cuboid(l,b,h);
                break;  

        case 3: printf("Enter the size of the radius\n");
                scanf("%lf",&r);
                vol_sphere(r);
                break;              

        case 4: printf("Enter the size of the radius\n");
                scanf("%lf",&r);
                printf("Enter the size of the height\n");
                scanf("%lf",&h);
                vol_cylinder(r,h);
                break;  
        case 5: printf("Enter the size of the radius\n");
                scanf("%lf",&r);
                printf("Enter the size of the height\n");
                scanf("%lf",&h);
                vol_cone(r,h);
                break;  

        default: flag=false; 
                break;        
    }
    }
    return 0;
}