#include <stdio.h>
#include <stdlib.h>

struct Book
{
    char title[128];
    char author[40];
    struct Book *next;
};
void getInput(struct Book *book)
{
    printf("������������");
    scanf("%s",book->title);
    printf("���������ߣ�");
    scanf("%s",book->author);

}

void addBook(struct Book **library)
{
    struct Book *book, *temp;

    book = (struct Book *)malloc(sizeof(struct Book));
    if (book == NULL)
    {
        printf("�ڴ����ʧ�ܣ�\n");
        exit(1);
    }

    getInput(book);

    if(*library != NULL)
    {
        temp = *library;
        *library = book;
        book->next = temp;
    }
    else
    {
        *library = book;
        book->next = NULL;
    }
}

int main()
{
    //ͷָ��
    struct Book *library = NULL;
    addBook(&library);

    return 0;
}
