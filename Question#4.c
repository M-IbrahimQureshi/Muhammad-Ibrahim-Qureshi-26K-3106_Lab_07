# include <stdio.h>
int main(){
	// Declaring and Populating Array
	int Marks[4][2];
	int i,j,Total;
	Total = 0;
	for(i=0; i<4; i++){
		for(j=0; j<2; j++){
			printf("Enter Marks Student %d: Marks[%d][%d]--> ", i+1,i,j);
			scanf("%d", &Marks[i][j]);
		}
	}
	// Displaying Total Marks of Each Student
	for(i=0; i<4; i++){
			Total = 0;
			Total = Marks[i][0] + Marks[i][1];
			printf("Total of Student %d = %d\n",i+1,Total);
			
		}
	// Highest Marks
	int MaxMid = -999;
	int MaxFinal = -999;
	int MaxTotal = -999;

	for(i=0; i<4; i++){
		Total = 0;
		Total = Marks[i][0] + Marks[i][1];
		if(Marks[i][0] > MaxMid)
			MaxMid = Marks[i][0];
		if(Marks[i][1] > MaxFinal)
			MaxFinal = Marks[i][1];
		if(Total > MaxTotal)
			MaxTotal = Total;
			 
		}
	printf("Highest Marks in Mid = %d\n", MaxMid);
	printf("Highest Marks in Final = %d\n", MaxFinal);
	printf("Highest Total Marks = %d\n", MaxTotal);
	
	// Lowest Marks
	int MinMid = 1000;
	int MinFinal = 1000;
	int MinTotal = 1000;
	for(i=0; i<4; i++){
		Total = 0;
		Total = Marks[i][0] + Marks[i][1];
		if(Marks[i][0] < MinMid)
			MinMid = Marks[i][0];
		if(Marks[i][1] < MinFinal)
			MinFinal = Marks[i][1];
		if(Total < MinTotal)
			MinTotal = Total;
	}
	printf("Lowest Marks in Mid = %d\n", MinMid);
	printf("Lowest Marks in Final = %d\n", MinFinal);
	printf("lowest Total Marks = %d", MinTotal);
	
	// Average of Mid and Final
	int TotalMid = 0;
	int TotalFinal = 0;
	float AvgFinal, AvgMid;
	for(i=0; i<4; i++){
		TotalMid = TotalMid + Marks[i][0];
		TotalFinal = TotalFinal + Marks[i][1];
	}
	AvgMid = TotalMid/4.0;
	AvgFinal = TotalFinal/4.0;
	printf("Average of Mid = %.2f\n", AvgMid);
	printf("Average of Final = %.2f\n", AvgFinal);
		

}
	
