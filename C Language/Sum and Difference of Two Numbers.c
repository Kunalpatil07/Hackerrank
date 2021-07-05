#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b,c;
    float x,y,z;
    scanf("%d %d",&a ,&b);
    scanf("%f %f ",&x, &y);
    
    c=a+b;
    printf("%d",c);
    
    c=a-b;
    printf(" %d",c);
    printf("\n");
    z=x+y;
    printf("%0.1f ",z);
    z=x-y;
    printf("%0.1f",z);
    return 0;
}
