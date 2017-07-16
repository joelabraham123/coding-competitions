#include <stdio.h>  
int main() {
	long long int i,j=1,k,sum=0,N,num1=6,a[1000],b[1000],c[1000],count=0;
	scanf("%lld",&N); 
	a[j] = 2;
	j++;
	for(i=3;i<=N;i++){
		for(k=2;k<i;k++){
		if(i%k == 0)
			break;
		}
		if(k==i){
			a[j] = k;
			j++;
		}
	}
	b[0] = 0;
	for(i=1;i<j;i++){
		b[i] = b[i-1]+a[i];
	}
	int l=0;
		for(i=2;i<j;i++){
		for(k=2;k<b[i];k++){
		if(b[i]%k == 0)
			break;
		}
		if((k==b[i])&&(b[i]<=N)){
		c[l] = k;
		l++;
		count++;
		}
	}
	printf("%lld",count);
	return 0;
}
