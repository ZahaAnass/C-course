#include <stdio.h>

char *array[10] = {"John", "Paul", "George", "Ringo",
                    "Pete", "Roger", 
                    "Mick", "Keith", "Brian", "Charlie"};

int sort(char *array[]) {
    int arr_length = 0;
    for(int i = 0; i < 10; i++){
        arr_length++;
    }
    char *temp;
    for (int i = 0; i < arr_length; i++){
        for (int j = i + 1; j < arr_length; j++){
            if(array[i][0] > array[j][0]){
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
    return arr_length;
}

int main () {
    int arr_length = sort(array);
    for (int i = 0; i < arr_length; i++){
        printf("%s\n", array[i]);
    }
    return 0;
}
