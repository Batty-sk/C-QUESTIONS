#include<stdio.h>
void count_the_vowels(){
	printf("Enter 5 strings smaller than 20 characteres \n");
	char str[5][20];
	int i,vovels=0,j;
	for(i=0;i<5;i++){
		fgets(str[i],20,stdin);
	}
	
	for(i=0;i<5;i++){
		for(j=0;str[i][j];j++){
			if(str[i][j]=='a' || str[i][j]=='e' || str[i][j]=='i' || str[i][j]=='o' || str[i][j]=='u')
					vovels+=1;
		}
		printf("String %d has %d vovels \n",i+1,vovels);
		vovels=0;
	}
}



void sort_city_names(){
char str[4][20]={{"bhopal"},//975438233
				 {"rabdi"},//975480000
				 {"ajmer"},
				  {"patna"}};
int i,j,k=0;
int arr[4];
int smallest=0;
int flag=0;

while(k<3){//1
for(i=0;i<4;i++){//1
	if(if_its_reserved(i,arr,k)){//0,arr,1
	for(j=0;j<4;j++){//0,1,2
		if(j!=i && if_its_reserved(j,arr,k)){//T and T
			if(who_is_smaller(str[i],str[j])){//ahmez vs bhuv

				}
			else{
				break;
			}
			

		}
}
if(j==4){
	//arr[k]=str[i]
	smallest=i;//0
	printf("smallest %d\n",smallest);
	break;
	}
}
}
arr[k]=smallest;
k++;
}
}
int if_its_reserved(int i, int arr[],int k){
	int j=0;
	while(j<k){//0<1T
		if(arr[j]==i){//0==0 T
			return 0;
		}
		j++;
	}
	return 1;	
}
int who_is_smaller(char str[],char str2[])
{
	int i;
	for(i=0;str[i];i++){
		if(str[i]>str2[i]){
			return 0;
		}
		else if(str[i]<str2[i]){
			return 1;
			}

	}
}


void read_and_display(){
	printf("Enter 2 strings \n");
	char str[2][20];
	int i;
	for(i=0;i<2;i++){
		fgets(str[i],20,stdin);
	}
	//displaying
	printf("The strings you have entered are \n");
	for(i=0;i<2;i++){
		printf("%s",str[i]);
	}
}
void search_the_string(){
	char str[5][20]={{"String1"},{"String2"},{"String3"},{"string4"},{"sTrIng69"}};
	char search[]={"String1"};
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;search[j];j++){
			if(str[i][j]!=search[j])
				break;
		}
		if(search[j]=='\0'){
			printf("found \n");
		}
	}
}
void Email_address(){
	char str[4][20]={{"abc@gmai.com"},{"ewe@gmail.com"},{"notavalid.gmail.com"},{"qwergmail.com"}};
	int i,j;
	for(i=0;i<4;i++){
		for(j=0;j<20;j++){
			if(str[i][j]=='@'){
				break;
			}
		}
		if(j==20){
			printf("The email %s is invalid \n",str[i]);
		}
	}
}
void palindrome_or_not(){
	char list_of_str[3][10]={{"igi"},{"habibi"},{"appqa"}};
	int i,j,k;
	for(i=0;i<3;i++){
		//finding length of a string 
		for(j=0;list_of_str[i][j];j++);
		k=j-1;
		j=0;
		while(j<k){
			if(list_of_str[i][j]!=list_of_str[i][k]){
					break;
			}
			j++;
			k--;
		}
		if(j>=k)
		{
			printf("The string %s is palindrome \n",list_of_str[i]);
		}
	}
}
int valid_ip(){
	char arr[4][16]={{"13.25.9.243"},{"123.234.145.434"},{"234.265.234.0"},{"34.52.32.33."}};
	int dots=0;
	int maximm=505353;
	int len=0;
	int i,j;
	for(j=0;j<4;j++){
	for(i=0;arr[i];i++){//495051
		if(len==3 || (len+1==3 && arr[j][i+1]=='\0')){
			if(((arr[j][i-len]*100)+(arr[j][i-(len-1)]))*100+(arr[j][i-(len-2)])>maximm){
				//printf("cause the no is %d",((arr[i-len]*100)+(arr[i-(len-1)]))*100+(arr[i-(len-2)]));
				break;
			}
		}
		if(arr[j][i]=='.'){
			dots+=1;
			len=0;
		}
		else{
			len++;
			if(len>3){
				break;
			}
		}
	}
	
	if(!(arr[j][i]) && dots==3){
		printf("valid ip-address \n");
	}
	else{
		printf("not valid \n");
	}
	len=0;
	dots=0;
}
}
void minimum_distance(){
	int i,j,k=0;
	int flag=0;
	int starting_dist;

	char arr[5][10]={{"the"},{"quick"},{"brown"},{"fox"},{"quick"}};
	char word[2][10];
	printf("Enter two words to find its distance between \n");
	for(i=0;i<2;i++){
		fgets(word[i],10,stdin);
	}

	for(i=0;i<5;i++){
		for(j=0;arr[i][j];j++){
			if(arr[i][j]!=word[k][j]){
				break;
			}
		}
		if(arr[i][j]=='\0'){
			flag++;
			k++;
			if(flag==2)
				{
					printf("The distance between them is %d",i-starting_dist);	
					return;
				}
			else{
				starting_dist=i;
			}
		}
	}
}
void is_user_registerd(){
	char list_of_students[5][20]={{"batman"},{"batman2"},{"batty"},{"batman-3"},{"bataman-4"}};
	printf("Enter Your name \n");
	char name[20];
	fgets(name,20,stdin);
	int i,j,flag=0;
	for(i=0;i<5;i++){
		for(j=0;list_of_students[i][j];j++){
			if(list_of_students[i][j]!=name[j]){
				break;
			}
		}
		if(!(list_of_students[i][j])){
			flag=1;
			break;
		}
	}
	// Showing factorial if its registerd
	if(flag){
		printf("Enter a no \n");
		int no;
		scanf("%d",&no);
		printf("factorial %d \n",factorial(no));
		// the reason why its not giving the proper factorial of bigger no cause the int type data consume 4 bytes of memory only 
		return ;
	}
	printf("You're not registered make sure you're not a bot \n");	
}
int factorial(no){
	if(no>1){
		return no*factorial(no-1);
	}
	return 1;
}

