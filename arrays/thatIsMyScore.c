
#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,score;
	scanf("%d",&t);
	while(t--){
	  scanf("%d",&n);
	  int finScore[11]={0};
	  int overall[n][2];
	  score =0;
	  
	  for(int i=0;i<n;i++){
	      scanf("%d %d",&overall[i][0],&overall[i][1]);
	  }
	  
	  for(int i=0;i<n;i++){
	      if(finScore[overall[i][0]-1]<overall[i][1])
	         finScore[overall[i][0]-1] =  overall[i][1];
	  }
	  
	  for(int i=0;i<8;i++){
	    score = score + finScore[i];
	  }
	    
	  printf("\n%d",score);
	}
	return 0;
}

