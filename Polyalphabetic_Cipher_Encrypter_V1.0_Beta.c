#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	char MESSAGE[1000];
    char ENCRYPTED_MESSAGE[1000];    
	char KEYWORD[1000];
    int i=0,j=0,k,l,key_size, message_size;
	printf("Enter the message IN LOWER CASE WITHOUT BLANK SPACE:");
	scanf("%s", MESSAGE);
	printf("Enter the keyword:");
	scanf("%s", KEYWORD);
    key_size= strlen(KEYWORD);
    message_size= strlen(MESSAGE);
    while(i+1<=message_size){
        if (j<=key_size){
            j=(j)%key_size;
        }
        else{
            j=(j)%key_size-1;
        }
        k=MESSAGE[i];
        l=KEYWORD[j];
        if(k + l - 'a' + 1> 'z'){
            k=k+(l-'a'+1)-26;
        }
        else{
            k=k+l-'a'+1;
        }
        ENCRYPTED_MESSAGE[i]=k;
        i++;
        j++; 
    }
    printf("The encrypted message is:%s\n",ENCRYPTED_MESSAGE);
	return 0;
}