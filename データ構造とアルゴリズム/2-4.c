#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int GetRandom(int min, int max);


main(){
    int k;
    int i;
    int l_or_r;
    int age;
    for (k=0; k<8; k++){
        age = GetRandom(0,pow(2,k));.0
        for (i=k; i=0; i--){
            if (age < pow(2,i-1)){
                l_or_r=0;
            }else if (age > pow(2,i-1)){
                l_or_r=1;
            }
            else{
                printf("%d回でわかりました",k-i+1);
            }
            
        }
        
    }
}

int GetRandom(int min, int max)
{
    return min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX));
}