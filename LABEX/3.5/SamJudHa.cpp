#include <stdio.h>

int main()
{
    int arr_ay = 0, arr[5];
    int i, j, k;
    printf("Input number of element to be store in array : ");
    scanf("%d", &arr_ay);
    printf("-----------------\n");
    for ( i = 0 ; i < arr_ay ; i++){
        printf("Arr Element [%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("*******************\n");
     for( i = 0 ; i < arr_ay ; i++){
        k = 1;
        for ( j = i + 1 ; j <= arr_ay ; j++){
            
           if( arr[i] == arr[j]){
                k++;
                arr[j] = 0;
            }
        }
        if (arr[i] != 0){
            printf("%d --> %d\n", arr[i], k);
        }
    }
    return 0;
}
