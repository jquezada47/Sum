#include <stdio.h>
int main() {
    int arr[10];
    int i, max, min, size,sum=0,avg=0;
    printf("Enter size: ");
    scanf("%d", &size);
    printf("Enter numbers ");
    for(i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for(i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
                min=arr[i];
        }
        sum+=arr[i];
    }
    avg=sum/size;
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    printf("Sum: %d\n", sum);
    printf("Average: %d", avg);
    return 0;
}
