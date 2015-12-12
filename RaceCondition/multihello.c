/*
 * =====================================================================================
 *
 *       Filename:  multihello.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/12/2015 11:35:35
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Xiaoli Chen (XC), xiaoli_chen@umail.ucsb.edu
 *   Organization:  UCSB
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>

void *
print_hello(void *args)
{
  printf("Hello, ");
  fflush(stdout);
  return(0);
}

int
main()
{
  pthread_t tid;
  if (pthread_create(&tid, NULL, &print_hello, NULL)) {
    perror("pthread_create() failed");
    exit(1);
  }
    printf("World!\n");

  if (pthread_join(tid, NULL)) {
    perror("pthread_join() failed");
    exit(1);
  }
  fflush(stdout);
  exit(0);
}
