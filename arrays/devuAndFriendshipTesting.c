// This code is given by ~ Amol Kamal


#include <stdio.h>
int check(int k,int a[k],int l){
    for(int i=0;i<k;i++){
        if(l==a[i])
            return 1;
    }
    return 0;
}

int main(void) {
	// your code goes here
	int t,n,l,tp;
	scanf("%d",&t);
	
	while(t--){
	    scanf("%d",&n);
	    int pt[n];
	    
	    for(int i=0;i<n;i++){
	        scanf("%d",&pt[i]);
	    }
	    
	    tp=0;
	    int buff[n];
	    l=0;
	    
	    for(int i=0;i<n;i++){
	        if(check(l,buff,pt[i])==0){
	            tp++;
	            buff[l] = pt[i];
	            l++;
	        }
	       
	    }
	    printf("\n%d",tp);
	}
	return 0;
}

