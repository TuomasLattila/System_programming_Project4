#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]) { //prints to stdout the counter
  if (argc == 2 && (strcmp(argv[1], "reset") == 0)) { //checks if 2 args and reset is the latter arg
    printf(1, "Counter reset!\n");
    printf(1, "counter: %d\n", getreadcount(1)); //resets and prints counter
  } else {
    printf(1, "counter: %d\n", getreadcount(0));//prints counter
  }
  
  exit();
}