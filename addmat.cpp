#include<stdio.h>
int r,c,i,j;
void matrixAdd(int mat1[][10],int mat2[][10],int mat3[][10])
{

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			mat3[i][j]=mat1[i][j]+mat2[i][j];
		}
	}
}
void matrixSub(int mat1[][10],int mat2[][10],int mat3[][10])
{
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			mat3[i][j]=mat1[i][j]-mat2[i][j];
		}
	}
}
	int main()
	{
		int matrix1[10][10],matrix2[10][10];
		int matrix3[10][10],i,j;
		printf("Enter the number of rows and columns:");
		scanf("%d%d",&r,&c);
		if(r>10||c>10)
		{
			printf("No of rows and columns is greater than 10");
			return 0;
		}
		printf("Enter the first matrix:");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				scanf("%d",&matrix1[i][j]);
			}
		}
		printf("Enter the second matrix:");
			for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				scanf("%d",&matrix2[i][j]);
			}
		}
		
		matrixAdd(matrix1,matrix2,matrix3);
		
		printf("\n Add result matrix\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d",matrix3[i][j]);
				printf("\t");
				
			}
			printf("\n");
		}
		matrixSub(matrix1,matrix2,matrix3);
		
		printf("\n Sub result matrix\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d",matrix3[i][j]);
				printf("\t");
				
			}
			printf("\n");
		}
		
	
	return 0;
}
