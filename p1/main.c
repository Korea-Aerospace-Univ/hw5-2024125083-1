
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    
    int maxA = n / 900;
    int maxB = n / 750;
    int maxC = n / 200;
    
    if(n < 1850)
        printf("none");
    
    int a,b,c;
    
    for(int a = 1; a <= maxA; a++){
        for(int b = 1; a <= maxB; b++){
            for(int c = 1; c <= maxC; c++){
                if( (a*900 + b*750 + c*200) == n && ((c<a)||(c<b)) && b%2 == 0 ){
                    printf("%d %d %d\n",a,b,c);
                }else{
                    printf("none");
                }
            }
        }
    }
    

    return 0;
}
