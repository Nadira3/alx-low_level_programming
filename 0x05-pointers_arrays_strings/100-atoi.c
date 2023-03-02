#include <stdio.h>  
#include <string.h>  

int _atoi(char s[])  
{  

    int i, num = 0;  

    int n = strlen(s);
    
    for (i = 0; i < n; i++){
	if (s[i] >= 48 && s[i] <= 58)
	        num = num * 10 + (s[i] - 48);  
	}
    return (num);  
}  

