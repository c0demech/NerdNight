#include <stdio.h>
#include <stdlib.h>
/***************************************************************************
 * Intro to Reverse Engineering ELF binaries
 *
 * Topic: pointers
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
  int* ptr = malloc(sizeof ptr);
  *ptr = 56;
}
