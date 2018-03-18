#define _CRT_SECURE_NO_WARNINGS 1  
#include<stdio.h>  
#include<stdlib.h>  
int IsLeapYear(int y)  
{  
    return (y%100!=0&&y%4==0)||(y%400 == 0);  
}  
int main()  
{     
    int year = 0;  
    scanf("%d", &year);  
    int check = IsLeapYear(year);  
    if (0 == check)  
        printf("N");  
    else  
        printf("Y");  
    
    return 0;  
}  
