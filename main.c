#include <stdio.h>
#include <stdlib.h>
#include  <math.h>

int main()
{
    float  x, y, z, c2;
    float X[6][6], ratio, t[3];
    int i, j, k,N;
    N = 3;
    char filename[256];
    FILE *fp;
    fp= fopen("equations.txt", "r");
   
    if (fp != NULL)
    {
        printf("file successfully opened\n");
    }
   
    int b = 0; 
  
    while (b < 3 ){
   
        fscanf(fp, "%f %f %f %f", &x, &y, &z,&c2);
        printf("%f %f %f %f \n", x, y, z, c2);
        for(i=1; i<=N; i++)
        {
            for(j=1; j<=(N+1); j++)
            {
            
                float x = X[i][j];
                
                float y = X[i][j];
                
                float z = X[i][j];
                
                float c2 = X[i][j];
                
                
                 for(j=1; j<=(N+1); j++)
    {
        for(i=0; i<=N; i++)
        {
            if(i!=j)
            {
                ratio=X[i][j]/X[j][j];
                for(k=1; k<=N+1; k++)
                {
                    X[i][k]=X[i][k]-ratio*X[j][k];
                }
            }
        }
    }
    printf("\nThe solution is:\n");
    for(i=1; i<=N; i++)
    {
        t[i]=X[i][N+1]/X[i][i];
        printf("\n Answer%d=%lf\n",i,t[i]);
    }
                
            }
    
        }
        
        b++;
    }
    
   
   
    return(0);
}