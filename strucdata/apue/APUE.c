//
//  APUE.c
//  strucdata
//
//  Created by 某某 陈 on 18/7/15.
//  Copyright © 2018年 123. All rights reserved.
//

#include "APUE.h"

#include <stdio.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h> 

int main(int argc, const char * argv[]){
    char buf[100];
    pid_t pid = -1;
    int status;
    
    printf("%% ");
    while (fgets(buf,100,stdin) != NULL) {
        if (buf[strlen(buf) -1] == '\n') {
            buf[strlen(buf) -1] = 0;
        }
        
        printf("evan add debug 1.pid = %d,getPid = %d",pid,getpid());
        if ((pid = fork()) < 0) {
            printf("fork error");
        } else if (pid == 0) {
            printf("evan child.");
            execlp(buf, buf,(char *)0);
            printf("couldn't execute : %s",buf);
//            exit(127);
        }
        
        printf("evan add debug 2. pid = %d,getPid = %d",pid,getpid());
 
        if ((pid = waitpid(pid, &status, 0)) < 0) {
            printf("waitpid error");
        }
        
        printf("%% ");
    }
    printf("evan add debug 3.while out");
    _exit(0);
 
}

