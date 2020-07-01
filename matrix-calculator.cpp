/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
    {
        
        int row;
        int col;
        int i;
        int j;
        
        int x;
        
        cout<<"Row number and Column number:"<<endl;
        cin>>row;
        cin>>col;
        float matrix[row][col];
        float matrix_2[row][col];
        float birim_matrix[row][col];
        float matrix_3[row][col];
        cout<<"Write rows"<<endl;
        for(int i=0;i<row;i++)
            {
                for (int j=0;j<col;j++)
                    {   
                        cout<<"a["<<i+1<<"]["<<j+1<<"]"<<endl;
                        cin>>matrix[i][j];
                        
                    }
            
            }
        cout<<"The matrix is = "<<endl;
        for(int i=0;i<row;i++)
            {
                for (int j=0;j<col;j++)
                    {
                        cout<<matrix[i][j]<<"  ";
                    }
            cout<<"\t\t"<<endl;
            }
            
       
        
        
        //Creating a transpose matrix of given matrix
        for(int i=0;i<row;i++)
            {
                for(int j = 0;j<col;j++)
                    {
                        matrix_2[i][j]=matrix[j][i];
                        
                    }
            }
        //Printing the tranpose matrix    
            cout<<"Transpose of the matrix = "<<"\n";
        for(int i=0;i<row;i++)
            {
                for(int j = 0;j<col;j++)
                    {
                        cout<<matrix_2[i][j]<<"  ";
                        
                    }
                cout<<"\t\t"<<endl;    
            }
        //Creating a unit matrix
        for(int i=0;i<row;i++)
            {
                for(int j=0;j<col;j++)
                    {
                        if(i==j)
                            {
                                birim_matrix[i][j]=1;
                            }
                        else
                            birim_matrix[i][j]=0;
                    
                    }
            
            }
        //Printing the unit matrix    
        cout<<"Unit matrix = "<<endl;    
        for(int i=0;i<row;i++)
            {
                for(int j=0;j<col;j++)
                    {
                        
                        cout<<birim_matrix[i][j]<<"  ";
                          
                        
                            
                    
                    }
                cout<<endl;
            }
        float d,k;
        for(i=0;i<row;i++)
            {
            d=matrix[i][i];
                for(j=0;j<col;j++)
                {
                    matrix[i][j]=matrix[i][j]/d;
                    birim_matrix[i][j]= birim_matrix[i][j]/d;
                }   
                for(int x=0;x<row;x++)
                {
                    if(x!=i)
                    {   k=matrix[x][i];
                        for(j=0;j<row;j++)
                        {
                            matrix[x][j]=matrix[x][j]-(matrix[i][j]*k);
                            birim_matrix[x][j]=birim_matrix[x][j]-(birim_matrix[i][j]*k);
                        }
                    }
                        
                }
                
                
                
            }
        cout<<"Inverse Matrix ="<<endl;    
        for(int i=0;i<row;i++)
            {
                for(int j=0;j<col;j++)
                    {
                        
                        cout<<birim_matrix[i][j]<<"  ";
                          
                        
                            
                    
                    }
                cout<<endl;
            }
        return 0;
    }



