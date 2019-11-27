#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char ** parse_args(char * line){
  char ** args = malloc(6 * sizeof(line));
  char * token;
  for (int i = 0; token; i++){
    token = strsep(&line, " ");
    args[i] = token;
  }
  return args;
}

int main(){
  char line[100] = "ls -a -l";
  char * p = line;
  char ** args = parse_args(p);
  execvp(args[0], args);
}
