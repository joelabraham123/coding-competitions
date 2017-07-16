#include <stdio.h> 
int fact(int num)
{
    int f=1,j;
    if (num == 0)
        return f;
    else
    {
        for (j=1;j<=num;j++)
            f=f*j;
    }
    return f;
}int main()
{
    int i,sum=0,n,r;
    scanf("%d%d",&n,&r);
    for(i=0;i<=r;i+=2)
    	sum = sum + (fact(n) / (fact(i) * fact(n - i)));
   	printf("%d",sum);
   	return 0;
}
