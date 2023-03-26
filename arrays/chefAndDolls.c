// This code is given by ~ Amol Kamal

#include <stdio.h>

int count(int n, int arr[n],int k){
    int ct =0;
    for(int i=0;i<n;i++){
        if(arr[i] == k)
            ct++;
    }
    return ct;
}

int main(void) {
	// your code goes here
	int t,n,check;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&n);
	    
	    int doll[n];
	    for(int i=0;i<n;i++)
	        scanf("%d",&doll[i]);
	    
	    for(int i=0;i<n;i++){
	       if(count(n,doll,doll[i])%2 != 0){
	           printf("\n%d",doll[i]);
	           break;
	       }
	           
	    }
	    
	}
	return 0;
}

