# include <stdio.h>
int main(){
	int i,j;
	for(i=1; i<6; i++){
		for(j=1; j<=i; j++){
			if(j%2 == 0)
				printf("\t0");
			else
				printf("\t1");
		}
		printf("\n");
	}
	
}
