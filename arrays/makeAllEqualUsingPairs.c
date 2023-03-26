// This code is given by ~ Amol Kamal

#include <stdio.h>

int count(int n, int ar[n]){
    int ct[n],temp;
    
    
    for(int i=0;i<n;i++){
        temp=0;
        for(int j=0;j<n;j++){
            if(ar[i] != ar[j])
                temp++;
        }
        ct[i] = temp;
    }
    
    temp = ct[0];
    for(int i=0;i<n;i++){
        if(temp>ct[i])
            temp = ct[i];
    }
    
    return temp;
    
}

int main(void) {
	// your code goes here
	int n,t;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&n);
	    
	    int ar[n];
	    for(int i=0;i<n;i++)
	        scanf("%d",&ar[i]);
	   
	    int m = count(n, ar);
	    
	    printf("\n%d",m);
	        
	}
	return 0;
}

