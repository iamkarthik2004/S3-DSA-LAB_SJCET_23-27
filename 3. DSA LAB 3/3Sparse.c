/*
Karthik Krishnan
S3 CSE B - 45
EXPERIMENT - 5
SPARSE MATRIX
07-08-2024
*/

#include <stdio.h>
int main()
{
    int row, col, i,j,k=1, count = 0;
    printf("Enter the no. of rows: ");
    scanf("%d", &row);
    printf("Enter the no. of columns: ");
    scanf("%d", &col);
    
    int array[row][col];
    
    printf("Enter the elements of the array: \n");
    
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &array[i][j]);
            if(array[i][j] != 0)
            {
                count++;
                
            }
            
        }
        
    }
    
    int b[count + 1][3];
    b[0][0]=row;
    b[0][1]=col;
    
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(array[i][j] != 0)
            {
                b[k][0]=i;
                b[k][1]=j;
                b[k][2] = array[i][j];
                k++;
                
            }
            
        }
        
    }
    
    b[0][2] = k-1;
    printf("Sparse Matrix Representation: \n");
    printf("Row\tColumn\tValue\n");
    for (i = 0; i < k; i++)
    {
        printf("%d\t%d\t%d\n", b[i][0], b[i][1], b[i][2]);
        
    }
 
return 0;
}