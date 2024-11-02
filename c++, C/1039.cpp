#include <stdio.h>
#include <math.h>
  
int main() {
    double r1,x1,y1, r2,x2,y2,d;
    while (scanf("%lf %lf %lf %lf %lf %lf",&r1, &x1, &y1, &r2, &x2, &y2) != EOF) {
        abs(r1);
        abs(r2);
        abs(x1);
        abs(x2);
        abs(y1);
        abs(y2);
        d = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
        if (r1 >= d+r2)
            printf("RICO\n");
        else
            printf("MORTO\n");
    }
    return 0;
}