/******************
Name:Maya Mattar
ID:213510407
Assignment: ex2
*******************/

#include <stdio.h>

int main() {

       // Display the menu option for the user
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
       // Read the user's option
		scanf("%d", &option);

		switch (option) {
			case 1:
				// Happy Face: Draw a face based on user input
				printf("Enter symbols for the eyes, nose, and mouth:\n");
				char eye, nose, mouth;
				int faceSize;

				// Read the symbols for the face
				scanf(" %c", &eye);
				scanf(" %c", &nose);
				scanf(" %c", &mouth);

				// Read the face size and validate it's a positive odd number
				printf("Enter face size:\n");
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

				// Print the nose
				for (int i = 0; i < (faceSize / 2) + 1; i++) {
					printf(" ");
				}
				printf("%c\n", nose);

				// Print the mouth
				printf("\\");
				for (int i = 0; i < faceSize; i++) {
					printf("%c", mouth);
				}
				printf("/\n");

				break;
			

			case 2:
				// Balanced Number: Check if the number's left and right halves are balanced
				printf("Enter a number:\n");
				int is_balanced = 0, length = 0, right_sum = 0, left_sum = 0;
				
				// Read the number and validate it's positive
				scanf("%d", &number);
				while (number <= 0) {
					printf("Only positive number is allowed, please try again:\n");
					scanf("%d", &number); 
				}
				// Calculate the length of the number and split it into two halves
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

				// Print the appropriate message
				if (is_balanced) {
					printf("This number is balanced and brings harmony!\n");
				}
				else {
					printf("This number isn't balanced and destroys harmony.\n");
				}

				printf("\n");
				break;


			case 3:
				// Generous Number: Check if the sum of proper divisors is greater than the number
				printf("Enter a number:\n");
				int d_sum = 0;

				// Read the number and validate it's positive
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

				// Check if the number is generous
				if (d_sum > number) {
					printf("This number is generous!\n");
				}
				else {
					printf("This number does not share.\n");
				}
				printf("\n");
				break;
			
	
			case 4:
				// Circle of Joy: Check if a number and its reverse are both prime
				printf("Enter a number:\n");
				int is_prime = 1;
				
				// Read the number and validate it's positive
				scanf("%d", &number);
				while (number <= 0) {
					printf("Only positive number is allowed, please try again:\n");
					scanf("%d", &number);
				}
				// Check if the number is prime
				for (int i = 2; i * i <= number; i++)
					{
						if (number % i == 0)
							is_prime = 0;
					}
				// Print the result
				if (is_prime == 1 && number != 1) {
					printf("This number completes the circle of joy!\n");
				}
				else {
					printf("The circle remains incomplete.\n");
				}

				printf("\n");
				break;

			
			case 5:
				// Happy Numbers: Print all happy numbers up to the given number
				printf("Enter a number:\n");
				scanf("%d", &number);
				while (number <= 0) {
					printf("Only positive number is allowed, please try again:\n");
					scanf("%d", &number);
				}
				// Chech for happy numbers
				int sum_of_squares, num_copy, d, flag;
				printf("Between 1 and %d only these numbers bring happiness: ", number);
				for (int i = 1; i < number; i++) {
					flag = 0;
					num_copy = i;

					// Iteratively calculate the sum of squares
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
						printf(" %d", i);
					}
				}
				printf("\n");
				break;
				

			case 6:
				// Festival of Laughter: Replace numbers with festival strings based on divisibility
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
				
				// Read and validate the maximum number for festival
				printf("Enter maximum number for the festival:\n");
				while (!(scanf("%d", &n) == 1 && n > 0)) {
					printf("Only positive maximum number is allowed, please try again:\n");
				}
				
				// Print numbers or replace them with the aprropriate strings
				for (int i = 1; i <= n; i++) {
					if (i % smileNumber == 0 && i % cheerNumber == 0) {
						printf("Festival! \n");
					}
					else if (i % smileNumber == 0) {
						printf("Smile! \n");
					}
					else if (i % cheerNumber == 0) {
						printf("Cheer! \n");
					}
					else {
						printf("%d\n ", i);
					}
				}
				        printf("\n");
					break;

					case 7:
						// Exit the program
						printf("Thank you for your journey through Numeria!\n");
						break;
					default:
						// Handle invalid menu options
						printf("This option is not available, please try again.\n");
						break;
				}
		} while (option != 7);  // Repeat until the user selects Exit
		
	return 0;
}
