/*
1.	Write a program to construct the Pascal triangle with the given integer n.
Ex:
______________________________________
| Input: 3                           |
| Output:                            |
| 1                                  |
| 1 1                                |
| 1 2 1                              |
| 1 3 3 1                            |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex1(int n){
	//Your codes here
int i, arr[50][50];
	arr[0][0] = 0;
	arr[1][0] = 1;
	arr[2][0] = 0;
	for (int k=1; k<=n+1; k++)
	{	
		for (i=1; i<=k; i++){
			printf("%d ", arr[i][k-1]);
		}
		for (i=1; i<=k+1; i++){
			arr[i][k] = arr[i][k-1] + arr[i-1][k-1];
		}
		printf("\n");
	}
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	Ex1(testcase);
	return 0;
}
