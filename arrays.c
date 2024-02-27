#include <stdio.h>

void bubbleSort(int array[], int size);
int omitMiddleElement(int arr[], int size);
void insertOmittedNumber(int arr[], int size, int omitted);
void deleteInsertedNumber(int arr[], int size, int omitted);

int main(){
    int results[] = {30, 45, 50, 56, 44, 25, 12, 2, 9}; 

    int size = sizeof(results) / sizeof(results[0]);

    printf("Original Array:");
    for(int i = 0; i < size; i++) {
        printf("%d ", results[i]); 
    }
    printf("\n");

    bubbleSort(results, size);

    printf("Sorted Array (Ascending): ");
    for (int i = 0; i < size; i++) { 
        printf("%d ", results[i]);
    }
    printf("\n");

    int omitted = omitMiddleElement(results, size);

    printf("Array After Omitting Middle Element: ");
    for (int i = 0; i < size - 1; i++) { 
        printf("%d ", results[i]);
    }
    printf("\n");

    insertOmittedNumber(results, size, omitted);

    printf("Array After Inserting Omitted Element: ");
    for (int i = 0; i < size; i++) { 
        printf("%d ", results[i]);
    }
    printf("\n");

    deleteInsertedNumber(results, size, omitted);

    printf("Array After Deleting Inserted Element: ");
    for (int i = 0; i < size - 1; i++) { 
        printf("%d ", results[i]);
    }
    printf("\n");

    return 0;
}

void bubbleSort(int array[], int size){
    for(int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if(array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int omitMiddleElement(int arr[], int size){
    int mid = size / 2;
    int omitted = arr[mid];
    for(int i = mid; i < size - 1; i++){
        arr[i] = arr[i+1]; 
    }
    return omitted;
}

void insertOmittedNumber(int arr[], int size, int omitted){
    int mid = size / 2;
    for(int i = size - 1; i > mid; i--){
        arr[i] = arr[i-1];
    }
    arr[mid] = omitted;
}

void deleteInsertedNumber(int arr[], int size, int omitted){
    int mid = size / 2;
    for(int i = mid; i < size - 1; i++){
        arr[i] = arr[i+1];
    }
    arr[size - 1] = omitted;
}