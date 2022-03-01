/********************
 * File   : linearSearch.c
 * Program: To Read n integers, store them in an array and search for an element in the array using an algorithm for Linear Search
 * Author : Justin Jolly
 * Version: 1.0
 * Date   : 22/09/2021
***********************/
#include<stdio.h>
int main(){
    int array[30];
    int size,i,search;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    printf("Enter the elements in the array: ");
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    /*printf("\nThe given elements are: ");
    for(i=0;i<size;i++){
        printf(" %d",array[i]);
    }*/
    printf("\nEnter the element to search: ");
    scanf("%d",&search);
    for(i=0;i<size;i++){
        if(array[i]==search){
            printf("The element found at position %d ",i+1);
            break;
        }
    }
    if(i==size){
        printf("The element not found !");
    }
    return 0;
}