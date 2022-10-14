#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>

int main(void) {
    int pid;
    char *msg;
    int n;

    printf("father process begin...\n"); // 自动补全技巧： intelliSenseEngine 插件已经支持，
    // 我们要做的是 输入 函数 部分字母会触发联想词，按确认键后 参数不知道有哪些，这个时候 输入 （
    // 这个左括号后就会出来参数提示， 不要一下 把左右括号都输入，这样光标就到 括号后面去了导致没有 参数提示，
    // 不像 xcode 联想出来函数全称 按 确认键 后 会自动把参数带出让我们填写。 但目前vs能这样也不错了。

    pid = fork();
    printf("pid = %d \n",pid);

    if (pid == -1)
    {
        printf("fork error!\n");
        exit(1);
    } else if (pid == 0) 
    {
        printf("In child process!\n");
        msg = "child process";
        n = 2;
    } else {
        printf("In father process!\n");
        msg = "father process";
        n = 1;
    }

    while (n--)
    {
        printf("%s\n",msg);
        sleep(1);
    }

    printf("%s end!\n",msg);
    sleep(1);
    return 0;
}