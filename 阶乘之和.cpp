#include <stdio.h>
int main(){
	int N,time,fac,sum=0,i,m,n=1,rec;
	scanf("%d",&N);
		fac=N;
		m=N;
		rec=N;
		for(time=1;N>=time;time++){
			fac*=time;
			for(i=1;rec>i;i++){
				m*=i;
			}
			sum+=m;
			m=N-n;
			rec=N-n;
			n++;
	}
		fac=fac/N;
	printf("%d %d %d",N,fac,sum);
	return 0;
}