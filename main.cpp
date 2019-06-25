// 使用常用的链表
#include <stdio.h>
#include <stdlib.h>                 // 使用系统函数malloc
#include <string.h>                 // 使用字符串函数strcpy

#define TSIZE 45

// 构造一个链表的结构体
struct film {
    char title[TSIZE];
    int rating;
    struct film *next;              // 指向链表的下一个结构首地
};

int main(void) {
    struct film *head = NULL;       // 创建链表的首地址,指向null
    struct film *prev, *current;   // 创建链表的前一个指针,和当前指针
    char input[TSIZE];

    // get存储信息
    puts("enter first moive title: ");
    while (gets(input) != NULL && input[0] != '\0')     // 当输入不为0,并且没有结束符
    {
        current = (struct film *) malloc(sizeof(struct film));
        /** 第一个结构
          *
          */  if (head == NULL) {
            head = current;
        } else            // 后续结构体
        {
            prev->next = current;
        }
        current->next = NULL;
        strcpy(current->title, input);
        puts("enter your rating<0-10>: ");
        scanf("%d", &current->rating);
        while (getchar() != '\n')
            continue;
        puts("enter next movie title (empty line to stop): ");
    }

    // 给出电影列表
    if (head == NULL)
        printf("No data entired. ");
    else
        printf("Here is the movie list: \n");
    current = head;
    while (current != NULL) {
        printf("moive: %s rating: %d\n", current->title, current->rating);
        current = current->next;
    }
    // 任务完成时,释放内存
    current = head;
    while (current != NULL) {
        free(current);
        current = current->next;
    }
    printf("Bye!\n");

    return 0;
}
