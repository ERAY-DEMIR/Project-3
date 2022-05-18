//Linear Equation

#include <stdio.h>
#include <stdlib.h>
#include  <math.h>
#include <conio.h>


int main()
{
    int i,j,k,n;
    double X[30][30],ratio,y[15];
    printf("\nEnter the size of matrix: ");
    scanf("%d",&n);
    printf("\nPlease, Enter the elements of augmented matrix row-wise:\n ");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=(n+1); j++)
        {
            printf(" X[%d][%d]:", i,j);
            scanf("%lf",&X[i][j]);
        }
    }
    // We need to transform augmented matrix into diagonal matrix
    for(j=1; j<=n; j++)
    {
        for(i=1; i<=n; i++)
        {
            if(i!=j)
            {
                ratio=X[i][j]/X[j][j];
                for(k=1; k<=n+1; k++)
                {
                    X[i][k]=X[i][k]-ratio*X[j][k];
                }
            }
        }
    }
    printf("\nThe solution is:\n");
    for(i=1; i<=n; i++)
    {
        y[i]=X[i][n+1]/X[i][i];
        printf("\n x%d=%lf\n",i,y[i]);
    }
    return(0);
}
