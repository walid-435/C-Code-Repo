#include <stdio.h>

void mergesort(int arr[], int low, int high){
    int mid;

    if(low<high){
        mid = (low + high)/2;
        mergesort(arr, low, mid);
        mergesort(arr, mid+1, high);
        
        int i = low, j = mid+1, k = 0;
        int arr2[high - low+1];
        
        while(i <= mid && j <=high){
            if(arr[i] <= arr[j]){
                arr2[k++] = arr[i++];
            }
            else{
                arr2[k++] = arr[j++];
            }
        }
        while(i <= mid){
            arr2[k++] = arr[i++];
        }
        while(j <= high){
            arr2[k++] = arr[j++];
        }
        for(i = low, k = 0; i <= high; i++, k++){
            arr[i] = arr2[k];
        }
    }
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

    printf("Main array: ");
    for(int i=0; i<n; i++){
        printf(" %d ", arr[i]);
    }

mergesort(arr, 0, n-1);
printf("\nSorted array: ");
for(int i=0; i<n; i++){
    printf(" %d ", arr[i]);
}

printf("\n");

}