#include <stdio.h>

int main(void)
{
    char str[100];

    printf("���ڿ��� �Է��ϼ��� : ");
    scanf_s("%99[^\n]", str, sizeof(str));

    int length = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        length += 1;
    }

    printf("�Էµ� ���ڿ���\n\"%s\"\n�Դϴ�.\n", str);
    printf("�Էµ� ���ڿ��� ���� : %d\n", length);

    return 0;
}