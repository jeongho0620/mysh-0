#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "utils.h"

void mysh_parse_command(const char* command,
                        int *argc, char*** argv)
{
	char *new=(char*)malloc(sizeof(char));
	strcpy(new,command);
	char * a=strtok(new," \t\n");
	int count=0;
	int i=0;

	*argv=(char**)malloc(sizeof(char));
	**argv=(char*)malloc(sizeof(char));

	while(a!=NULL)
	{
		count++;
		*((*argv)+i)=(char*)malloc(sizeof(char));
		strcpy(*((*argv)+i),a);
		i++;
		printf("arguments : %s \n",a);
		a=strtok(NULL," ");
	}
	
	*argc=count;
	printf("numbe of arguments : %d \n",*argc);

	free(a);
  // TODO: Fill this!
}
