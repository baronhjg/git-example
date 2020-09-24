// Guess number game
// Jorge
// Date: 2020/09/24

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int r, guess;
	srand(time(NULL));
	
	r = (rand() % 100) + 1;

	printf("Guess a number: ");
	scanf("%d", &guess);

	if (guess == r) printf("Congratuation!!! YOU WIN\n");
	else {
		printf("Sorry you are wrong.\nYour ans: %d. Correct number: %d.\n", guess, r);
		if (guess > r) printf("-----Too large-----\n");
		else printf("-----Too small-----\n");
	}

	return 0;
}

