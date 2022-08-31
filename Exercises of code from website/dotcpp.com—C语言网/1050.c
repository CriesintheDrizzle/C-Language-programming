#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<malloc.h>

typedef struct _student_info_
{
    char s_id[16];        //ѧ��
    char s_name[32];      //����
    int s_score[3];       //���Ƴɼ�
}student_info;

void input(student_info* L)
{
    scanf("%s %s %d %d %d", L->s_id, L->s_name, &(L->s_score[0]), &(L->s_score[1]), &(L->s_score[2]));
}

void print(student_info* L)
{
    printf("%s,%s,%d,%d,%d\n", L->s_id, L->s_name, L->s_score[0], L->s_score[1], L->s_score[2]);
}

int main()
{
    student_info* list;
    int n = 0, i = 0;
    scanf("%d", &n);
    while (getchar() != '\n')
        continue;

    if (n > 0 && n < 100)
        list = (student_info*)malloc(sizeof(student_info) * n);
    else
        return 0;
    for (i = 0; i < n; i++)
    {
        input(&list[i]);
        //һ��һ�л�ȡ������һ�ж��������
        while (getchar() != '\n')
            continue;
    }
    for (i = 0; i < n; i++)
    {
        print(&list[i]);
    }
    free(list);
    return 0;
}