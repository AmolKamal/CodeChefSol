// This code is given by ~ Amol Kamal

#include <stdio.h>

int main(void) {
	// your code goes here
	int t,count;
	scanf("%d",&t);
	
	while(t--){
	    count=0;
	    int n;
	    scanf("%d",&n);
	    
	    int ar[n];
	    for(int i =0;i<n;i++){
	        scanf("%d",&ar[i]);
	    }
	    
	    for(int i=0;i<n;i++){
	        if(ar[i]>=1000)
	            count++;
	    }
	    printf("\n%d",count);
	}

	return 0;
}

