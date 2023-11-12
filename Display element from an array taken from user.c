//
// Created by Sk Naser Hussain on 12-11-2023.
//
////Write a program in c to display the element from an array by taking the index position from the user.
#include<stdio.h>
int main(){
    int size,j;
    printf("ENTER THE SIZE OF ARRAY:\n");
    scanf("%d",&size);
    int num[size];
    for(int i=0;i<size;i++){
        printf("ENTER INDEX ELEMENT NUMBER:\n",i);
        scanf("%d",num[i]);
    }
    printf("ENTER THE INDEX NUMBER:\n",j);
    scanf("%d",j);
    printf("%d\n",num[j]);
}
/***
* Enter the size of the array:4
Enter index element no:0
10
Enter index element no:1
20
Enter index element no:2
30
Enter index element no:3
40
Enter the index no. :3
40
*/