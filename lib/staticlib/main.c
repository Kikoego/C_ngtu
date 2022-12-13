#include <stdio.h>
#include <encrypt.h>
#include <checksum.h>

int main(){
  char s[] = "Скажи другу и проходи";
  encrypt(s);
  printf("Зашифровано в '%s'\n",s);
  printf("Контрольная сумма: %d\n ",checksum(s));
  encrypt(s);
  printf("Расшифровано в '%s'\n",s);
  printf("Контрольная сумма: %d\n ",checksum(s));
  return 0;
}

