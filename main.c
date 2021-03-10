#include <stdio.h>
#include <string.h>
enum{INSERT=1, DELETE,SEARCH,UPDATE};
typedef struct tel{
	char name[30];
	char phone[20];
}Tel;

Tel arr[10];
int idx=0;

void PrintMenu(){
	printf("****MENU****\n");
	printf("1. Insert\n");
	printf("2. Delete\n");
	printf("3. Search\n");
	printf("4. Update\n");
	printf("0. EXIT\n");
	
}
void InsertTel(){
	
}
void DeleteTel(){

}
void SearchTel(){

}
void UpdateTel(){

}
int main(void)
{
	int no = -1;
	while(no != 0){
		PrintMenu();
		printf("input menu no : ");
		scanf("%d",&no);
		switch(no){
		case INSERT:
			InsertTel();
			break;
		case UPDATE:
			UpdateTel();
			break;
		case DELETE:
			DeleteTel();
			break;
		case SEARCH:
			SearchTel();
			break;
		}
	}
	return 0;
}

