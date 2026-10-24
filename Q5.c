#include <stdio.h>

void printSensorData(void *ptr, char type){
    if(type=='t' || type=='T'){
        float *temp = (float*)ptr;
        printf("Temperature: %.2f Celsius\n", *temp);
    }
    else if(type=='m' || type=='M'){
        int *motion = (int*)ptr;
        if(*motion==1) printf("Motion Detected\n");
        else printf("No Motion\n");
    }
    else if(type=='d' || type=='D'){
        char *door = (char*)ptr;
        if(*door=='O' || *door=='o') printf("Door Open\n");
        else printf("Door Closed\n");
    }
}

int main(){
    float temperature = 28.5;
    int motion = 1;
    char door = 'C';

    printSensorData(&temperature, 't');
    printSensorData(&motion, 'm');
    printSensorData(&door, 'd');
    return 0;
}