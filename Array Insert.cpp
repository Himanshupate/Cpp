#include <iostream>
 
using namespace std;
 
int main() {
	int i,N,Q,j,L,R,c,sum;
	scanf("%d %d",&N,&Q);
	int a[N];
	for(i=0;i<N;i++){
	    scanf("%d",&a[i]);
	}
	for(i=0;i<Q;i++){
	    scanf("%d %d %d",&c,&L,&R);
    		if(c == 1){
    	            a[L] = R; 
    	    }
    	
    	    if(c== 2){
    	        
    	        if(L>=0 && R<N){
    	             sum =0;
    	        for(j = L;j<=R;j++){
    	            sum = sum + a[j];
    	            
    	        }
    	        printf("%d \n",sum);
    	        }
    	        else
    	            printf("-1");
    	    }
	
    }
	
}
