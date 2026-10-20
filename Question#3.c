# include <stdio.h>
int main(){
    // Inputing 2 3x3 Matrices
    int Matrix1[3][3];
    int Matrix2[3][3];
    int i,x;
    for( i=0; i<3; i++){
        for( x=0; x<3; x++){
            printf("Enter Element at Matrix1[%d][%d]: ",i,x);
            scanf("%d", &Matrix1[i][x]);
            printf("Enter Element at Matrix2[%d][%d]: ",i,x);
            scanf("%d", &Matrix2[i][x]);
        }
        }
    // Adding Two Matrices
    int Matrix3[3][3];
        for( i=0; i<3; i++){
        	for( x=0; x<3; x++){
        		Matrix3[i][x] = Matrix1[i][x] + Matrix2[i][x];
        }
    }
    // Printing All Matrices
    	printf("\n~~Matrix1~~\n");
        for( i=0; i<3; i++){
        	for( x=0; x<3; x++){
        		printf("\t%d", Matrix1[i][x]);
        	
        }
        printf("\n");
    }
        printf("\n~~Matrix2~~\n");
        for( i=0; i<3; i++){
        	for( x=0; x<3; x++){
        		printf("\t%d", Matrix2[i][x]);
        	
        }
        printf("\n");
    }
        printf("\n~~Matrix3~~\n");
        for( i=0; i<3; i++){
        	for( x=0; x<3; x++){
        		printf("\t%d", Matrix3[i][x]);
        	
        }
        printf("\n");
    }
    
        
    }
    

