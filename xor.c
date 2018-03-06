/*
   Simple tool that will quickly xor stdin from a pipe with a string
   passed through an argument

   Usage: (data/command output) | xor (string to xor)

   Author: @CuPcakeN1njA

   Make sure to run ./setup.sh first!
*/

#include <stdio.h>
#include <string.h>
#include <stdio.h>

/* Usage */
void usage(char **argv){
	printf("Usage: (data/command output) | %s (string to xor)\n", argv[0]);
}

/* Checks the correct arguments have been passed */
int checkArgs(int argc, char **argv){
	if (argc != 2){
		usage(argv);
		return 1;
	}
	else{
		return 0;
	}
}

/* xor the input and password given */
void xor(char *pass, char *buf){
	char final[BUFSIZ];
	unsigned int character;
	unsigned int pos = 0;
	for(int i = 0; i < strlen(buf); i++){
		character = buf[i] ^ pass[pos];
		if(character == 0){
			character = buf[i];
		}
		final[i] = character;
		pos++;
		if (pos == strlen(pass)){
			pos = 0;
		}
	}
	printf("%s\n", final);
}

/* Run the program */
int main(int argc, char **argv){
	if(checkArgs(argc, argv) == 0){
		char buf[BUFSIZ];
		char input[BUFSIZ];
		char *pass = argv[1];
		while(fgets(buf, sizeof(buf), stdin)){
			strcat(input, buf);
		}
		xor(pass, input);
		return 0;
	}
	else{
		return 0;
	}
}
