#include<stdio.h>
#include<stdlib.h>
int main ()  
{
    int *arr;
    arr=(int*)malloc(3*sizeof(int));
    arr=realloc(arr,5*sizeof(int));
    printf("%d",sizeof(arr));
    int i=0;
    while(*(arr+i)==0){
        printf("%d", *(arr+i));
        i++;
    }
    
return 0;
}