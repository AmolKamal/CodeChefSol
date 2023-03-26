// This code is given by ~ Amol Kamal

#include <stdio.h>

int main(void) {
	// your code goes here
	int count[10] = {6,2,5,5,4,5,6,3,7,6};
	
    int t,a,b,tc;
    scanf("%d",&t);
    
    while(t--){
        scanf("%d %d",&a,&b);
        tc =0;
        
        for(int i = a+b;i>0;i=i/10){
            tc = tc + count[i%10];
        }
        printf("\n%d",tc);
        
    }
    
	return 0;
}

