// This code is given by ~ Amol Kamal

// Solved using sliding window method

#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,k,temp,ngirls;
	scanf("%d",&t);
	while(t--){
	    scanf("%d %d",&n,&k);
	    
	    int gl[n];
	    
	    for(int i=0;i<n;i++)
	        scanf("%d",&gl[i]);
	    
	    temp=0;
	        
	    for(int i=0;i<k;i++){
	        temp = temp+gl[i];
	    }
	    ngirls = temp;
	    
	    for(int i= k;i<n;i++){
	        temp = temp +gl[i] - gl[i-k];
	        if(temp>ngirls)
	            ngirls = temp;
	    }
	    
	    printf("\n%d",ngirls);
	    
	    
	}
	return 0;
}

