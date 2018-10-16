#include <stdio.h>
#include "func1.h"
#include "func2.h"

void turbo_on()
{
  printf("turbo_on\n");
}

void turbo_off()
{
  printf("turbo_off\n");
}

int main()
{
  turbo_on();

  func1();
  func2();

  turbo_off();

  printf("lalalalalalalalalalalalalalalalalalalalalalalalalalalalalalala\n");

  return 0;
}
