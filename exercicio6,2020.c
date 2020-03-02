#include <stdio.h>

int main(void) {
  int c,soma = 0;
  for(c = 100; c <= 200; c++){
    
    if(c % 2 == 0){
    soma += c;
    }
  }
  printf("%d",soma);
  return 0;
}
