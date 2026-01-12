#include <stdio.h>

int main(){
	int i,j,a,b;
	scanf("%d %d",&a,&b);
	int A[a][b];
	for (i=0;i<a;i++){
		for (j=0;j<b;j++){
			scanf("%d",&A[i][j]);
		}
	}
	for (i=0;i<a;i++){
		for (j=0;j<b;j++){
			printf("%d ",A[i][j]+1);
		}
		printf("\n");
	}
	return 0;
}
