#include <stdio.h>

int main()
{
    int a[10][10];
    int triplet[100][3];

    int rows, cols;
    int i, j;
    int k = 1;

    // Input size of matrix
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Input matrix
    printf("Enter the elements of the matrix:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
  
    // Display original matrix
    printf("\nOriginal Matrix:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // Store non-zero elements in triplet form
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            if(a[i][j] != 0)
            {
                triplet[k][0] = i;
                triplet[k][1] = j;
                triplet[k][2] = a[i][j];

                k++;
            }
        }
    }

    // Store information in the first row (header)
    triplet[0][0] = rows;
    triplet[0][1] = cols;
    triplet[0][2] = k - 1;

    // Display triplet representation
    printf("\nTriplet Representation:\n");
    printf("Row\tColumn\tValue\n");

    for(i = 0; i < k; i++)
    {
        printf("%d\t%d\t%d\n",
               triplet[i][0],
               triplet[i][1],
               triplet[i][2]);
    }

    return 0;
}


