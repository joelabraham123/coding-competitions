#include <stdio.h>  // includes cin to read from stdin and cout to write to stdout
void main() {
	int i,t, n, m,a[10]={0,1,2,3,4,5,6,7,8,9},res=1,b[10],j,k=1,copy;
	scanf("%d",&t);  // read t. cin knows that t is an int, so it reads it as such.
	for (i = 1; i <= t; ++i) {
    scanf("%d",&n);  // read n and then m.
    for(j=0;j<10;++j)
		b[j]=a[j];
	copy=n;
    while(res!=0)
    {
    	copy=n*k;
    	k++;
    	while (copy!=0)
    	{
    	for(j=0;j<10;++j)
    	{
	    	if(b[j]==copy%10) 
			b[j]=0; 
		}
		copy=copy/10;	
		}
    	for(j=0;j<10;++j)
    	{
    		if(b[j]!=0){
    			res=1;
    			break;
			}
			else
			res=0;
		}
    // cout knows that n + m and n * m are ints, and prints them accordingly.
    // It also knows "Case #", ": ", and " " are strings and that endl ends the line.
	}
	printf("Case #%d: %d\n",i,m);
	res=1;
	k=0;
}
}
