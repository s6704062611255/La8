#include <stdio.h>
int checkscore(char std[]);
int Check_No1(char std[]);

int main(){
   
    char ans[8][10] = {
        {'A', 'B', 'A', 'C', 'C', 'D', 'E', 'E', 'A', 'D'},  // 7
        {'D', 'B', 'A', 'B', 'C', 'A', 'E', 'E', 'A', 'D'},  // 6
        {'E', 'D', 'D', 'A', 'C', 'B', 'E', 'E', 'A', 'D'},  // 5
        {'C', 'B', 'A', 'E', 'D', 'C', 'E', 'E', 'A', 'D'},  // 4
        {'A', 'B', 'D', 'C', 'C', 'D', 'E', 'E', 'A', 'D'},  // 8
        {'B', 'B', 'E', 'C', 'C', 'D', 'E', 'E', 'A', 'D'},  // 7
        {'B', 'B', 'A', 'C', 'C', 'D', 'E', 'E', 'A', 'D'},  // 7
        {'E', 'B', 'E', 'C', 'C', 'D', 'E', 'E', 'A', 'D'}}; // 7

    char keys[10] = {'D', 'B', 'D', 'C', 'C', 'D', 'A', 'E', 'A', 'D'};
    
    int size = sizeof(ans) / sizeof(ans[0]);
    for (int i = 0; i < size;i++){
         printf("std %d => %d\n", (i + 1), checkscore(ans[i]));
    }
    printf("No1 Correct: %d \n", Check_No1(ans));
}
int checkscore(char std[]){
    int i ,score = 0;
    char keys[10] = {'D', 'B', 'D', 'C', 'C', 'D', 'A', 'E', 'A', 'D'};

    for(i=0 ;i<10;i++){
        if(std[i] == keys[i]){
            score+=1;
        }
    }
    return score;
}

int Check_No1(char std[]){
    int score_no1 = 0;
    char keys[10] = {'D', 'B', 'D', 'C', 'C', 'D', 'A', 'E', 'A', 'D'};
    for(int i=0;i<8;i++){
        
        if(std[i] == keys[0]){
            score_no1++;
        }    
    }
    return score_no1;
}
