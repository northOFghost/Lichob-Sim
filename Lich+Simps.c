#include <stdio.h>
#include <math.h>


double F(double x){
    return x*sqrt(x) ;
}

double simson(double a,double b, int n){
    double h=(b-a)/n;
    double integral=0;

    for (int i = 0; i <= n; i++) {
        double x = a + i * h; // pozicia
        if (i == 0 || i == n) {
            integral += F(x); //prva a posledna
            //printf("%lf\n",integral);
        } else if (i % 2 == 1) {
            integral += 4 * F(x);//parne
            //printf("Simpson %lf\n",integral);
        } else {
            integral += 2 * F(x);//nepar
            //printf("Simpson %lf\n",integral);
        }
    }
    integral *= h/3;
    return integral;
}


double lichod(double a,double b, int n){
    double h=(b-a)/n;
    double inter=0;

    for (int i=0;i<n;i++){
        double x0 = a+i*h;                  //zacatok useka
        double x1 = a + (i+1)*h;           //koniec useka
        inter += (F(x0)+F(x1))*h/2;  //vypocet kazdou somostatnej
    }
    printf("Lich %lf\n",inter);
    return inter;
}

int main() {
    double a = 1;//dolna hran
    double b = 4;//hora hran
    int n=4;//po4et usekov
    double simresult = simson(a, b, n);
    double lichresult = lichod(a, b, n);

    printf("Simpson: %lf\n", simresult);
    printf("Lichobe: %lf\n", lichresult);
    return 0;
}
