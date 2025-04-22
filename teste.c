#include <stdio.h>
#include <assert.h>

void testar() {
  assert(1 == 1);
  printf("teste passou!\n");
}

int main() {
  testar();
  return 0;
}
