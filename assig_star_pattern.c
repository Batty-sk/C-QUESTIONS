#include<stdio.h>
void star_pattern_1()
{
	int i;
	int j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(j>i){
				printf(" ");
			}
			else{
				printf("*");
			}
		}
		printf("\n");
	}
}
void star_pattern_2()
{
	int i;
	int j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(j<4-i){
				printf(" ");
			}
			else{
				printf("*");
			}
		}
		printf("\n");
	}
}
void star_pattern_3()
{
	int i;
	int j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(j<5-i){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
void star_pattern_4()
{
	int i;
	int j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(j>=i){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}	
}
void star_pattern_5(){
	int i;
	int j;
	for(i=0;i<5;i++){
		for(j=0;j<9;j++){
			if(j>=9/2-i && j<=9/2+i){ // *** *** ***
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
void star_pattern_6(){
	int i;
	int j;
	for(i=0;i<5;i++){
		for(j=0;j<9;j++){
			if(j>=i && j<9-i){ // *** *** ***
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
void star_pattern_7()
{
	int i;
	int j;
	for(i=0;i<5;i++){
		for(j=0;j<10;j++){
			if(j>=10/2-i && j<10/2+i){ //  7>=3 and <7  '  '
				printf(" ");
			}
			else{
				printf("*");
			}
		}
		printf("\n");
	}
}
void star_pattern_8(){
	int i;
	int j;
	int k=1;
	for(i=0;i<4;i++){
		for(j=0;j<7;j++){
			if(j>=7/2-i && j<=7/2+i){// 3-1=3  3+1=4  
				if(j<7/2){//2<3
					printf("%d",k);
					k++;
				}
				else{
					printf("%d",k);//2 1
					k--;//1
				}
			}
			else{
				printf(" ");
			}
		}
		k=1;
		printf("\n");
	}
}
void star_pattern_9(){
	int i;
	int j;
	int k=1;
	for(i=0;i<4;i++){
		for(j=0;j<7;j++){
			if(j>=i && j<7-i){// 3-1=3  3+1=4  
				if(j<7/2){//2<3
					printf("%d",k);
					k++;
				}
				else{
					printf("%d",k);//2 1
					k--;//1
				}
			}
			else{
				printf(" ");
			}
		}
		k=1;
		printf("\n");
	}
}
void star_pattern_10(){
	int i;
	int j;
	int k=1;
	for(i=0;i<4;i++){
		for(j=0;j<7;j++){
			if(j>7/2-i && j<7/2+i){// 3-1>2  2<4  
				printf(" ");
		}
			else{
				printf("%d",k);
				}
			if(j<7/2)
				{//6<=3
			// 1 2 3 4
				k++; 
						//3
				}
			else{//1
				// 3 2 1
				k--;
					//1
				}
										
		}
		k=1;
		printf("\n");
	}	
}
void star_pattern_11(){
	int i;
	int j;
	int k=65;
	for(i=0;i<5;i++){
		for(j=0;j<9;j++){
			if(j>=9/2-i && j<=9/2+i){// 3-1=3  3+1=4  
				if(j<9/2){//2<3
					printf("%c",k);
					k++;
				}
				else{
					printf("%c",k);//2 1
					k--;//1
				}
			}
			else{
				printf(" ");
			}
		}
		k=65;
		printf("\n");
}
}
void star_pattern_12()
{
	int i;
	int j;
	int k=65;
	for(i=0;i<4;i++){
		for(j=0;j<7;j++){
			if(j>=i && j<7-i){// 3-1=3  3+1=4  
				if(j<7/2){//2<3
					printf("%c",k);
					k++;
				}
				else{
					printf("%c",k);//2 1
					k--;//1
				}
			}
			else{
				printf(" ");
			}
		}
		k=65;
		printf("\n");
	}	
}
void star_pattern_13(){
	int i;
	int j;
	int k=65;
	for(i=0;i<7;i++){
		for(j=0;j<13;j++){
			if(j>13/2-i && j<13/2+i){// 5  7  
				printf(" ");
		}
			else{
				printf("%c",k);
				}
			if(j<13/2)
				{//6<=3
			// 1 2 3 4
				k++; 
						//3
				}
			else{//1
				// 3 2 1
				k--;
					//1
				}
										
		}
		k=65;
		printf("\n");
	}	
}
void star_pattern_14(){
	int i;
	int j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i!=4){
				if(j==0 || j==i){
					printf("*");
					}
				else{
					printf(" ");
					}
			}
			else{
				printf("*");
			}
			
	}
		printf("\n");
	}
}

void star_pattern_15(){
	int i;
	int j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i!=4){
				if(j==4-i || j==4){
					printf("*");
					}
				else{
					printf(" ");
					}
			}
			else{
				printf("*");
			}
			
	}
		printf("\n");
	}
}
void star_pattern_16(){
	int i;
	int j;
	for(i=0;i<5;i++){
		for(j=0;j<9;j++){
			if(i!=4){
				if(j==9/2-i || j==9/2+i){
					printf("*");
					}
				else{
					printf(" ");
					}
			}
			else{
				printf("*");
			}
			
	}
		printf("\n");
	}
	
}
void star_pattern_17(){
	int i;
	int j;
	for(i=0;i<5;i++){
		for(j=0;j<9;j++){
			if(i!=0){
				if(j==i || j==8-i){
					printf("*");
					}
				else{
					printf(" ");
					}
			}
			else{
				printf("*");
			}
			
	}
		printf("\n");
	}
}
void star_pattern_18(){
	int i;
	int j;
	int k=1;
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			if(i<=(9/2)){
				if(j>=9/2-i && j<=9/2+i){
					printf("*");
					}
				else{
					printf(" ");
					}
			}
			else{ 
				if(j>=k && j<(9-k)){
					printf("*");
				
				}
				else{
					printf(" ");
				}
			
			}
			
	}
		if(i>(9/2)){
			k++;
		}
		printf("\n");
	}
}
void star_pattern_19()
{
 	int i;
	int j;
	int k=3;
	for(i=0;i<13;i++,k--){
		for(j=0;j<19;j++){
			if(k>0){
				if(j>=k-1 && j<=19/2-k){//2>=2 F  2=<6 T 
					printf("*");
					}
				else if(j>=19/2+k && j<=19-k){//12>=12
					printf("*");
					}
				else{
					printf(" ");
				}
					}
			else{
				if(k==0){
					if(j==6){
						printf("MySirG");
						j+=5;
					}
					else{
						printf("*");
					}
				}
				else{
					if(j>=k*k-(k*(k+1)) && j<19+k)
						printf("*");
					else{
						printf(" ");
					}
				}
			}				
		}
		printf("\n");
	}	
}
int main(){//NOTe- sir if you are seeing this , please uncomment functions one-by-one to avoid khichdi 
	
//	star_pattern_1();
	//@2-
//	star_pattern_2();
  	//@3-
// 	star_pattern_3();						 
  	//@4-							
// 	star_pattern_4();
 	//@5-
// 	star_pattern_5();
    //@6-
//  star_pattern_6();
    //@7-
//  star_pattern_7();
	//@8-
//	star_pattern_8();
	//@9-
//	star_pattern_9();
	//@10-
//	star_pattern_10();	
	//@11-
//	star_pattern_11();
 	//@12-
//	star_pattern_12();
	//@13-
//	star_pattern_13();	
	//@14-
//	star_pattern_14();
	//@15-
//	star_pattern_15();
	//@16-
//	star_pattern_16();
	//@17-
//	star_pattern_17();
	//@18-
//	star_pattern_18();
	//@19-
	star_pattern_19();
//	printf("%d",-2*-2-(-2*(-2+1)));
	
}
