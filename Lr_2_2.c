#include <stdio.h>
#include <math.h>

int main(){
    double E;
    scanf("%lf", &E);
    double a;
    scanf("%lf", &a);
    double b;
    scanf("%lf", &b);
    int CountRectangle = 2;
    double summ1 = 10000;
    double summ2 = 0;
    double x1 = a;
    double x2 = a;
    double h;
    for(int j=0; (summ1-summ2)>=E; j++){
        if (summ2 > 0){
            summ1 = summ2;
        }
        h = (b-a) / CountRectangle;
        x1 = x2;
        x2 = x2 + h;
        summ2 = h * log((x2 + x1) * 0.5);
        CountRectangle = CountRectangle * 2;
    }
    printf("Значение: %lf, с точностью: %lf \n", summ2, E);
}