#include "checksum.h"

int checksun(char *message){
  int c = 0;
  while (*message)
  {
    c += c ^ (int)(*message);
    message++;
  }
  return 0;
}
