#include <stdio.h>

int main()
{
    int arr[3][3][3];
    int *ptr = &arr[0][0][0];
    printf("Input elements in the matrix : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", ptr + i * 3 + j); //i*3 + j is used because int i for loop iterates value of j again becomes 0
        }
    }
    printf("The matrix is: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++) // two for loops are used to print it in the form of matrix
        {
            printf("%d  ", *(ptr + i * 3 + j)); //i*3 + j is used because int i for loop iterates value of j again becomes 0
        }
        printf("\n");
    }
    int sumDiagonal = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                sumDiagonal += *(ptr + i * 3 + j); //it adds every diagonal element to sumDiagonal
                //i*3 + j is used because int i for loop iterates value of j again becomes 0
            }
        }
    }
    printf("The sum of the diagonal elements is %d", sumDiagonal);
    return 0;
}
