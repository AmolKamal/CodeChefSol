//This code is given by ~ Amol Kamal

#include <stdio.h>

int main(void) {
	// your code goes here
	int t,l,r,count;
	scanf("%d",&t);
	while(t--){
	    scanf("%d %d",&l,&r);
	    
	    count=0;
	    
	    for(int i=l;i<=r;i++){
	        if((i%10 == 2)||(i%10 == 3)||(i%10 == 9))
	            count++;
	    }
	    printf("\n%d",count);
	}
	return 0;
}

