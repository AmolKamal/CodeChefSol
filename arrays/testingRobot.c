// This code is given by ~ Amol Kamal
#include <stdio.h>
int check(int n,int ar[n],int k){
    for(int i=0;i<n;i++){
        if(k==ar[i]){
            return 1;
        }
    }
    return 0;
}
//n+1 - |r-l|
int main(void) {
	// your code goes here
	int t,n,x;
	scanf("%d",&t);
	while(t--){
	    scanf("%d %d",&n,&x);
	    char str[n];
	    scanf("%s",str);
	    
	    int a[n+1],count=0;
	    a[0] = x;
	    for(int i=0;i<n;i++){
	        if(str[i] == 'L'){
	            x--;
	            a[i+1] = x;
	
	        }
	        else{
	            x++;
	            a[i+1] = x;
	        }
	    }
	    for(int i=0,j;i<n+1;i++){
	        for( j=0;j<n+1;j++){
	            if(a[i] == a[j]){
	                break;
	            }
	        }
	        if(i==j)
	            count++;
	    }
	    printf("\n%d",count);
	}
	
	return 0;
}

