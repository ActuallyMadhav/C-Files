#include <stdio.h>
#include <string.h>

int main(){

	int num;
	scanf("%d", &num);
	getchar();

	char nums[1000];
	fgets(nums, sizeof(nums), stdin);

	nums[strcspn(nums, "\n")] = '\0';

	char lastDig = nums[strlen(nums)-1];

	if(lastDig == '0'){
		printf("Yes");
	}
	else{
		printf("No");
	}

	return 0;
}