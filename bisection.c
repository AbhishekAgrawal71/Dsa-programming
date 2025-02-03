#include<stdio.h>
#include<math.h>
double value_of_function(double a){
     double result=cos(a);
    return (a-result);
}
int main()
{
    double lowerlimit,upperlimit,Tolerence,c,lower_value,upper_value,d,difference,itt=0;
    printf("Insert the interval\n");
    printf("Insert the lower limit of the interval :");
    scanf("%lf",&lowerlimit);
    printf("Enter the upperlimit :");
    scanf("%lf",&upperlimit);
    printf("Enter the value of tolerence :");
    scanf("%lf",&Tolerence);
    difference = (lowerlimit-upperlimit);
         printf("the difference is %lf \n",difference);

           if(difference<0){
            difference=(-1)*difference;
           }
           else
           {
            difference=difference;
           }
           printf("The absolute value of the difference is %lf ",difference );
    for (int i = 0; difference>Tolerence ; i++)
    {
        lower_value= value_of_function(lowerlimit);
        printf("value at %lf is %lf\n",lowerlimit,lower_value);
        upper_value=value_of_function(upperlimit);
        printf("value at %lf is %lf \n",upperlimit,upper_value);
        if(lower_value<0)
        {
         if(lower_value*upper_value<0)
         {
            c=(lowerlimit+upperlimit)/2;
            d=value_of_function(c);
            printf(" value at %lf is %lf \n",c,d);
            if(d<0){
                lowerlimit=c;
            }
            else
            upperlimit=c;
         }
         }
         else
         {
            if(lower_value*upper_value<0)
            {
                 c=(lowerlimit+upperlimit)/2;
                  d=value_of_function(c);
                  printf("value at %lf is %lf \n",c,d);
                  printf("value at %lf is %lf\n",upperlimit,upper_value);
            if(d<0){
                upperlimit=c;
            }
            else
            lowerlimit=c;
            }
         }
         difference = (lowerlimit-upperlimit);
         printf("the difference is %lf \n",difference);
           if(difference<0){
            difference=(-1)*difference;
           }
           else
           {
            difference=difference;
           }
           printf("The absolute value of the difference is %lf \n ",difference );
           itt++;
          
    }
    printf("The root is %lf \n ",upperlimit);
    printf("Total number of ittereations are %lf \n",itt);
    return 0;
    }
    
    

