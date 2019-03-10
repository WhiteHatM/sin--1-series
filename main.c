#include<stdio.h>
#include<math.h>

int fact(int n);
int main()
{
    int i,j=1,n,f;
    float sum = 0.0;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i+=2)
    {
        f = fact(i);
        sum += (pow(-1,j)*(float)1/(float)f);
        j++;
    }
    printf("%f is the sum of the series",sum);
}

int fact(int a)

{
    int i,fact = 1;
    if(a==0)
        return 1;
    else{
        for(i =1;i<=a;i++)
            fact*= i;
    }

return fact;

}


