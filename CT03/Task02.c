<<<<<<< HEAD
#include <stdio.h>

int Sumofarray(int arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }

    printf("The sum of the array: %d\n", sum);
    return 0;

}

int main(){
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements for the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    Sumofarray(arr, n);
    return 0;

=======
#include <stdio.h>

int Sumofarray(int arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }

    printf("The sum of the array: %d\n", sum);
    return 0;

}

int main(){
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements for the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    Sumofarray(arr, n);
    return 0;

>>>>>>> 87d33e437f049844b6e8cb278ca3f80645c6c8f7
}