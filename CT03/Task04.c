<<<<<<< HEAD
#include <stdio.h>

int findlargest(int arr[], int n){
    int max=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("The largest number is: %d", max);
}

int main(){
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    findlargest(arr, n);
    return 0;
=======
#include <stdio.h>

int findlargest(int arr[], int n){
    int max=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("The largest number is: %d", max);
}

int main(){
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    findlargest(arr, n);
    return 0;
>>>>>>> 87d33e437f049844b6e8cb278ca3f80645c6c8f7
}