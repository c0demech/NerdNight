#include <stdio.h>
/***************************************************************************
 * Intro to Reverse Engineering ELF binaries
 *
 * Topic: variables
 *
 * Copyright (C) 2017, Michael Edie, @c0demech
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 * Demonstrate variable declarations
 ***************************************************************************/

int
main()
{
  int num = 56;

  printf("No formats\n");
  printf("The number is: %d\n", num);
}
