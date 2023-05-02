#include <stdio.h>

int main()
{
	int attck, hp = 30;

	printf("주인공의 공격력을 입력하세요: ");
	scanf("%d",&attck);
	printf("주인공은 공격력이 %d입니다\n",attck);
	hp -= attck;
	printf("주인공이 적을 공격하여 %d의 데미지를 입혔습니다.\n\n",attck);

	if(hp>0){
		printf("적의 잔여 HP : %d \n\n",hp);
		printf("적이 주인공을 공격하여 주인공이 죽고 말앗네요..\n");
		printf("Game Over!!!");

	}
	else{
		printf("적의 잔여 HP : 0\n\n");
		printf("적을 물리치는데 성공합니다다!!!.\n");
		printf("Happy End");
	}
	return 0;
}
