<<<<<<< HEAD
#include <stdio.h>

void oddneven(int n){
    if(n%2==0){
        printf("Number is even.");
    }
    else{
        printf("Number is odd.");
    }
}

int main(){

    int n;
    printf("Enter an integer value: ");
    scanf("%d", &n);
    oddneven(n);
    return 0;

=======
#include <stdio.h>

void oddneven(int n){
    if(n%2==0){
        printf("Number is even.");
    }
    else{
        printf("Number is odd.");
    }
}

int main(){

    int n;
    printf("Enter an integer value: ");
    scanf("%d", &n);
    oddneven(n);
    return 0;

>>>>>>> 87d33e437f049844b6e8cb278ca3f80645c6c8f7
}