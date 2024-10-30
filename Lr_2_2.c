#include <stdio.h>
#include <math.h>

int main(){
    double E; //погрешность
    scanf("%lf", &E);
    double a; //нижняя граница
    scanf("%lf", &a);
    double b; //верхняя граница
    scanf("%lf", &b);
    int CountRectangle = 1;
    double h; // ширина прямоугольника
    double firstMean = 10000, secondMean = 0; // значения интеграла при разных погрешностях
    double x1=a, x2=a; // координаты основания прямоугольника
    for(int j = 0; fabs(firstMean-secondMean)>=E;j++){
        CountRectangle = CountRectangle * 2; // удваивание числа прямоугольников
        h = (b-a) / CountRectangle; // ширина прямоугольника
        firstMean = secondMean;
        for(int i = 0; x2<b;i++){
            if (i == 0){
                x1 = a;
            }
            else{
                x1 = x2;
            }
            x2 = x1 + h;
            secondMean = secondMean + h * log((x2 + x1) / 2); //прибавляем площадь следующего прямоугольника
        }
    }
    printf("Значение: %lf, с точностью: %lf \n", secondMean, E);
    return 0;
}//if (j == 0){
        //    x2 = x1 + h;
        //    secondMean = secondMean + (h * log((x2 + x1) / 2));
        //}
        //else{
                //}
