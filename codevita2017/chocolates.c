#include<stdio.h>
int main(){
	int a[100],n,x=3,i,j,k,sum=0,count=0,intVal;
	double val;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum = sum + a[i];
	}
	val = (float)(sum - (((n-1)/2)*(6+(n-2)*3)))/n;
	if (isInteger(val)==1){
		printf("Yes ");
		intVal = (int)val;
		for(i=0;i<n;i++){
			if(a[i] == ((i+1)*intVal))
				continue;
			else{
				a[i] = (i+1)*intVal;
				count++;
			}
		}
		printf("%d",(count/2));
	}
	else{
		printf("No");
	}
	return 0;
}
int isInteger(double val)
{
    int truncated = (int)val;
    if (val == truncated)
    	return 1;
    else
    	return 0;
}
