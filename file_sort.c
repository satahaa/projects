#include <stdio.h>
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main(){

    int arr[10];
    FILE *fptr;
    fptr = fopen("nums.txt", "r");
    
    for (int i = 0; i < 10; i++)
        fscanf(fptr, "%d", &arr[i]);
    fclose(fptr);

    bubbleSort(arr, 10);

    fptr = fopen("nums.txt", "w");

    for (int i = 0; i < 10; i++)
        fprintf(fptr, "%d\n", arr[i]);
    fclose(fptr);

    return 0;
}