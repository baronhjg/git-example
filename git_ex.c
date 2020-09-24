// Git_ex: A Guessing number game
// Jorge
// Date: 2020/09/24

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int r, guess;
	int chance;

	srand(time(NULL));
	
	r = (rand() % 100) + 1;
	
	printf("Input your chances: ");
	scanf("%d", &chance);
	
	printf("Guess a number: ");
	scanf("%d", &guess);
	
	while (chance > 0) {
		if (guess == r) {
			printf("Congratuation!!! YOU WIN\n");
			chance = 0;
		} else {
		//	printf("Sorry you are wrong.\nYour ans: %d. Correct number: %d.\n", guess, r);
			chance--;
			if (guess > r) printf("-----Too large-----\n");
			else printf("-----Too small-----\n");
			
			if (chance > 0) {
				printf("Try again... Chance last: %d\n", chance);
				scanf("%d", &guess);
			}
		}
	}
	
	return 0;
}
