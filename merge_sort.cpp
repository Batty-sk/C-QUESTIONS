#include<iostream>			
using namespace std; 		
int merge_sort(int [],int,int); 
void concadinate(int *, int, int, int);	
							
int merge_sort(int arr[],int starting_index, int last_index) //{34,23, 1,2} ,0 , 3
{			
	if ( starting_index!=last_index ) // if 2 == 3 F
	{
								
			int mid_value=(starting_index+last_index)/2;//2+3/2= 2
			//{34,23}
			
			int left_subarray=merge_sort(arr,starting_index,mid_value); //2, 2 
			// 0 , 0 
							 		
			//right subarray 	
			int right_subarray=merge_sort(arr,mid_value+1,last_index);// 2+1, 3
			// 1 
			


			concadinate(arr, left_subarray, right_subarray, last_index);

			//jaise hogya concadinate {23, 34} {1,2}
			return starting_index; 
			// condition will be i<right_subarray && j<last_index;
			
			
	}	
	else{
		//0 , 1	, 2 , 3
		return starting_index;
	    }
					
	
}							//0 ,              //2        //3
void concadinate(int *arr,int left_subarray, int right_subarray, int last_index)
{
	// printing the array 
	int p=0;

	
	int i=left_subarray,j=right_subarray;//0,1
	int temp[last_index-left_subarray+1];//2
	int k=0;
	
	while(i!=right_subarray || j<=last_index)//1!=1 F 2<=1 F 
	{
		if(j>last_index)//2>1 T 
		{
			temp[k]=arr[i];//23, 34 
			i++;//1
		}
		else if(i==right_subarray)// 0 == 1 F
		{
			temp[k]=arr[j];
			j++;
		}
		else{
		
			if(arr[i]>arr[j])//	34>23 T		{34,23,1,2}
			{
				temp[k]=arr[j];//23 ,
				j++;//2
			}
			else{
				temp[k]=arr[i];
				i++;
			}
		}
		
		k+=1;
	}
	
	//copying the data; 
	i=left_subarray;//0 
	j=0;

	while(j<k)		//0<2	
	{					
		arr[i]=temp[j];	// 23 , 34
		i++;//2
		j+=1;//2
	}

	
	
}
int main(void)
{
	int arr[12]={53,54,23,4,20,22,11,44,55,366,77,123};
	merge_sort(arr,0,11);
	cout<<"result array"<<endl; 
	int i=0;
	for(i=0;i<12;i++)
		cout<<arr[i]<<" ";
	cout<<endl<<":)"<<endl;
}
