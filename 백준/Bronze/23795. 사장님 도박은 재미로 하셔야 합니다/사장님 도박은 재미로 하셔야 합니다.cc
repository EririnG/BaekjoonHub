#include <stdio.h>
int main(){
	int a;
	int i;
	long long sum = 0;
	
	while(a!=-1){
		scanf("%d",&a);
		
		sum += a;
	}
	printf("%d",sum+1);
	
}