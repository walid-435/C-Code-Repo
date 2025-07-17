<<<<<<< HEAD
#include <stdio.h>

float areaofCircle(float r){
    float area= 3.1416*r*r;
    printf("Area: %.2f", area);
    return area;
}

int main(){
    float r;
    
    printf("Enter the radius: ");
    scanf("%f", &r);

    areaofCircle(r);
=======
#include <stdio.h>

float areaofCircle(float r){
    float area= 3.1416*r*r;
    printf("Area: %.2f", area);
    return area;
}

int main(){
    float r;
    
    printf("Enter the radius: ");
    scanf("%f", &r);

    areaofCircle(r);
>>>>>>> 87d33e437f049844b6e8cb278ca3f80645c6c8f7
}