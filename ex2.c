/******************
Name:Maya Mattar
ID:213510407
Assignment: ex2
*******************/

#include <stdio.h>

int main() {
	// Case 1: Draw Happy Face with given symbols for eyes, nose and mouse
        int option, num, number;
	do {
		printf("Choose an option:\n");
		printf("\t1. Happy Face\n");
		printf("\t2. Balanced Number\n");
		printf("\t3. Generous Number\n");
		printf("\t4. Circle Of Joy\n");
		printf("\t5. Happy Numbers\n");
		printf("\t6. Festival Of Laughter\n");
		printf("\t7. Exit\n");

		scanf("%d", &option);

		switch (option) {
			case 1:
				printf("Enter symbols for the eyes, nose, and mouth: \n");
				char eye, nose, mouth;
				int faceSize;
				scanf(" %c", &eye);
				scanf(" %c", &nose);
				scanf(" %c", &mouth);

				printf("Enter face zize: \n");
				scanf("%d", &faceSize);

				while (faceSize <= 0 || faceSize % 2 == 0) {
					printf("The face's size must be an odd and positive number, please try again:\n");
					scanf("%d", &faceSize);
				}
				// Print the eyes
				printf("%c", eye);
				for (int i = 0; i < faceSize; i++) {
					printf(" ");
				}
				printf("%c\n", eye);

				// Nose
				for (int i = 0; i < (faceSize / 2) + 1; i++) {
					printf(" ");
				}
				printf("%c\n", nose);

				// Mouth
				printf("\\");
				for (int i = 0; i < faceSize; i++) {
					printf("%c", mouth);
				}
				printf("/\n");

				break;
			
					

	// Case 2: determine whether the sum of all digits to the left of the middle digit(s)
				
	// and the sum of all digits to the right of the middle digit(s) are equal
	

	// Case 3: determine whether the sum of the proper divisors (od an integer) is greater than the number itself
	/* Examples:
	Abudant: 12, 20, 24
	Not Abudant: 3, 7, 10
	Please notice: the number has to be bigger than 0.
	*/

	// Case 4: determine wether a number is a prime.
	/* Examples:
	This one brings joy: 3, 5, 11
	This one does not bring joy: 15, 8, 99
	Please notice: the number has to be bigger than 0.
	*/
    

	// Happy numbers: Print all the happy numbers between 1 to the given number.
	// Happy number is a number which eventually reaches 1 when replaced by the sum of the square of each digit
	/* Examples:
	Happy :) : 7, 10
	Not Happy :( : 5, 9
	Please notice: the number has to be bigger than 0.
	*/

	// Festival of Laughter: Prints all the numbers between 1 the given number:
	// and replace with "Smile!" every number that divided by the given smile number
	// and replace with "Cheer!" every number that divided by the given cheer number
	// and replace with "Festival!" every number that divided by both of them
	/* Example:
	6, smile: 2, cheer: 3 : 1, Smile!, Cheer!, Smile!, 5, Festival!
	*/
	return 0;
}
