#include <stdio.h>
#include <math.h>

int somma_cal(int n){
    int somma = 0;
    int i;
    for(i=1;i<=n;i++){
        somma+=i;
    }
    return somma;
}

int main()
{
    int n;
    printf("Enter your number: \n");
    scanf("%d",&n);
    int sum = somma_cal(n);
    printf("%d", sum);
}