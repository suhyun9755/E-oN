#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct book
{
	char title[20];
	char author[20];
	char year[20];
	char publisher[20];
	char genre[20];
	struct book *next_book;
};

struct book *file_in(struct book *start)
{
	struct book *loopLiked = start;
	char *strInFileName;
	FILE *inFile;
	strInFileName = "input.txt";

	if ((inFile = fopen(strInFileName, "r")) == NULL) {
		printf("입력파일 열기 실패\n");
		exit(1);
	}
		
	char buffer[5][100];
	
		while (!feof(inFile)) {
		fscanf(inFile, "%s %s %s %s %s", buffer[0], buffer[1], buffer[2], buffer[3], buffer[4]);
		char *out[5];
		for (int i = 0; i < 5; i++)
			{
				out[i] = malloc(sizeof(char) *(strlen(buffer[i])));
				strcpy(out[i], buffer[i]);
			}
		
		struct book *newdata = malloc(sizeof(struct book) * 1);
		strcpy(newdata->title, out[0]);
		strcpy(newdata->author, out[1]);
		strcpy(newdata->year, out[2]);
		strcpy(newdata->publisher, out[3]);
		strcpy(newdata->genre, out[4]);
		newdata->next_book = NULL;

			if (start == NULL) {
				start = newdata;
				loopLiked = start;
		}
		else
			{
				loopLiked->next_book = newdata;
				loopLiked = loopLiked->next_book;
		 	}
		}
		fclose(inFile);
		return start;
	 }

void file_out(struct book *start)
{
	char *strOutFileName;
	FILE *outFile;
	strOutFileName = "input.txt";
	
	if ((outFile = fopen(strOutFileName, "w")) == NULL)
		{
		printf("\n출력파일 열기 실패");
		exit(1);
		}
	while (start != NULL)
		{
			if (start->next_book = NULL)
				{
					fprintf(outFile, "%s %s %s %s %s", start->title, start->author, start->year, start->publisher, start->genre);
				 }
			else {
					fprintf(outFile, "%s %s %s %s %s", start->title, start->author, start->year, start->publisher, start->genre);
				 }
		start = start->next_book;
		 }
	fclose(outFile);
}

struct book *add_book(struct book *start){
	printf("\n도서명, 저자, 출판년도, 출판사명,장르 ");
	struct book *loop_test;
		loop_test = start;

	 	while (loop_test->next_book != NULL)
			{
				loop_test = loop_test->next_book;
			}
 		loop_test->next_book = malloc(sizeof(struct book) * 1);
 		scanf("%s %s %s %s %s", loop_test->next_book->title, loop_test->next_book->author, loop_test->next_book->year, loop_test->next_book->publisher, loop_test->next_book->genre);
		loop_test->next_book->next_book = NULL;

	return start;
}

void function_searching(struct book *start) {
		char finding[20];
		struct book *test = start;
		printf("\n검색어를 입력하세요 : ");
		scanf("%s", &finding);

		int count = 0;
		while (test != NULL)
			{
				if (strstr(test->title, finding) != NULL)
				{
					printf("%s %s %s %s %s", test->title, test->author, test->year, test->publisher, test->genre);
					count++;
					test = test->next_book;
					continue;
		 		}
				else if (strstr(test->author, finding) != NULL) 
				{
					printf("%s %s %s %s %s", test->title, test->author, test->year, test->publisher, test->genre);
					count++;
					test = test->next_book;
					continue;
				}
				else if (strstr(test->year, finding) != NULL) 
				{
					printf("%s %s %s %s %s", test->title, test->author, test->year, test->publisher, test->genre);
					count++;
					test = test->next_book;
					continue;
				}
				else if (strstr(test->publisher, finding) != NULL) 
				{
		 			printf("%s %s %s %s %s", test->title, test->author, test->year, test->publisher, test->genre);
					count++;
					test = test->next_book;
					continue;
				}
				else if (strstr(test->genre, finding) != NULL) 
				{
					printf("%s %s %s %s %s", test->title, test->author, test->year, test->publisher, test->genre);
					count++;
					test = test->next_book;
					continue;
				}
				else 
				{
					test = test->next_book;
				}
			 }
		if (count == 0)
			{
			printf("검색결과가 없습니다.");
		 	}
		else {
			printf("검색결과 : %d건", count);
			}
		}

