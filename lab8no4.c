#include<stdio.h>
int partition(int a[],int l,int r);
void quicksort(int a[], int l, int r);
void swap(int *a, int *b);
void printArr(int a[], int size);
void InputArr(int a[],int s);

int main(){
    int size;
    scanf("%d",&size);
    int a[size];
    Way2(a,size);
    
}

int partition(int a[], int l, int r){
    int pivot,i,j;
    pivot = a[l];
    i = l;
    j = r+1;
    while(1){
        do{
            ++i;
        }while(a[i]<=pivot);

        do{
            --j;
        }while(a[j]>pivot);
        
        if(i>=j){
            break;
        }
        swap(&a[i],&a[j]);
    }
    swap(&a[l], &a[j]);
    return j;
}

void quicksort(int a[], int l, int r){
    if(l<r){
        int p;
        p = partition(a,l,r);
        quicksort(a,l,p-1);
        quicksort(a,p+1,r);

    }

}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArr(int a[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
}
void InputArr(int a[], int s){
    a[s];
    for(int i=0;i<s;i++){
        scanf("%d",&a[i]);
    }
}

void Way2(int a[],int size){
    
    InputArr(a,size);
    quicksort(a,0,size-1);
    printf("Sort : ");
    printArr(a,size);
    printf("\n");
    printf("Top 3 from lasted : ");
    for(int i=size-3;i<size;i++){
        printf("%d ",a[i]);
    }

}