void authentication_system(){
	char data_base_names[5][20]={{"robin"},{"batman"},{"shakira"},{"akon"},{"tylorsift"}};
	char data_base_passwords[5][20]={{"12345"},{"87734"},{"234355"},{"4543543"},{"9324823"}};
	int n,i,j;
	int flag=0;
	char username[20];
	char pass[20];

	while(1){
		if(flag==0){
		printf("1.To Login 2.Logout 3.Exit\n");
		}
		else{
			printf("2.Logout 3.Exit\n");
		}
		scanf("%d",&n);
		if(n==1){
			if(flag<1){
			printf("Enter Your Username \n");
			scanf("%s",username);			
			for(i=0;i<5;i++){
				for(j=0;data_base_names[i][j];j++){
					if(data_base_names[i][j]!=username[j]){
						break;
					}
				
				}
					if(!(data_base_names[i][j])){
						flag=1;
						break;
					}
			}
			if(flag){
				printf("Enter you password \n");
				scanf("%s",pass);
					//checking password
				for(i=0;i<5;i++){
					for(j=0;data_base_passwords[i][j];j++){
					if(data_base_passwords[i][j]!=pass[j]){
						break;
					}
				
				}
					if(!(data_base_passwords[i][j])){
						flag=2;
						break;
					}
	
			}
			if(flag==2){
				printf("Login successfully \n");
			}
			else{
				printf("Password incorrect \n");
				flag=0;
			}
				}
			else{
			printf("No username found with this name \n");
		}
			}

		}
		else if(n==2){
			if(flag!=0){
				flag=0;
				printf("Logout successfully \n");
			}
		}
		else{
			break;
		}
	}
}
int main(){
	//@1-
	//count_the_vowels();
	//@2-
	//sort_city_names();
	//@3-
	//read_and_display();	
	//@4-
	//search_the_string();
	//@5-
	//Email_address();
	//@6-
	//palindrome_or_not();
	//@7-
	//valid_ip();
	//
	//@8-
	//minimum_distance();
	//@9-
	//is_user_registerd();
	//@10-
	authentication_system();
	return 0;

}
