// This code is given by ~ Amol Kamal


#include <stdio.h>
#include <string.h>

int main(void) {
	// your code goes here
	int t,n,l;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&n);
	    
	    char cc[n][9];
	    for(int i=0;i<n;i++){
	        scanf("%s",&cc[i]);
	    }
	    
	    l=0;
	    
	    for(int i=0;i<n;i++){
	        if(strcmp(cc[i],"LTIME108")==0)
	            l++;
	    }
	    printf("\n%d %d",n-l,l);
	    
	}
	
	return 0;
}

