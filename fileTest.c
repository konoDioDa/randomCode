#include <stdio.h>

int writeOut () {

	FILE *fp;
	char str[] = "Here is some text like...\n";

	fp = fopen("file.txt", "a");
	fwrite(str, 1, sizeof(str), fp);

	fclose(fp);

	return(0);

}

int promptInput () {

	char *input[80];
	char confirmation[0];
	printf("Please input a string: ");
	scanf("%s", input);
	printf("You entered %s. Is that correct? Y/N?", input);
	scanf("%s", confirmation);
	int i;
	if (confirmation[0] == 'y') {
		printf("You answered Yes!\n");
	} else if (confirmation[0] == 'n') {
		printf("You answered No!\n");
	} else {
		printf("Invalid answer\n");
	}
		}

int main(int argc, char *argv[]) {

	promptInput();

}

//int main(int argc, char *argv[]) {
//	char *input[80];
//	printf("Please input a string: ");
//	scanf("%s", input);
//	printf("Your input was: %s\n", input);
//}
