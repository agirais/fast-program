# include<stdio.h>

int main(void)
{
	char str[] = "YAMADA";

	printf("名前=%s\n", str);
	puts("Hello");
	puts("World \ C\ Language");
	printf("Hello \"World\" ");
	printf("C");
	printf("\tLanguage\n");
	printf("\\100\n");
	printf("数値(%d)表示\n", 123);
	printf("文字(%c)を表示\n", 'A');
	printf("文字(%s)を表示\n", "ABCDEFG");

	return 0;
}