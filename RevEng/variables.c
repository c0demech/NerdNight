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
  int num1;
  int num2 = 45;

  char buf1[16];
  char buf2[16] = "To die, to sleep";

   int* ptr1;
   int* ptr2 = &num1;

  char* ptr3;
  char* ptr4 = buf1;
}
