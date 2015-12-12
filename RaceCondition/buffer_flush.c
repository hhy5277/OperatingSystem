/*
 * =====================================================================================
 *
 *       Filename:  buffer_flush.c
 *
 *    Description:	
 *
 *        Version:  1.0
 *        Created:  12/12/2015 12:00:42
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Xiaoli Chen (XC), xiaoli_chen@umail.ucsb.edu
 *   Organization:  UCSB
 *
 * =====================================================================================
 */

#include <stdio.h>

int main(void)
{
  FILE *file_pointer;
  int i;
  file_pointer = fopen("text_buffer.txt","wt");
  for (i = 0;i<100;i++){
    fprintf(file_pointer,"Line %d\n",i);
    fflush(file_pointer);
  }
  fclose(file_pointer);
  return 0;
}
