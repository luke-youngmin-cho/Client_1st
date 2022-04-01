#include <stdio.h>

// ����ü union
// union ���� ���� ����� ū ����� ������ ũ�⸸ŭ ���� �Ҵ�
// ������������� �ش� ������ ������.
//typedef union _JobInfo {
//	char schoolName[20];
//	char companyName[20];
//} JobInfo;
//
//typedef struct _Person {
//	char name[20];
//	JobInfo jobInfo;
//} Person;

typedef struct _Person {
	char name[20];
	union _JobInfo {
		char schoolName[20];
		char companyName[20];
	} jobInfo;
} Person;

int main() {

	Person a, b;
	
	strcpy(a.name, "Luke");
	strcpy(a.jobInfo.schoolName, "KoreaSchool");

	strcpy(b.name, "Dina");
	strcpy(b.jobInfo.companyName, "StrongCompany");

	printf("Luke's schoolName : %s\n", a.jobInfo.schoolName);
	printf("Luke's companyName : %s\n", a.jobInfo.companyName);
	printf("Dina's schoolName : %s\n", b.jobInfo.schoolName);
	printf("Dina's companyName : %s\n", b.jobInfo.companyName);
}