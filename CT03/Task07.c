<<<<<<< HEAD
#include <stdio.h>

int revnum(int n){
    int rev=0, rem;

    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("reversed number: %d", rev);

    return rev;
}

int main(){
    int n, rev;
    
    printf("Enter the number: ");
    scanf("%d", &n);

    revnum(n);

    return 0;
=======
#include <stdio.h>

int revnum(int n){
    int rev=0, rem;

    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("reversed number: %d", rev);

    return rev;
}

int main(){
    int n, rev;
    
    printf("Enter the number: ");
    scanf("%d", &n);

    revnum(n);

    return 0;
>>>>>>> 87d33e437f049844b6e8cb278ca3f80645c6c8f7
}