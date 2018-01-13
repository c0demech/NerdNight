#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/***************************************************************************
 * Intro to Reverse Engineering ELF binaries
 *
 * Topic: functions
 *
 * Copyright (C) 2017, Michael Edie, @c0demech
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ****************************************************************************/


int
now_u_see()
{
  return 16;
}

int
another_one(int c)
{
  int b = c;
  printf("%d\n", b);
  return 0;
}

int
main()
{
  char buf[64];
  int retval = now_u_see();

  sleep(2);
  fgets(buf,56,stdin);
  another_one(15);

  exit(0);
} 
