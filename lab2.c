#include <stdio.h>
#include <math.h>
int main() {
    double a,z1,z2;
    double pi=3.1415926535;
    scanf("%lf", &a);
    a=a*pi/180;
    z1=(sin(2*a)+sin(5*a)-sin(3*a)/cos(a)-cos(3*a)+cos(5*a));
    z2=tan(3*a);

    printf("%lf\n", z1);
    printf("%lf\n", z2);
    return 0;
}
