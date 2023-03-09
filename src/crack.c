#include <stdio.h>
int main() {
double x, y, p;
int z = scanf("%lf %lf", &x, &y);
    if (z == 2) { 
    p = x * x + y * y;
        if (p <= 25) {
             printf("GOTCHA");
        } else
            printf("MISS");
    } else 
	printf("n/a");
return 0;
}
