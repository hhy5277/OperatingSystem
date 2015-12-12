/*
 * =====================================================================================
 *
 *       Filename:  test.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/12/2015 09:46:23
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Xiaoli Chen (XC), xiaoli_chen@umail.ucsb.edu
 *   Organization:  UCSB
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void){
  char  t = 'A';
  char  * p;
  p = (char *) malloc( 3 * sizeof(char*));
  p[0] = 'A';
  p[1] = 'B';
  char a[4]="ALS";
  //char * p;
  //t[0] = 'A';
  //p[0] = t[0]+1;
  //p[0] = t[0] + 1;
  printf("LALALA\n");
  printf("t = %d, t = %c, p = %c\n",t,t,*p);

  printf("%s\n",a);

  a[2]='C';
  printf("after change\n");
  printf("%s\n",a);
  //printf("t = %c, p = %c\n",t[0],p[0]);
}
