//
// Created by Sk Naser Hussain on 02-10-2023.
//
#include<stdio.h>
int main(){
    int range;
    printf("ENTER THE RANGE:\n");
    scanf("%d",&range);
    for(int i=1;i<range;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}
/***
* output:
 * ENTER THE RANGE:6
 * 1
 * 12
 * 123
 * 1234
 * 12345
*/