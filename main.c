// Author: Kyle Kroboth kjk5884@psu.edu
// Collaborator: Shravani Samala sjs7049@psu.edu
// Collaborator: Mackenzie Johnson mlj5382@psu.edu
// Collaborator: Luke Bowman lkb5453@psu.edu
// Section: 2
// Breakout: 1

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int sum_n(int n){
  if (n==0){
    ;
  }
  else{
    return n+sum_n(n-1);
  }
  return 0;
}
void print_n(const char *s, int n){
  if(n<=0){
    ;
  }
  else {
    printf("%s\n",s);
    print_n(s, n-1);
  }
}
int main(void) {
  int num = atof(readline("Enter an int: "));
  printf("sum is %d.\n", sum_n(num));
  char *string = readline("Enter a string: ");
  print_n(string, num);
  return 0;
}