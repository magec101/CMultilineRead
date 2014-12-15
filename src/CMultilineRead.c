#include <stdio.h>
#include <string.h>

void cMultilineReadMain(int argc, char** argv) {

		char first[50], second[100], third[100];
		
		//printf("Enter first name: ");
		scanf("%s", first);
		
		//printf("Enter second name: ");
		char ch;
        while ((ch = getchar()) != '\n' && ch != EOF);

        fgets(second, 80, stdin);

        int i = strlen(second)-1;
        if( second[i] == '\n')
        second[i] = '\0';
		
		printf("Hello %s %s", first, second);
	
}

#ifndef __CXX_TEST_MAIN__

int main(int argc, char** argv){
    cMultilineReadMain(argc, argv);
    return 0;
}

#endif