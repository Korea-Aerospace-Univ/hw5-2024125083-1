
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    
    int maxA = n / 900;
    int maxB = n / 750;
    int maxC = n / 200;
    
    bool found = false;
    
    for(int a = 1; a <= maxA; a++){
        for(int b = 2; a <= maxB; b+=2){
            for(int c = 1; c <= maxC; c++){
                if( (a*900 + b*750 + c*200) == n && ((c<a) || (c<b)) ){
                    printf("%d %d %d\n",a,b,c);
                    found = true;
                }
            }
        }
    }

    if(!found){
        printf("none\n");
    }
    

    return 0;
}
