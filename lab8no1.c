#include <stdio.h>
void addthree(int number[], int pos[][5], int s) ;
void printArr(int arr[], int size);

int main()
{
    int number[] = {20, 50, 100, 99, 9,10};
  
    int pos_3[][5] = {{0,5},{1,100},{2,20}};
    int sizeNum = sizeof(number)/sizeof(number[0]);
    
    int sizePos_3 = sizeof(pos_3) / sizeof(pos_3[0]);

    printf("Before : ");
    printArr(number, sizeNum);
    printf("\n");
    printf("After : ");
    addthree(number, pos_3, sizePos_3);
    printArr(number, sizeNum);
}

void printArr(int arr[] , int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

void addthree(int number[] , int pos[][5] ,int s){
    int i;
    for(i=0;i<s;i++){
        int ind = pos[i][0];
        int target_add = pos[i][1];
        number[ind]+=target_add;
    }
}