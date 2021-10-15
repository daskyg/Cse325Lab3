#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main(int argc, char *argv[])
{
  int pid;
  int priority;

  if(argc < 3){
    printf(2,"Wrong Arguments! Enter pid and priority\n");
    exit();
  }

  pid = atoi(argv[1]);
  priority = atoi(argv[2]);

  //Locking to range
  if (priority < 0 ){
    priority = 0;
  }

  //Locking to range
  if (priority > 39){
    priority = 39;
  }
  //Setting priority
  setpr(pid, priority);
  //Getting priority
  getpr(pid);
  exit();
}
