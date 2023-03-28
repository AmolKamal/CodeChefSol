// This code is given by ~ Amol Kamal

#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,rev;
	scanf("%d",&t);
	while(t--){
	    rev=0;
	    scanf("%d",&n);
	    
	    for(int i=n;i!=0;i=i/10)
	    {
	        rev = (rev*10)+(i%10);
	    }
	    if(rev == n)
	        printf("\nwins");
	    else
	        printf("\nloses");
	}
	return 0;
}

