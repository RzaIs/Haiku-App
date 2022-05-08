#ifndef __RCV_PID_H__
#define __RCV_PID_H__

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#define FIFO_PATH "../pid.fifo"

pid_t rcvServerPid(char * fifoPath);

#endif // __RCV_PID_H__