//
// Created by Sk Naser Hussain on 13-11-2023.
//
//Write a c program by using the numerical 1,9,9 and 6 exactly in the order to make the following numericals:- 28,32,35,38,72,73,76,77,100,1000.
#include<stdio.h>
#include<math.h>
int main(){
    int s1=(9+9)+(9+1);
    int s2=s1+sqrt(9)+1;
    int s3=s2+sqrt(9);
    int s4=s3+sqrt(9);
    int s5=(9+9)*(9-6+1);
    int s6=s5+1;
    int s7=s6+sqrt(9);
    int s8=s7+1;
    int s9=s5+s1;
    int s10=s9*(9+1);
    printf("THE NUMERICALS ARE:%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",s1,s2,s3,s4,s5,s6,s7,s8,s9,s10);
}
/***
* THE NUMERICALS ARE:28,32,35,38,72,73,76,77,100,1000
*/