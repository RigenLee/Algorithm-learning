#include<cstdio>
#include<cmath>

int main(){
    double a, b, c;
    double r1, r2, d;
    scanf("%lf %lf %lf", &a, &b, &c);
    d = b * b - (4 * a * c);
    if (a == 0)
        return 1;
    if (d <= 0)
        return 1;
        
    else{       
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("r1=%7.2f\nr2=%7.2f\n", r1, r2);
    }
        
    
    return 0;
}
