<<<<<<< HEAD
#include <stdio.h>

int checkprime(int n){
    int p=1;
    if(n<=1){
        printf("number is not prime neither composite");
        return n;
    }
    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            p=0;
            break;
        }
    }
    if(p){
        printf("%d is prime number", n);
    }
    else{
        printf("%d is composite number", n);
    }
}

int main(){
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);

    checkprime(n);
=======
#include <stdio.h>

int checkprime(int n){
    int p=1;
    if(n<=1){
        printf("number is not prime neither composite");
        return n;
    }
    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            p=0;
            break;
        }
    }
    if(p){
        printf("%d is prime number", n);
    }
    else{
        printf("%d is composite number", n);
    }
}

int main(){
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);

    checkprime(n);
>>>>>>> 87d33e437f049844b6e8cb278ca3f80645c6c8f7
}