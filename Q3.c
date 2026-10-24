#include <stdio.h>

int main(){
    int image[3][3];
    int (*ptr)[3] = image;

    printf("Enter 9 pixels values:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d", (*(ptr + i) + j));
        }
    }

    // increase brightness by *2 using pointer arithmetic only
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            *(*(ptr + i) + j) = *(*(ptr + i) + j) * 2;
        }
    }

    printf("\nUpdated Image:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ", *(*(ptr + i) + j));
        }
        printf("\n");
    }
    return 0;
}