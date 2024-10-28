#include <stdio.h>

int main() {
    float E;
    scanf("%f", &E);
    int n;
    n = 1;
    float summ1;
    summ1 = 0;
    float summ2;

    summ2 = summ1 + 1/1;
    if (summ2 - summ1 < E){
        printf("Сумма сходящегося ряда = %f, с точностью %f \n", summ2, E);
    }
    else{
        for (int i=2; summ2-summ1 >= E; i++){
            summ1 = summ2;
            n *= i;
            summ2 = summ1 + 1.0/n;
        }
        printf("Сумма сходящегося ряда = %f, с точностью %f \n", summ2, E);
    }
}