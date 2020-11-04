#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  int rdc = getreadcount();
  printf(1, "Hi, the number of read syscall is %d so far!\n", rdc);
  exit();
}