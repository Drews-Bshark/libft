#include <stdlib.h>
#include <stdio.h>

char *ft_itoa(int n)
{
	char *str;
	int nbr;
	int flag;
	int numb;
 
	nbr = 0;
	flag = 0;
	if(n < 0)
	{
		flag = 1;
		n = -n; 
	}
	numb = n;
	while(n)
	{
		n/=10;
		nbr++;
	}
       if(!(str = (char *)malloc(sizeof(str) * (nbr + flag))))
		       return(NULL);
       if(flag)
       		str[nbr++] = '\0';
       else
	      str[nbr] = '\0';
       	while(numb)
	{
		str[--nbr] = numb % 10 + '0';
		numb /= 10;
	}
	if(flag)
	{
		str[--nbr] = '-';
	}
	return(str);
}
