/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <bits/stdc++.h>
#define N 4
using namespace std;
void addMatrices(int A[N][N], int B[N][N] , int C[N][N])
    {   int i,j;
            for (i=0;i<N;i++)
            {   for(j=0;j<N;j++)
                {
                    C[i][j]=A[i][j]+B[i][j];
                }
            
            }
            cout<< "Result matrix is " << endl;  
            for (i = 0; i < N; i++)  
            {  
                for (j = 0; j < N; j++) 
                { 
                    cout << C[i][j] << " ";  
                    
                    
                }
            cout << endl; 
            }  
    
    }
int main()  
{  
    int A[N][N] = { {1, 1, 1, 7},  
                    {28, 2, 2, 2},  
                    {3, 3, 3, 41},  
                    {48, 45, 21, 4}};  
  
    int B[N][N] = { {4, 6, 1, 1},  
                    {2, 5, 2, 2},  
                    {3, 7, 1, 3},  
                    {8, 4, 4, 10}};  
    int C[N][N];
    addMatrices(A, B, C);
    return 0;
}
