#include <stdio.h>
#include <stdbool.h>// to use boolean true/false    
#include <string.h> // can use strlen() to get length of string, strcat(string1,string2) to concatenate strings

void bubble_sort(int arr[],int size){ //must initialise int arr[] if
    int swap = 1;
    int index = 1,j = 0;
    printf("Size of array: %i\n",size);
    // for (i = 0;i<size;i++){
    //     printf("Numbers in array :%i\n",arr[i]);
    // }

    while (swap == 1){
        // printf("Swap value : %i\n",swap);
        int i = 1;
        swap = 0;
        for (i = 1;i<size;i++){
            if (arr[i] <arr[i-1]){
                int temp = arr[i];
                arr[i] = arr[i-1];
                arr[i-1] = temp;
                swap = 1;
            }
        }
    }
    for (j = 0;j<size;j++){
        printf("Numbers in array :%i\n",arr[j]);
    }
}

int main(){
    int numbers[] = {75,10,5,7,1,2,3};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int i = 0;
    bubble_sort(numbers,size);
    // }
    return 0;
}



