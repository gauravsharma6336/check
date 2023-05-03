#include<stdio.h>
#include<math.h>
int main(){
    int i,n,prime=1; //prime is true
    printf("Enter number:");
    scanf("%d",&n);
    while(i<n){
        if(i%2==0){
            prime=0; //prime is false
            prime++;
            break;
        }
    }
    if(prime){
        printf("%d is prime number\n",n);
    }
    else{
        printf("%d is not a prime number\n",n);
    }
}