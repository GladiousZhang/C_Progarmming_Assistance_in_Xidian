#include <stdio.h>
 int main()
 {
 	int h,m;
 	scanf("%d %d",&h,&m);
 	double t=h+m/60.0;
 	double T=4.0*t*t/(t+2.0)-20.0;
 	printf("%.2f",T);
 	return 0;
  } 
