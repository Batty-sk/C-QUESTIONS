#include<stdio.h>
int sum_of_array(){
	int sum=0;
	int i;
	printf("Enter 10 elements \n");
	int arr[10];
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
}
int average_of_nos(){
	printf("Enter 10 elements \n");
	int arr[10];
	int sum=0,i;
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	printf("Average : %f",sum/10.0);
}
int sum_of_odd_even(){
	printf("Enter 10 elements \n");
	int arr[10];
	int sumodd=0,sumeven=0;
	int i;
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);		
			if(arr[i]&1)
				sumodd+=arr[i];
			else{
				sumeven+=arr[i];
			}		
		}
		printf("sum of odd and even are %d %d",sumodd,sumeven);
}
int greatest_no(){
	printf("Enter 10 elements \n");
	int arr[10];
	int largest=0;
	int i;
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
		if(arr[i]>largest){
			largest=arr[i];
		}
	}
	printf(" largest : %d \n",largest);
}
int smallest_no(){
		printf("Enter 10 elements \n");
	int arr[10];
	int largest=64543753845;
	int i;
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
		if(arr[i]<largest){
			largest=arr[i];
		}
	}
	printf(" smallest : %d \n",largest);
}
int sort_the_array(){
		printf("Enter 10 elements \n");
	int arr[10];
	int smallest;
	int i;
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	smallest=arr[0];
	int j;
	int index=0;
	for(i=0;i<10;i++){
		for(j=i;j<10;j++){
			if(arr[j]<smallest){
				smallest=arr[j];
				index=j;
			}
		}
		if(i!=index){
			arr[i]=arr[i]+arr[index];
			arr[index]=arr[i]-arr[index];
			arr[i]=arr[i]-arr[index];
		}
		smallest=arr[i+1];
		index=i+1;
	}
}
int secound_largest(){
	printf("Enter 10 elements \n");
	int arr[10];
	int largest=0;
	int pre_largest=0;
	int i;
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
		if(arr[i]>largest){
			pre_largest=largest;
			largest=arr[i];
		}
	}
	printf(" secound-largest : %d \n",pre_largest);
}
int secound_smallest(){
	printf("Enter 10 elements \n");
	int arr[10];
	int smallest=99493924;
	int pre_smallest=pre_smallest;
	int i;
	//doing in one loop thats why taking so long value otherwise ill take the first index of array 
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
		if(arr[i]<smallest){
			pre_smallest=smallest;
			smallest=arr[i];
		}
	}
	printf(" secound-smallest: %d \n",pre_smallest);
	
}
void reverse_display(){
		printf("Enter the size of an array \n");
	int n;
	scanf("%d",&n);
	int arr[n];
	int i;
	printf("Enter the elements in array \n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	//displaying in reverse order;
	for(i-=1;i>=0;i--)
		printf("%d ",arr[i]);
	
}
int copy_the_elements(){
	printf("Enter the 5 values \n");
	int arr[5];
	int arr2[5];
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%d",arr[i]);
		arr2[i]=arr[i];
	}
	printf("copied to arr2 .... \n");
	int arr2[5];
}
int main(){
	//@1-
	//sum_of_array();
	//@2-
	//average_of_nos();
	//@3-
	//sum_of_odd_even();
	//@4-
	//greatest_no();
	//@5-
	//smallest_no();
	//@6-
//	sort_the_array();
	//@7-
	//secound_largest();
	//@8-
	//secound_smallest();
	//@9-
	//reverse_display();
	//@10-
	copy_the_elements();
}
