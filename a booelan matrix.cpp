
#include<iostream>

using namespace std;
#define R 3
#define C 4
void modifyMatrix(int mat[R][C])
      { 
        int row[R]; 
        int col[C]; 
        int i;
        int j;
            for (i = 0; i < R; i++) 
            { 
                for (j = 0; j < C; j++) 
                { 
                    if (mat[i][j] == 1) 
                    { 
                        row[i] = 1; 
                        col[j] = 1; 
                    } 
                } 
            } 
            for (i = 0; i < R; i++) 
           { 
                for (j = 0; j < C; j++) 
                { 
                    if ( row[i] == 1 || col[j] == 1 ) 
                    { 
                        mat[i][j] = 1; 
                    } 
                } 
            } 
           
           
      }
void printMatrix(int mat[R][C])
    {
        int i, j; 
            
    
            for (i = 0; i < 3; i++) 
            { 
                    for (j = 0; j < 4; j++) 
                    { 
                        cout << mat[i][j]<<"\t"; 
                    } 
                cout << endl; 
            }
            
    }
        

int main()
   
  { 
        int mat[R][C] = { {1, 0, 0, 1}, 
                       {0, 0, 1, 0}, 
                       {0, 0, 0, 0}};       
            cout << "Input Matrix \n"; 
            printMatrix(mat); 
  
            modifyMatrix(mat); 
  
            printf("Matrix after modification \n"); 
            printMatrix(mat); 
    return 0;
}
        
   
       
   