// This code is given by ~ Amol Kamal

#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,o1,o2;
	scanf("%d",&t);
	
	while(t--){
	   scanf("%d",&n);
	   
	   char s[n+1],r[n+1];
	   scanf("%s %s",s,r);
	   
	   o1=0;
	   o2=0;
	   
	   for(int i=0;i<n;i++){
	       if(s[i] == '0')
	        o1++;
	       
	       if(r[i] == '0')
	        o2++;
	   }
	   if(o1 == o2)
	    printf("\nYES");
	   else
	    printf("\nNO");
	   
	}
	
	return 0;
}

