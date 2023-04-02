#include <stdio.h>

int main(void) {
	// your code goes here
	int t,price[26];
	scanf("%d",&t);
	while(t--){
	    int total =0;
	    for(int i=0;i<26;i++){
	        scanf("%d",&price[i]);
	    }
	    char str[50000];
	    int gstr[26]={0};
	    scanf("%s",str);
	    for(int i=0;str[i]!='\0';i++){
	        gstr[str[i]-'a']++;
	    }
	    for(int i=0;i<26;i++){
	        if(gstr[i] == 0){
	            total = total +price[i];
	        }
	    }
	    
	    printf("\n%d",total);
	}
	return 0;
}

