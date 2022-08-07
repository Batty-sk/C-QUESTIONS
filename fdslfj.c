#include<stdio.h>
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
			fgets(username,20,stdin);
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
				fgets(pass,20,stdin);
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
			}
			else{
			printf("No username found with this name \n");
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
	authentication_system();
}
