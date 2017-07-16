#include <stdio.h>  

void main() {
	int i,t,flips,sizeOfFlip,len,j,minus,k,tries;
	char s[10],sign;
	scanf("%d",&t); 
	for (i = 1; i <= t; ++i) 
	{
	    scanf("%s %d",s,&sizeOfFlip); 
	    for(len = 0; s[len] != '\0'; ++len);
	    minus = 0;
	    for (j = 0; j < len; ++j)
		{
	        if(s[j]=='-')
	        	minus++;	
		}
			if(minus==0)
				flips = 0;
			else
			{
				for(tries=1;tries<=10;tries++)
				{
					for (j = 0; j < len; ++j)
					{
						if(s[j]=='-')
						{
							flips++;
							if((len-j)<sizeOfFlip)
							{
								for(k=j;k<len;k++)
								{
									if(s[k]=='-')
										s[k]='+';
									else
										s[k]='-';
								}
								for(k=(j-1);k>=(len-sizeOfFlip);k--)
								{
									if(s[k]=='-')
										s[k]='+';
									else
										s[k]='-';
								}
							}
							else
							{
								for(k=j;k<j+sizeOfFlip;k++)
								{
									if(s[k]=='-')
										s[k]='+';
									else
										s[k]='-';
								}
							}						
						}
						break;
					}				
				}
				minus = 0;
				for (j = 0; j < len; ++j)
					{
				        if(s[j]=='-')
					        	minus++;				        	
					}
				if(minus==0)
					printf("Case #%d: %d\n",i,flips);
				else
					printf("Case #%d: IMPOSSIBLE",i);
			}
	}
}
