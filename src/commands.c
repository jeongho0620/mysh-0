#include <stdio.h>
#include <string.h>
#include "unistd.h"
#include "commands.h"

int validate_cd_argv(int argc,char**argv);
int validate_pwd_argv(int argc,char**argv);

char buf[512];



int do_cd(int argc, char** argv) {  

	if (!validate_cd_argv(argc, argv))
    	return -1;

	chdir(argv[1]);
	return 0;
  // TODO: Fill it!
}

int do_pwd(int argc, char** argv) {
  if (!validate_pwd_argv(argc, argv))
    return -1;

  // TODO: Fill it!
	getcwd(buf,sizeof(buf));
	fprintf(stderr,"%s \n",buf);

  return 0;
}

int validate_cd_argv(int argc, char** argv) {
 

	if(argc==2 && strcmp(argv[0],"cd")==0)
	return 1;

	else
	return 0;
 // TODO: Fill it!
 
}

int validate_pwd_argv(int argc, char** argv) {

	if(argc>1)
	return 0;

	if(strcmp(argv[0],"pwd")!=0)
	return 0;
  // TODO: Fill it!
  return 1;
}
