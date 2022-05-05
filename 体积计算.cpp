#include <stdio.h>
int main()
{
	int iron,gold;
	scanf("%d %d",&iron,&gold);
	double mi,mg;
	mi=4.0/3.0*iron/20.0*iron/20.0*iron/20.0*3.1415926*7.86;
	mg=4.0/3.0*gold/20.0*gold/20.0*gold/20.0*3.1415926*19.3;
	printf("%.3f %.3f",mi,mg);
	return 0;
 } 
