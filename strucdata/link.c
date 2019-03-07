//
//  link.c
//  strucdata
//
//  Created by 某某 陈 on 19/3/7.
//  Copyright © 2019年 123. All rights reserved.
//

#include "link.h"
#include "stdlib.h"

struct Link *AppendNode(struct Link *head);
void DisplayLink(struct Link *head);
void DeleteMemory(struct Link *head);

struct Link
{
    int data;
    struct Link *next;
};

int main(int argc, const char * argv[]){
    printf("c-learn main() p336 \n");
    
    int i;
    char c;
    struct Link *head = NULL;
    
    printf("Do you want to add Node (y/n)?");
    scanf(" %c",&c);
    
    i = 0;
    while (c == 'Y'|| c == 'y') {
        head = AppendNode(head);
        DisplayLink(head);
        
        printf("Do you want to add Node (y/n)?");
        scanf(" %c",&c);
        i++;
    }
    
    printf("%d Node have been appended.\n",i);
    
    DeleteMemory(head);
    
    return 0;
}

struct Link *AppendNode(struct Link *head)
{
    struct Link *p = NULL;
    struct Link *pr = head;
    int data;
    // p 为新建节点
    p = (struct Link *)malloc(sizeof(struct Link));
    if (p == NULL) {
        printf("no memeory to alloc");
        exit(0);
    }
    
    if (head == NULL) { // 原链表为空
        head = p;
    } else { // find 末尾
        while (pr->next != NULL) {
            pr = pr->next;
        }
        
         pr->next = p; // append
    }
    
    pr = p;
    
    printf("input node data:");
    scanf("%d",&data);
    
    pr->data = data;
    pr->next = NULL;

    return head;
}

void DisplayLink(struct Link *head) {
    struct Link *p = head;
    int j = 1;
    
    while (p != NULL) {
        printf("%5d%10d\n",j,p->data);
        p = p->next;
        j++;
    }
    
}

void DeleteMemory(struct Link *head){
    struct Link *p = head,*pr = NULL;
    while (p != NULL) {
        pr = p;
        p = p ->next;
        free(pr);
    }

}




