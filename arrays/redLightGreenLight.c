//This code is given by ~ Amol Kamal

#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,k,count;
	scanf("%d",&t);
	
	while(t--){
	    scanf("%d %d",&n,&k);
	    
    	int ht[n];
    	count=0;
    	
    	for(int i=0;i<n;i++){
    	    scanf("%d",&ht[i]);
    	    if(ht[i]>k)
    	        count++;
    	}
    	
    	printf("\n%d",count);
	}
	return 0;
}

