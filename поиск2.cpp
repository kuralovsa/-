#include <stdio.h>
#include <string.h>
 
main()
{
    char line[] = "Sabina",
         pattern[] = "a", *p, *q;
         
    q=line;
    
	
    while((p = strstr(q, pattern)) != NULL) {
    	printf("%s%s ", line,"=a :");
        printf("%d ", p-line+1);
        q = p + 1;
    }
    return 0;
}
