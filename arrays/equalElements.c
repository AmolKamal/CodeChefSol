//This code is given by ~ Amol Kamal

#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&n);
	    int ar[n];
	    int k[200000]={0};
	    
	    for(int i=0;i<n;i++)
	        scanf("%d",&ar[i]);
	        
	    for(int i=0;i<n;i++){
	        k[ar[i]]++;
	    }
	    int max = k[0];
	    for(int i=0;i<n;i++){
	        if(k[i]>max)
	            max = k[i];
	    }
	    printf("\n%d",n-max);
	   
	}
	return 0;
}

