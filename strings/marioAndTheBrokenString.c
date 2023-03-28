// This code is given by ~ Amol Kamal
#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,check;
	scanf("%d",&t);
	while(t--){
	   scanf("%d",&n);
	   char str[n+1];
	   scanf("%s",str);
	   check =0;
	   for(int i=0;i<n/2;i++){
	       if(str[i] != str[i + n/2])
	            check =1;
	   }
	   if(check == 0 ){
	       printf("\nYES");
	   }
	   else
	        printf("\nNO");
	}
	
	return 0;
}

