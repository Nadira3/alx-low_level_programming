#include <stdio.h>  
#include <string.h>  

int _atoi(char s[])  
{  

    int i, minus = 0;  
    int n = strlen(s);
    unsigned int num = 0;
    
    for (i = 0; i < n; i++){
	    if (s[i] == 45)
		    minus++;
	if (s[i] >= 48 && s[i] < 58)
	        num = num * 10 + (s[i] - 48);  
	}
    if (!(minus % 2))
	    return (num);  
    else
	    return (-num);
}  

