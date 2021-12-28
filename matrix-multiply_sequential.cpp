#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <time.h>
#define N 5

int A[N][N];
int B[N][N];
int M[N][N];
int i, j, k, m, n;

int main()
{
 
 for ( i = 0; i < N ;i++ ) 	
    {
    	for ( j = 0; j < N; j++)
    	{     
           A[i][j] = i+j;
           B[i][j] = i*j;
	    }
    }

  clock_t start;
  clock_t end;
  start = clock()/CLK_TCK;
  for (m = 0; m < N; m++)
  {
    for (n = 0; n < N; n++)
    {
            
              int Mb = 0;
              int sum =0;
              for (k = 0; k < N; k++)
                {            
                Mb = A[m][k] *B[k][n];            
                sum = sum + Mb;             
                }       
              M[m][n] = M[m][n] + sum;
              std::cout<< M[m][n]<< std::endl;
  
    }    
            
  }
  end = clock()/CLK_TCK;

  return 0;
}




