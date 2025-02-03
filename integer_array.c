#include<stdio.h>
int main()
{
    int arr[11]={1,2,3,4,5,6,7,8,9,10};
    // Define an intege array and print it
    for (int i=0 ; i<=9;i++)
    {
        printf("%d\n",arr[i]);
    }
          printf("\n");
    // Insert an elemnt at the 3rd position
    for( int i=10;i>=2;i--)
           {
            arr[i+1]=arr[i];
           }
           arr[2]=15;
    for(int i=0;i<=11;i++)
           {
                printf("%d\n",arr[i]);
           }
           printf("\n");
    // Delete the and element from the array
    for(int i=1;i<=10;i++)
           {
            arr[i]=arr[i+1];
           }
    for(int i=0;i<=9;i++)
           {
            printf("%d\n",arr[i]);
           }
   // reverse the array
   
   for (int i=0;i<=10;i++)
     arr[i]=arr[i+1];

   // checking the the array is pallindrome is not 
           
    return 0;
}