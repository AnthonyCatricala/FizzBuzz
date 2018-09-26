#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  printf("FizzBuzz, written by Anthony Catricala\n\n-------------------------\n\n");

  if (argc > 4)
  {
    if (argc == 5)
      printf("%s\n", "This program takes between 1 and 3 additional arguments. Five is right out.\n");
    else
      printf("%s\n", "This program takes between 1 and 3 additional arguments. \n");
    return 0;
  }
  else
  {
    int repetitions;
    int fizzFactor;
    int buzzFactor;

    if (argc > 1)
      repetitions = atoi(argv[1]);
    else
      repetitions = 100;

    if (argc > 2)
      fizzFactor = atoi(argv[2]);
    else
      fizzFactor = 3;

    if (argc > 3)
      buzzFactor = atoi(argv[3]);
    else
      buzzFactor = 5;

    for(int i = 1; i <= repetitions; i++)
    {
      if (i % (fizzFactor*buzzFactor) == 0)
        printf("FizzBuzz\n");
      else if (i % fizzFactor == 0)
        printf("Fizz\n");
      else if (i % buzzFactor == 0)
        printf("Buzz\n");
      else
        printf("%d\n", i);
    }
  }

  return 0;
}
