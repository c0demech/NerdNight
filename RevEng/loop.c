#include <stdio.h>
/***************************************************************************
 * Intro to Reverse Engineering ELF binaries
 *
 * Topic: loops
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
  for (int i=0; i < 56; i++)
  {
    printf("%d\n",i);
  }
  return 0;
}
