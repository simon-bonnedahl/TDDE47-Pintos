#ifndef USERPROG_PROCESS_H
#define USERPROG_PROCESS_H

#include "threads/thread.h"
#include "threads/synch.h"

tid_t process_execute(const char *file_name);
int process_wait(tid_t);
void process_exit(void);
void process_activate(void);

struct exec_info
{
  char *file_name;
  struct semaphore sema;
  struct parent_child *relation;
};

#endif /* userprog/process.h */