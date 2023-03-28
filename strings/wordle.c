// This code is given by ~ Amol Kamal

#include <stdio.h>

int main(void) {
	// your code goes here
	int te;
	char s[6],t[6],m[6];
	scanf("%d",&te);
	while(te--){
	    scanf("%s",s);
	    scanf("%s",t);
	    
	    for(int i=0;i<5;i++){
	        if(s[i] == t[i])
	            m[i] = 'G';
	        else
	            m[i] = 'B';
	    }
	    printf("\n%s",m);
	}
	return 0;
}

