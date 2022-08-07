#include<stdio.h>
int len_of_the_string(){
	char arr[20]="Hello there";
	int i;
	for(i=0;arr[i];i++);
	printf("The lenght is %d\n",i-1);
	return i-1;
}
int occurence_of_given_char(){
	char string[20]="goodgunisallineed";
	printf("Enter a char to find its occurence \n");
	char a=getch();
	int i;
	int count=0;
	for(i=0;string[i];i++){
		if(string[i]==a){
			count++;
		}
	}
	printf("The occurence is %d \n",count);
	return count;
}
int vovels(){
	char string[]="ayouioussa";
	int i,count=0;
	for(i=0;string[i];i++){
		if(string[i]=='a' || string[i]=='o' || string[i]=='e' || string[i]=='i' || string[i]=='u')
		count++;
	}
	printf("it has %d vovels \n",count);
	return count;
}
int uppercase_string(){
	char string[]="string";
	int i;
	for(i=0;string[i];i++){
		if(!(string[i]>='A' && string[i]<='B'))
				string[i]=string[i]-92;
	}
	printf("%s",string);
	return 0;
}
int lowrcase_string(){
	char string[]="STRINg";
	int i;
	for(i=0;string[i];i++){
		if(!(string[i]>='a' && string[i]<='z'))
				string[i]=string[i]+32;
	}
	printf("%s",string);
	return 0;
}	

int alpha_digits(){
	int countchar=0;
	int countspecial=0;
	int countdigit=0;
	char string[]="Hello123&#";
	int i;
	for(i=0;string[i];i++){
		if(string[i]>='0' || string[i]<='9')
			countdigit++;
		else if(string[i]>='a' && string[i]<='z' || string[i]>='A' && string[i]<='Z')
			countchar++;
		else{
			countspecial++;
		}
	}
	printf("digits %d, alpha %d, special %d\n",countdigit,countchar,countspecial);
}
int reverse_a_string(){
	char string[]="Hello";
	int i=0,j;
	char temp;
	for(j=0;string[j];j++);
	j--;
	while(i<j){
		temp=string[i];
		string[i]=string[j];
		string[j]=temp;
		i++;
		j--;
	}
}
int copy_string(){
	char string1[]="hello";
	char string2[20];
	int i;
	for(i=0;string1[i];i++){
		string2[i]=string1[i];
	}
	
	}

int sort_the_string(){
	int i,j;
	char string[]="this is a";
	int minimum='z'+1;
	int index=0;
	char temp;
	for(i=0;string[i];i++){
		for(j=i;string[j];j++){
			
			if(string[j]<minimum){
				 index=j;
				minimum=string[j];
			}
		}
		if(minimum!=string[i]){
			temp=string[i];
			string[i]=minimum;
			string[index]=temp;
		}
		minimum='z'+1;
}
printf("After sorting %s\n",string);
}

int frequency(){
	char string[]="goodgame";
	int i,j;
	int count=0;
	int flag=0;
	char temp;
	for(i=0;string[i+1]!='\0';i++){
		flag=0;
			if(string[i-1]!=string[i]){
					flag=1;
		}
			else{
				flag=0;
			}
		if(i==0 || flag==1){
			for(j=i+1;string[j];j++){
				if(string[j]==string[i]){
					count++;//1
					if(string[i+count]!=string[j]){
							temp=string[i+count];
							string[i+count]=string[j];
							string[j]=temp;
					}
					
			}
			
		}
		//printf("when i %d loop %s \n",i,string);
		printf("The character %c having frequency %d \n",string[i],count+1);
		count=0;
		}
}
		printf("The character %c having frequency %d \n",string[i],1);

}
int main(){
	//@1-
//	len_of_the_string();
	//@2-
//	occurence_of_given_char();
	//@3-
//	vovels();
	//@4-
	//uppercase_string();
	//@5-
	//lowercase_string();
	//@6-
//	reverse_a_string();
	//@7-
//	alpha_digits();
	//@8-
	//copy_string();
	//@9-
//	sort_the_string();
	//@10-
	frequency();

	
}
