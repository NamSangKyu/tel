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
	printf("연락처 등록을 시작합니다.\n");
	if(idx == 10){
		printf("더 이상 저장할 공간이 없습니다\n");
		return;
	}
	printf("이름 : "); scanf("%s",arr[idx].name);
	printf("연락처 : "); scanf("%s",arr[idx].phone);
	idx++;
}
void DeleteTel(){
	char name[30];
	int i,j;
	printf("연락처 삭제를 시작합니다.\n");
	printf("삭제할 이름을 입력하세요 : ");  scanf("%s",name);
	for(i=0;i<idx;i++){
		if(strcmp(arr[i].name,name)==0){
			for(j=i;j<idx-1;j++)
				arr[j] = arr[j+1];
			idx--;
			return;
		}
	}
	printf("삭제할 데이터가 없습니다.\n");
}
void SearchTel(){
	char name[30];
	int i;
	printf("연락처 검색을 시작합니다.\n");
	printf("이름을 입력하세요 : ");  scanf("%s",name);
	for(i=0;i<idx;i++){
		if(strcmp(arr[i].name,name)==0){
			printf("이름 : %s, 연락처 : %s\n",arr[i].name, arr[i].phone);
			return;
		}
	}
	printf("검색 결과가 없습니다.\n");
}
void UpdateTel(){
	char name[30];
	int i;
	printf("수정할 연락처 검색을 시작합니다.\n");
	printf("수정할 대상의 이름을 입력하세요 : ");  scanf("%s",name);
	for(i=0;i<idx;i++){
		if(strcmp(arr[i].name,name)==0){
			printf("수정할 이름 : "); scanf("%s",arr[i].name);
			printf("수정할 연락처 : "); scanf("%s",arr[i].phone);
			printf("수정 완료\n");
			return;
		}
	}
	printf("수정할 데이터가 없습니다.\n");
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

