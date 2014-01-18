#include <stdio.h>
#include <stdlib.h>

int main () {
	FILE *fp	= fopen("input.txt","r");
	FILE *fout	= fopen("output.txt","a+");
	if(fp == NULL || fout == NULL)
		return 0;

	int testCase;
	fscanf(fp,"%d",&testCase);

	int caseLoop = 0;
	for(;caseLoop < testCase; caseLoop++) {
		// basic conditions
		int dates;
		int minNumOfTeams;
		int i,j,k;
		float *lentCost = (float *) malloc (sizeof(float) * dates);

		fscanf(fp,"%d",&dates);
		fscanf(fp,"%d",&minNumOfTeams);
		for(i=0; i<dates; i++)
			fscanf(fp,"%f",&lentCost[i]);

		// problem solvation module
		float minCosts = -1;
		// i: # of teams
		for(i=minNumOfTeams; i<=dates; i++) {
			float sumCosts;
			float totalCosts;
			// j: start index
			for(j=0; j<= dates-i; j++) {
				sumCosts = 0;
				totalCosts = 0;
				// k: sum of start index to last index
				for(k=j; k<j+i; k++)
					sumCosts += lentCost[k];
				totalCosts = sumCosts/i;

				if(minCosts < 0)
					minCosts = totalCosts;
				else if(minCosts > totalCosts)
					minCosts = totalCosts;
			}
		}
		printf("%.7f\n",minCosts);
		fprintf(fout,"%.7f\n",minCosts);
		free(lentCost);
	}

	fclose(fp);
	fclose(fout);
	return 0;
}
