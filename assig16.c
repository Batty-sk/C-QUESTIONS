#include<stdio.h>
int sum_of_matrix(){
	int matrix1[3][3]={{1,2,4},{5,3,6},{1,2,9}};
	int matrix2[3][3]={{7,5,3},{123,34,65},{32,56,7}};
	int i,j;
	int sum=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			sum=matrix1[i][j]+matrix2[i][j]+sum;
		}
	}
	printf("sum : %d\n",sum);
}
int product_of_matrix(){
	int matrix1[3][3]={{1,2,4},{5,3,6},{1,2,9}};
	int matrix2[3][3]={{7,5,3},{1,3,5},{2,5,7}};
	int i,j;
	int sum=1;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			sum=matrix1[i][j]*matrix2[i][j]*sum;
		}
	}
	printf("product : %d\n",sum);
}
int transpose_of_mattrix(){
	printf("Enter the row and col size of an array \n");
	int row,col;
	scanf("%d%d",&row,&col);
		int i,j;
	int mattrix[row][col];//2*3
	printf("Enter the elements \n");
		for(i=0;i<row;i++){
			for(j=0;j<col;j++){
				scanf("%d",&mattrix[i][j]);
			}
		}
	printf("The transpose of the array would be %d * %d\n",col,row);
	int transpose_mattrix[col][row];//3*2

	for(i=0;i<col;i++){//3
		for(j=0;j<row;j++){//2                             
			transpose_mattrix[i][j]=mattrix[j][i];
							//0 0 =        2 0
		} 
	}
	
	printf("done \n");
}
int sum_of_right_diagonal(){
	int mattrix[5][4]={{1 ,2, 3, 4},
					   {5, 6, 7, 8},
					   {9,10,11,12},
					   {13,14,15,16},
					   {17,18,19,20}};
	int sum=0;
	int i=0;
	for(i=0;i<4;i++){
		sum=mattrix[i][i]+sum;
	}
	printf("sum of its right diognal is :%d",sum);
}
int sum_of_left_diagonal(){
		int mattrix[5][4]={{1 ,2, 3, 4},
					   {5, 6, 7, 8},
					   {9,10,11,12},
					   {13,14,15,16},
					   {17,18,19,20}};
	int sum=0;
	int i=0,j=4;
	for(i=0;i<5;i++,j--){
		if(j>=0){
		sum=mattrix[i][j]+sum;
		}
		else{
			break;
		}
	}
	printf("sum of its left diognal is :%d",sum);
}
int sum_of_rows_and_columns(){
	int mattrix[3][3]={{1,2,3},
					   {4,2,1},
					   {5,2,9}};//29
	int sum;
int i,j;
for(i=0;i<3;i++){
	for(j=0;j<3;j++)
		sum+=mattrix[i][j];
}
printf("The sum of rows and column of a mttrix is %d \n",sum);
return 1;
}
int lower_traingular_mattrix(){
	char mattrix[4][4]={{1,0,0,0},
						{5,3,0,0},
						{1,2,6,0},
						{9,6,4,2}};
						
	int i;
	int j;
	for(i=0;i<4;i++){
		for(j=i+1;j<4;j++){
			printf("%d ",mattrix[i][j]);
		}
		printf("\n");
	}
}
int upper_traingular_mattrix(){
		char mattrix[4][4]={{1,0,0,0},
							{0,3,0,0},
							{0,0,6,0},
							{0,0,0,2}};
						
	int i;
	int j;
	for(i=0;i<4;i++){
		for(j=i-1;j>=0;j--){
			printf("%d ",mattrix[i][j]);
		}
		printf("\n");
	}
}
int sparse_mattrix_or_not(){
	int row,col;
	printf("Enter a row and col \n");
	scanf("%d%d",&row,&col);
	int mattrix[row][col];
	printf("Enter the elements in the mattrix \n");
	int i,j,count;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&mattrix[i][j]);
			if(mattrix[i][j]==0)
				count++;
		}
	}
	if((row*col)/2<=count){
		printf("its a sparse-mattrix \n");
	}
	else{
		printf("its not a sparse-mattrix \n");
	}
	//checking
}
int row_with_maximum_no_of_one(){
	int mattrix[4][4]={{1,1,3,1},{1,2,1,2},{1,2,3,1},{1,1,0,1},{3,2,1,1}};
	int count=0;
	int smallest=0;
	int row=0;
	int i,j;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(mattrix[i][j]==1)
				count++;
		}
		if(count>smallest)
			{
				row=i;
				if(count==4)
				{
					printf("row %d has maximum no of 1s \n",i);
					return 1;
				}
				smallest=count;
			}
			count=0;
	}
	printf("The row %d has highest no of 1s \n",row);
	return 1;
}
int main(){
	//@1-
//	sum_of_matrix();
	//@2-
//	product_of_matrix();
	//@3-
//	transpose_of_mattrix();
	//@4-
//	sum_of_right_diagonal();
	//@5-
//	sum_of_left_diagonal();
	//@6-
//	sum_of_rows_and_columns();
	//@7-
//	lower_traingular_mattrix();
	//@8-
//	upper_traingular_mattrix();
	//@9-
//	sparse_mattrix_or_not();
	//@10-
	row_with_maximum_no_of_one();
	
}
