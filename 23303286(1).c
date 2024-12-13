
#include <stdio.h>
#define pi 3.1416
int main() {
// Volume of a cylinder
int r,h;
float v;
printf("Enter the radius: ");
scanf("%d",&r);
printf("\nEnter the height: ");
scanf("%d",&h);
v=pi*r*r*h;
printf("The volume of cylinder is: %f",v);
return 0;
}
