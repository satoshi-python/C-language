
#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
  printf("Hello, C language.\n");
  return 0;
}


double cal_COS(double *x, double *y, double *z){
  double yx[3] = {x[0] - y[0], x[1] - y[1], x[2] - y[2]};
  double yz[3] = {z[0] - y[0], z[1] - y[1], z[2] - y[2]};
  double X = pow(yx[0], 2.0) + pow(yx[1], 2.0) + pow(yx[2], 2.0);
  double Y = pow(yz[0], 2.0) + pow(yz[1], 2.0) + pow(yz[2], 2.0);
  double SUM = 0.0;
  for(int i=0; i<=2; i++)
    SUM = SUM + x[i] + y[i] + z[i];
  double COS = SUM / sqrt(X * Y);
  return COS;
}

double cal_CON(double *x, double *y){
  double SUM = 0.0;
  for(int i=0; i<=2; i++)
    SUM = SUM + pow(x[0] - y[0], 2.0);
  double sum = sqrt(SUM);
  return sum;
}
