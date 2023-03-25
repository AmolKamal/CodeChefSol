// This code is given by ~ Amol Kamal

#include <stdio.h>
int lead(int x,int y){
    if(x>y)
        return x-y;
    else 
        return y-x;
}

int main(void) {
	// your code goes here
	int N,temp;
	scanf("%d",&N);
	
    int p1[N],p2[N];
    
    for(int i=0;i<N;i++){
        scanf("%d %d",&p1[i],&p2[i]);
    }
    for(int i=1;i<N;i++){
        p1[i] = p1[i]+p1[i-1];
        p2[i] = p2[i]+p2[i-1];
    }
    temp = 0;
    for(int i=0;i<N;i++){
        if(lead(p1[i],p2[i]) > lead(p1[temp],p2[temp]))
            temp =i;
    }
    
    if(p1[temp]>p2[temp])
        printf("1 %d",lead(p1[temp],p2[temp]));
    else
        printf("2 %d",lead(p1[temp],p2[temp]));
    
	return 0;
}

