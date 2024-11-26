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
				printf("Enter symbols for the eyes, nose, and mouth:\n");
				char eye, nose, mouth;
				int faceSize;
				scanf(" %c", &eye);
				scanf(" %c", &nose);
				scanf(" %c", &mouth);

				printf("Enter face zize:\n");
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
			case 2:
				printf("Enter a number:\n");
				int is_balanced = 0, length = 0, right_sum = 0, left_sum = 0;
				scanf("%d", &number);
				while (number <= 0) {
					printf("Only positive number is allowed, please try again:\n");
					scanf("%d", &number); 
				}
				num = number;
				while (num > 0)
					{
						length++;
						num /= 10;
					}
				num = number;
				if (length == 1) {
					is_balanced = 1;
				}
				else {
					for (int i = 0; i < length / 2; i++)
						{
							right_sum += num % 10;
							num /= 10;
						}
					if (length % 2 == 1)
						num /= 10;
					for (int i = 0; i < length / 2; i++)
						{
							left_sum += num % 10;
							num /= 10;
						}
					if (left_sum == right_sum)
						is_balanced = 1;
				}
				if (is_balanced) {
					printf("The number is balanced and brings harmony!\n");
				}
				else {
					printf("This number isn't balanced and destroys harmony.\n");
				}

				break;
				

	// Case 3: determine whether the sum of the proper divisors (of an integer) is greater than the number itself
			case 3:
				printf("Enter a number:\n");
				int d_sum = 0;
				scanf("%d", &number);
				while (number <= 0) {
					printf("Only positive number is allowed, please try again:\n");
					scanf("%d", &number);
				}
				for (int i = 1; i < (number / 2) + 1; i++) {
					if (number % i == 0) {
						d_sum += i;
					}
				}
				if (d_sum > number) {
					printf("This number is generous!\n");
				}
				else {
					printf("This number does not share.\n");
				}
				break;
			
	
        // Case 4: determine wether a number is a prime.
			case 4:
				printf("Enter a number:\n");
				int is_prime = 1;
				scanf("%d", &number);
				while (number <= 0) {
					printf("Only positive number is allowed, please try again:\n");
					scanf("%d", &number);
				}
				for (int i = 2; i * i <= number; i++)
					{
						if (number % i == 0)
							is_prime = 0;
					}
				if (is_prime == 1 && number != 1) {
					printf("This number completes the circle of joy!\n");
				}
				else {
					printf("The circle remains incomplete.\n");
				}

				break;


	// Happy numbers: Print all the happy numbers between 1 to the given number.
			case 5:
				printf("Enter a number:\n");
				scanf("%d", &number);
				while (number <= 0) {
					printf("Only positive number is allowed, please try again:\n");
					scanf("%d", &number);
				}
	// Happy number is a number which eventually reaches 1 when replaced by the sum of the square of each digit			
				int sum_of_squares, num_copy, d, flag;
				printf("Between 1 and %d only these numbers bring happiness:", number);
				for (int i = 1; i < number; i++) {
					flag = 0;
					num_copy = i;

					for (int j = 0; j <= 8; j++) {
						sum_of_squares = 0;
						while (num_copy > 0) {
							d = num_copy % 10;
							sum_of_squares += (d * d);
							num_copy /= 10;
						}
						if (sum_of_squares == 1) {
							flag = 1;
						}
						num_copy = sum_of_squares;
					}
					if (flag) {
						printf("%d", i);
					}
				}
				printf("\n");
				break;
				

				
	// Festival of Laughter: Replace numbers with festival strings based on divisibility
			case 6:
				printf("Enter a smile and cheer number:\n");
				int smileNumber, cheerNumber, n, check = 0;
                               // Validate input format for smile and cheer numbers
				do {
					if (scanf(" smile: %d, cheer: %d", &smileNumber, &cheerNumber) == 2 && cheerNumber != smileNumber) {
						check = 1; 
					}
					else {
						printf("Only 2 different positive numbers in the given format are allowed for the festival, please try again:\n");
						scanf("%*[^\n]");
					}
				} 
					while (check == 0);
				printf("Enter maximum number for the festival:\n");
				while (!(scanf("%d", 
	// and replace with "Smile!" every number that divided by the given smile number
	// and replace with "Cheer!" every number that divided by the given cheer number
	// and replace with "Festival!" every number that divided by both of them
	/* Example:
	6, smile: 2, cheer: 3 : 1, Smile!, Cheer!, Smile!, 5, Festival!
	*/
	return 0;
}