struct book *modifying(struct book *start)
{
	int select_number;
	char modify[20];
	char finder[20];
	struct book *test = start;
	printf("\n수정할 책의 제목을 입력하세요 : ");
	scanf("%s", &finder);

	while (test != NULL)
	{
		if (strcmp(test->title, finder) == 0)
		{
			printf("%s %s %s %s %s", test->title, test->author, test->year, test->publisher, test->genre);
			while (1)
			{
				printf("\n수정할 항목을 입력하세요 : ");
				scanf("%s", &select_number);
				switch (select_number)
				{
				case 1:
					printf("\n수정할 도서의 제목을 입력하세요 : ");
					scanf("%s", &modify);
					strcpy(test->title, modify);
					break;
				case 2:
					printf("\n수정할 도서의 저자를 입력하세요 : ");
					scanf("%s", &modify);
					strcpy(test->author, modify);
					break;
				case 3:
					printf("\n수정할 도서의 출판년도를 입력하세요 : ");
					scanf("%s", &modify);
					strcpy(test->year, modify);
					break;
				case 4:
					printf("\n수정할 도서의 출판사를 입력하세요 : ");
					scanf("%s", &modify);
					strcpy(test->publisher, modify);
					break;
				case 5:
					printf("\n수정할 도서의 장르를 입력하세요 : ");
					scanf("%s", &modify);
					strcpy(test->genre, modify);
					break;
				default:
					printf("\n다시입력하세요.");
					continue;
					break;
				}
				break;
			}
			break;
		}
		else {
			test = test->next_book;
		}
	}
	if (test == NULL) {
		printf("\n해당하는 검색어가 없습니다.");
		return start;
	}
}

struct book *delete_book(struct book *start)
{
		char delete_fider[20];
		struct book *test = start;
		struct book *test_before = start;
		printf("삭제할 책의 제목을 입력하세요 : ");
		scanf("%s", &delete_fider);

		while (test != NULL)
		{
			if (strcmp(test->title, delete_fider) == 0)
			{
				printf("%s %s %s %s %s", test->title, test->author, test->year, test->publisher, test->genre);
				break;
			}
			else
			{
				if (test != start)
				{
					test_before = test_before->next_book;
				}
			test = test->next_book;
			}
		}

		if (test == start)
		{
			start = test->next_book;
			free(test);
			printf("삭제 완료 되었습니다.");
		 }
		else {
			test_before->next_book;
			free(test);
			printf("삭제 완료 되었습니다.");
		}
	 	if (test == NULL){
			printf("해당 도서가 목록에 없습니다.");
		}
		return start;
}

void function_print(struct book *start)
{
	while (start != NULL)
		{
			printf("%s", start->title);
			printf("%s", start->author);
			printf("%s", start->year);
			printf("%s", start->publisher);
			printf("%s", start->genre);
			printf("\n\n");
		
			start = start->next_book;
		}
 }

int main() {
		struct book *start = NULL;
	 	start = file_in(start);
		int select_menu;
	
		while (1) {
		printf("1: 도서추가\n2: 도서검색\n3: 도서정보수정\n4: 도서삭제\n5: 총 목록 출력\n6: 저장\n7: 나가기\n");
		scanf("%d", &select_menu);

		switch (select_menu)
		{
			case 1:
				start = add_book(start);
				printf(" ");
				break;
			case 2:
				function_searching(start);
				break;
			case 3:
				start = modifying(start);
				break;
			case 4:
				start = delete_book(start);
				break;
			case 5:
				function_print(start);
				break;
			case 6:
				file_out(start);
				printf(" ");
				break;
			case 7:
				file_out(start);
			return 0;
		
		default:
			
			printf("다시 입력하세요.");
			continue;
			break;
		}
	}
}
