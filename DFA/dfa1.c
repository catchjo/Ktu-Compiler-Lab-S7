//evan number of 'b' odd number of 'a'

#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool isAccepted(char buffer[]){
	int current_state = 0, i;
	
	for(i=0;i<buffer[i] != '\0';i++){
		
		if(buffer[i]=='a'){
			if(current_state==0){
				current_state=1;
			}
			else if(current_state==1){
				current_state=0;
			}
			else if(current_state==2){
				current_state=3;
			}
			else if(current_state==3){
				current_state=2;
			}
		}
		
		if(buffer[i]=='b'){
			if(current_state==0){
				current_state=2;
			}
			else if(current_state==2){
				current_state=0;
			}
			else if(current_state==1){
				current_state=3;
			}
			else if(current_state==3){
				current_state=1;
			}
		}
		
	}
	if(current_state==1){
		return true;
	}else{
		return false;
	}
}

void main(){
	char buffer[255];
	
	printf("Enter the string\n");
	scanf("%s",buffer);
	
	if(isAccepted(buffer)){
		printf("%s is accepted \n",buffer);
	}else{
		printf("%s is not accepted \n",buffer);
	}
}


