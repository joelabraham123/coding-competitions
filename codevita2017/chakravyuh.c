#include<stdio.h>
#include<math.h>
int main(){
int arr[20][20],n,t,i,max=0,index,j,points=1,y[100],z[100];
scanf("%d",&n);
int count=1;
int round = ceil((double)n/2);
for(i=0;i<round;i++){
	for(j=i;j<=n-i-1;j++)
		arr[i][j]=count++;
	for(j=i+1;j<=n-i-1;j++)
		arr[j][n-i-1]=count++;
	for(j=n-i-2;j>=i;j--)
		arr[n-i-1][j]=count++;
	for(j=n-i-2;j>i;j--)
		arr[j][i]=count++;
}
for(i=0;i<n;i++){
	for(j=0;j<n;j++)
		printf("%d ",arr[i][j]);
	printf("\n");
}
int l = 0;
y[l] = 0;
z[l] = 0;
l++;
int x = 1;
while(x<1000){
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(arr[i][j] == (x*11)){
				points++;
				y[l] = i;
				z[l] = j;	
				l++;			
			}
		}
	}
	x++;
}
printf("Total Power points : %d\n",points);
for(i=0;i<l;i++)
	printf("(%d,%d)\n",y[i],z[i]);
	
return 0;
}
