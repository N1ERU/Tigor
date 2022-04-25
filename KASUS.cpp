#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define clr system("cls");

typedef struct node1{
	//patient data
	char name[50];
	char DoB[30];
	int age;
	char address[40];
	int status;
	//clinic data
	char docname[20];
	int queue;
	char treatdate[30];
	char diagnose[30];
	char drug[30];
	float cost;
	int qstat;
	struct node1 *next;	
} node1;
struct node2{
	char name[50];
	char DoB[30];
	int age;
	char address[40];
	int status;
	char docname[20];
	int queue;
	char treatdate[30];
	char diagnose[30];
	char drug[30];
	float cost;
	int qstat;
	struct node2 *next;	
} node2;
struct node3{
	char name[50];
	char DoB[30];
	int age;
	char address[40];
	int status;
	char docname[20];
	int queue;
	char treatdate[30];
	char diagnose[30];
	char drug[30];
	float cost;
	int qstat;
	struct node3 *next;	
} node3;
struct node4{
	char name[50];
	char DoB[30];
	int age;
	char address[40];
	int status;
	char docname[20];
	int queue;
	char treatdate[30];
	char diagnose[30];
	char drug[30];
	float cost;
	int qstat;
	struct node4 *next;	
} node4;

struct node1 *front1 = NULL;
struct node1 *rear1 = NULL;

struct node2 *front2 = NULL;
struct node2 *rear2 = NULL;

struct node3 *front3 = NULL;
struct node3 *rear3 = NULL;

struct node4 *front4 = NULL;
struct node4 *rear4 = NULL;

void ListOfDoctors(){
	clr;
	printf("==LIST OF CLINICs AND AVAILABLE DOCTORs==\n");
	//clinic 1
	printf("\n=Clinic Angel=\n");
	printf(" > Dr. Lee Jong Un\n");
	printf(" > Dr. Kim Min Soo\n");
	//clinic 2
	printf("\n=Clinic Andra=\n");
	printf(" > Dr. Steven\n");
	printf(" > Dr. Michael\n");
	//clinic 3
	printf("\n=Clinic Agatha\n");
	printf(" > Dr. Jeno\n");
	printf(" > Dr. Jaemin\n");
	//clinic 4
	printf("\n=Clinic Raymond=\n");
	printf(" > Dr. Erick .H\n");
	printf(" > Dr. Felix\n");
}

void Registration(){	
clr;
	int choose, choose2;
	printf("Please choose a clinic first:\n");
	printf("1. Clinic Angel\n");
	printf("2. Clinic Andra\n");
	printf("3. Clinic Agatha\n");
	printf("4. Clinic Raymond\n");
	printf(">> "); scanf("%d", &choose);
	
	printf("PLEASE INPUT PATIENT'S INFORMATION:\n");
		if(choose == 1){
			struct node1 *temp1;
			temp1 = (struct node1 *)malloc(sizeof(struct node1));
			temp1->qstat = 0;
			if(temp1 == NULL){
				printf("\nOverflow!\n");
			}
			fflush(stdin);
			fflush(stdin);
			printf(" > Name\t\t: "); scanf("%[^\n]s", temp1->name);
			fflush(stdin);
			printf(" > Date of birth: "); scanf("[^\n]s", temp1->DoB);
			fflush(stdin);
			printf(" > Age\t\t: "); scanf("%d", &temp1->age);
			fflush(stdin);
			printf(" > Address\t: "); scanf("%[^\n]s", temp1->address);
			printf(" > Status:\n");
				printf("\t1. BPJS\n");
				printf("\t2. InHealth\n");
				printf("\t3. Mandiri\n");
			printf(">> "); scanf("%d", &temp1->status);
			printf("Choose a Doctor: (Angel Clinic\n");
			printf("1. Dr. Lee Jong Un\n");
			printf("2. Dr. Kim Min Soo\n");
			printf(">> "); scanf("%d", &choose2);
			
			if(choose2 == 1){
				fflush(stdin);
				strcpy(temp1->docname, "Dr. Lee Jong Un");
				fflush(stdin);
				printf("Treatment date: "); scanf("%[^\n]s", temp1->treatdate);
				clr;
				printf("\n==========================\n");
				printf("\nRECEIPT\n");
				printf("Patient's name: %s\n", temp1->name);
				printf("Doctor's name: %s\n", temp1->docname);
				printf("Treatment date: %s\n", temp1->treatdate);
				if(temp1->status == 1) printf("Status: BPJS\n");
				if(temp1->status == 2) printf("Status: InHealth\n");
				if(temp1->status == 3) printf("Status: Mandiri\n");
				if(temp1->queue == 0) printf("IN QUEUE\n");
				printf("\n==========================\n");
			}else if(choose2 == 2){
				fflush(stdin);
				strcpy(temp1->docname, "Dr. Kim Min Soo");
				fflush(stdin);
				printf("Treatment date: "); scanf("%[^\n]s", temp1->treatdate);
				clr;
				printf("\n==========================\n");
				printf("\nRECEIPT\n");
				printf("Patient's name: %s\n", temp1->name);
				printf("Doctor's name: %s\n", temp1->docname);
				printf("Treatment date: %s\n", temp1->treatdate);
				if(temp1->status == 1) printf("Status: BPJS\n");
				if(temp1->status == 2) printf("Status: InHealth\n");
				if(temp1->status == 3) printf("Status: Mandiri\n");
				if(temp1->queue == 0) printf("IN QUEUE\n");
				printf("\n==========================\n");
			}
			temp1->next = NULL;
			if(rear1 == NULL){
				front1 = temp1;
				rear1 = temp1;
			}
			else{
				rear1->next = temp1;
				rear1 = rear1->next;
			}
		}
		else if(choose == 2){
			struct node2 *temp2;
			temp2 = (struct node2 *)malloc(sizeof(struct node2));
			temp2->qstat = 0;
			if(temp2 == NULL){
				printf("\nOverflow!\n");
			}
			fflush(stdin);
			printf("PLEASE INPUT PATIENT'S INFORMATION:\n");
			fflush(stdin);
			printf(" > Name\t\t: "); scanf("%[^\n]s", temp2->name);
			fflush(stdin);
			printf(" > Date of birth: "); scanf("[^\n]s", temp2->DoB);
			fflush(stdin);
			printf(" > Age\t\t: "); scanf("%d", &temp2->age);
			fflush(stdin);
			printf(" > Address\t: "); scanf("%[^\n]s", temp2->address);
			printf(" > Status:\n");
				printf("\t1. BPJS\n");
				printf("\t2. InHealth\n");
				printf("\t3. Mandiri\n");
			printf(">> "); scanf("%d", &temp2->status);
			printf("Choose a Doctor: (Andra Clinic)\n");
			printf("1. Dr. Steven\n");
			printf("2. Dr. Michael\n");
			printf(">> "); scanf("%d", &choose2);
			
			if(choose2 == 1){
				fflush(stdin);
				strcpy(temp2->docname, "Dr. Steven");
				fflush(stdin);
				printf("Treatment date: "); scanf("%[^\n]s", temp2->treatdate);
				clr;
				printf("\n==========================\n");
				printf("\nRECEIPT\n");
				printf("Patient's name: %s\n", temp2->name);
				printf("Doctor's name: %s\n", temp2->docname);
				printf("Treatment date: %s\n", temp2->treatdate);
				if(temp2->status == 1) printf("Status: BPJS\n");
				if(temp2->status == 2) printf("Status: InHealth\n");
				if(temp2->status == 3) printf("Status: Mandiri\n");
				if(temp2->queue == 0) printf("IN QUEUE\n");
				printf("\n==========================\n");
			}else if(choose2 == 2){
				fflush(stdin);
				strcpy(temp2->docname, "Dr. Michael");
				fflush(stdin);
				printf("Treatment date: "); scanf("%[^\n]s", temp2->treatdate);
				clr;
				printf("\n==========================\n");
				printf("\nRECEIPT\n");
				printf("Patient's name: %s\n", temp2->name);
				printf("Doctor's name: %s\n", temp2->docname);
				printf("Treatment date: %s\n", temp2->treatdate);
				if(temp2->status == 1) printf("Status: BPJS\n");
				if(temp2->status == 2) printf("Status: InHealth\n");
				if(temp2->status == 3) printf("Status: Mandiri\n");
				if(temp2->queue == 0) printf("IN QUEUE\n");
				printf("\n==========================\n");
			}
			temp2->next = NULL;
			if(rear2 == NULL){
				front2 = temp2;
				rear2 = temp2;
			}
			else{
				rear2->next = temp2;
				rear2 = rear2->next;
			}
		}
		else if(choose == 3){
			struct node3 *temp3;
			temp3 = (struct node3 *)malloc(sizeof(struct node3));
			temp3->qstat = 0;
			if(temp3 == NULL){
				printf("\nOverflow!\n");
			}
			fflush(stdin);
			printf("PLEASE INPUT PATIENT'S INFORMATION:\n");
			fflush(stdin);
			printf(" > Name\t\t: "); scanf("%[^\n]s", temp3->name);
			fflush(stdin);
			printf(" > Date of birth: "); scanf("[^\n]s", temp3->DoB);
			fflush(stdin);
			printf(" > Age\t\t: "); scanf("%d", &temp3->age);
			fflush(stdin);
			printf(" > Address\t: "); scanf("%[^\n]s", temp3->address);
			printf(" > Status:\n");
				printf("\t1. BPJS\n");
				printf("\t2. InHealth\n");
				printf("\t3. Mandiri\n");
			printf(">> "); scanf("%d", &temp3->status);
			printf("Choose a Doctor: (Agatha Clinic)\n");
			printf("1. Dr. Jeno\n");
			printf("2. Dr. Jaemin\n");
			printf(">> "); scanf("%d", &choose2);
			
			if(choose2 == 1){
				fflush(stdin);
				strcpy(temp3->docname, "Dr. Jeno");
				fflush(stdin);
				printf("Treatment date: "); scanf("%[^\n]s", temp3->treatdate);
				clr;
				printf("\n==========================\n");
				printf("\nRECEIPT\n");
				printf("Patient's name: %s\n", temp3->name);
				printf("Doctor's name: %s\n", temp3->docname);
				printf("Treatment date: %s\n", temp3->treatdate);
				if(temp3->status == 1) printf("Status: BPJS\n");
				if(temp3->status == 2) printf("Status: InHealth\n");
				if(temp3->status == 3) printf("Status: Mandiri\n");
				if(temp3->queue == 0) printf("IN QUEUE\n");
				printf("\n==========================\n");
			}else if(choose2 == 2){
				fflush(stdin);
				strcpy(temp3->docname, "Dr. Jaemin");
				fflush(stdin);
				printf("Treatment date: "); scanf("%[^\n]s", temp3->treatdate);
				clr;
				printf("\n==========================\n");
				printf("\nRECEIPT\n");
				printf("Patient's name: %s\n", temp3->name);
				printf("Doctor's name: %s\n", temp3->docname);
				printf("Treatment date: %s\n", temp3->treatdate);
				if(temp3->status == 1) printf("Status: BPJS\n");
				if(temp3->status == 2) printf("Status: InHealth\n");
				if(temp3->status == 3) printf("Status: Mandiri\n");
				if(temp3->queue == 0) printf("IN QUEUE\n");
				printf("\n==========================\n");
			}
			temp3->next = NULL;
			if(rear3 == NULL){
				front3 = temp3;
				rear3 = temp3;
			}
			else{
				rear3->next = temp3;
				rear3 = rear3->next;
			}
		}
		else if(choose == 4){
			struct node4 *temp4;
			temp4 = (struct node4 *)malloc(sizeof(struct node4));
			temp4->qstat = 0;
			if(temp4 == NULL){
				printf("\nOverflow!\n");
			}
			fflush(stdin);
			printf("PLEASE INPUT PATIENT'S INFORMATION:\n");
			fflush(stdin);
			printf(" > Name\t\t: "); scanf("%[^\n]s", temp4->name);
			fflush(stdin);
			printf(" > Date of birth: "); scanf("[^\n]s", temp4->DoB);
			fflush(stdin);
			printf(" > Age\t\t: "); scanf("%d", &temp4->age);
			fflush(stdin);
			printf(" > Address\t: "); scanf("%[^\n]s", temp4->address);
			printf(" > Status:\n");
				printf("\t1. BPJS\n");
				printf("\t2. InHealth\n");
				printf("\t3. Mandiri\n");
			printf(">> "); scanf("%d", &temp4->status);
			printf("Choose a Doctor: (Raymond Clinic)\n");
			printf("1. Dr. Erick\n");
			printf("2. Dr. Felix\n");
			printf(">> "); scanf("%d", &choose2);
			
			if(choose2 == 1){
				fflush(stdin);
				strcpy(temp4->docname, "Dr. Erick");
				fflush(stdin);
				printf("Treatment date: "); scanf("%[^\n]s", temp4->treatdate);
				clr;
				printf("\n==========================\n");
				printf("\nRECEIPT\n");
				printf("Patient's name: %s\n", temp4->name);
				printf("Doctor's name: %s\n", temp4->docname);
				printf("Treatment date: %s\n", temp4->treatdate);
				if(temp4->status == 1) printf("Status: BPJS\n");
				if(temp4->status == 2) printf("Status: InHealth\n");
				if(temp4->status == 3) printf("Status: Mandiri\n");
				if(temp4->queue == 0) printf("IN QUEUE\n");
				printf("\n==========================\n");
			}else if(choose2 == 2){
				fflush(stdin);
				strcpy(temp4->docname, "Dr. Felix");
				fflush(stdin);
				printf("Treatment date: "); scanf("%[^\n]s", temp4->treatdate);
				clr;
				printf("\n==========================\n");
				printf("\nRECEIPT\n");
				printf("Patient's name: %s\n", temp4->name);
				printf("Doctor's name: %s\n", temp4->docname);
				printf("Treatment date: %s\n", temp4->treatdate);
				if(temp4->status == 1) printf("Status: BPJS\n");
				if(temp4->status == 2) printf("Status: InHealth\n");
				if(temp4->status == 3) printf("Status: Mandiri\n");
				if(temp4->queue == 0) printf("IN QUEUE\n");
				printf("\n==========================\n");
			}
			temp4->next = NULL;
			if(rear4 == NULL){
				front4 = temp4;
				rear4 = temp4;
			}
			else{
				rear4->next = temp4;
				rear4 = rear4->next;
			}
		}
}

void CurrentClinicQ(){
	clr;
	struct node1 *curr1 = front1;
	struct node2 *curr2 = front2;
	struct node3 *curr3 = front3;
	struct node4 *curr4 = front4;
	
	int count1 = 1;
	int count2 = 1;
	int count3 = 1;
	int count4 = 1;
	
	printf("\n=Angel CLinic Patient List=\n");
	if(front1 == NULL){
		printf("Patient list empty!\n");
	}
	while(curr1 != NULL){
		if(curr1->qstat != 0){
			curr1 = curr1->next;
			continue;
		}else{
			printf("Queue No. %d", count1);
			printf("\n > Patient name: %s\n", curr1->name);
			printf(" > Doctor: %s\n", curr1->docname);
			if(curr1->status == 1) printf(" > Status: BPJS\n");
			if(curr1->status == 2) printf(" > Status: InHealth\n");
			if(curr1->status == 3) printf(" > Status: Mandiri\n");
			curr1->queue = count1;
			count1++;
			curr1 = curr1->next;	
		}
	}
	printf("\n=Andra CLinic Patient ListQ=\n");
	if(front2 == NULL){
		printf("Patient list empty!\n");
	}
	while(curr2 != NULL){
		if(curr2->qstat != 0){
			curr2 = curr2->next;
			continue;
		}else{
			printf("Queue No. %d", count2);
			printf("\n > Patient name: %s\n", curr2->name);
			printf(" > Doctor: %s\n", curr2->docname);
			if(curr2->status == 1) printf(" > Status: BPJS\n");
			if(curr2->status == 2) printf(" > Status: InHealth\n");
			if(curr2->status == 3) printf(" > Status: Mandiri\n");
			curr2->queue = count2;
			count2++;
			curr2 = curr2->next;
		}
	}
	printf("\n=Agatha CLinic Patient List=\n");
	if(front3 == NULL){
		printf("Patient list empty!\n");
	}
	while(curr3 != NULL){
		if(curr3->qstat != 0){
			curr3 = curr3->next;	
			continue;
		}else{
			printf("Queue No. %d", count3);
			printf("\n > Patient name: %s\n", curr3->name);
			printf(" > Doctor: %s\n", curr3->docname);
			if(curr3->status == 1) printf(" > Status: BPJS\n");
			if(curr3->status == 2) printf(" > Status: InHealth\n");
			if(curr3->status == 3) printf(" > Status: Mandiri\n");
			curr3->queue = count3;
			count3++;
			curr3 = curr3->next;	
		}
	}
	printf("\n=Raymond CLinic Patient List=\n");
	if(front4 == NULL){
		printf("Patient list empty!\n");
	}
	while(curr4 != NULL){
		if(curr4->qstat != 0){
			curr4 = curr4->next;
			continue;
		}else{
			printf("Queue No. %d", count4);
			printf("\n > Patient name: %s\n", curr4->name);
			printf(" > Doctor: %s\n", curr4->docname);
			if(curr4->status == 1) printf(" > Status: BPJS\n");
			if(curr4->status == 2) printf(" > Status: InHealth\n");
			if(curr4->status == 3) printf(" > Status: Mandiri\n");
			curr4->queue = count4;
			count4++;
			curr4 = curr4->next;	
		}
	}
}

void Outpatient(){
	struct node1 *curr1 = front1;
	struct node2 *curr2 = front2;
	struct node3 *curr3 = front3;
	struct node4 *curr4 = front4;
	
	char sname[30];
	int choose3;
	printf("\n=OUTPATIENT\n");
	fflush(stdin);
	printf("Please type patient's name: "); scanf("%[^\n]s", sname);
	while(curr1 != NULL){
		if(strcmp(curr1->name, sname) == 0){
			fflush(stdin);
			printf("> Patient's complaint:\n"); 
			printf("1. Headache\n");
			printf("2. Chest pain\n");
			printf("3. Infection\n");
			printf("4. Allergic\n");
			scanf("%d", &choose3);
			
			if(choose3 == 1)
				strcpy(curr1->diagnose, "Headache");
			if(choose3 == 2)
				strcpy(curr1->diagnose, "Chest pain");
			if(choose3 == 3)
				strcpy(curr1->diagnose, "Infection");
			if(choose3 == 4)
				strcpy(curr1->diagnose, "Allergic");
			
			if(strlen(curr1->diagnose) != 0){
				curr1->qstat = 1;
			}
			printf("\n =============================================================================================\n");
			printf(" Name: %s\n", curr1->name);
			printf(" Diagnose: %s\n", curr1->diagnose);
			if(curr1->qstat == 1) printf(" Checked: TRUE\n");
			if(curr1->qstat == 0) printf(" Checked: FALSE\n");
			printf(" Please proceed to the pharmacy queue, and show them this receipt to get a medicine for you...\n");
			printf("\n =============================================================================================\n");
	
		}
		curr1 = curr1->next;
	}
	while(curr2 != NULL){
		if(strcmp(curr2->name, sname) == 0){
			fflush(stdin);
			printf("> Patient's complaint:\n"); 
			printf("1. Headache\n");
			printf("2. Chest pain\n");
			printf("3. Infection\n");
			printf("4. Allergic\n");
			scanf("%d", &choose3);
			
			if(choose3 == 1)
				strcpy(curr2->diagnose, "Headache");
			if(choose3 == 2)
				strcpy(curr2->diagnose, "Chest pain");
			if(choose3 == 3)
				strcpy(curr2->diagnose, "Infection");
			if(choose3 == 4)
				strcpy(curr2->diagnose, "Allergic");
				
			if(strlen(curr2->diagnose) != 0){
				curr2->qstat = 1;
			}
			printf("\n =============================================================================================\n");
			printf(" Name: %s\n", curr2->name);
			printf(" Diagnose: %s\n", curr2->diagnose);
			if(curr2->qstat == 1) printf(" Checked: TRUE\n");
			if(curr2->qstat == 0) printf(" Checked: FALSE\n");
			printf(" Please proceed to the pharmacy queue, and show them this receipt to get a medicine for you...\n");
			printf("\n =============================================================================================\n");

		}
		curr2 = curr2->next;
	}
	while(curr3 != NULL){
		if(strcmp(curr3->name, sname) == 0){
			fflush(stdin);
			printf("> Patient's complaint:\n");
			printf("1. Headache\n");
			printf("2. Chest pain\n");
			printf("3. Infection\n");
			printf("4. Allergic\n");
			scanf("%d", &choose3);
			
			if(choose3 == 1)
				strcpy(curr3->diagnose, "Headache");
			if(choose3 == 2)
				strcpy(curr3->diagnose, "Chest pain");
			if(choose3 == 3)
				strcpy(curr3->diagnose, "Infection");
			if(choose3 == 4)
				strcpy(curr3->diagnose, "Allergic");
			
			if(strlen(curr3->diagnose) != 0){
				curr3->qstat = 1;
			}	
			printf("\n =============================================================================================\n");
			printf(" Name: %s\n", curr3->name);
			printf(" Diagnose: %s\n", curr3->diagnose);
			if(curr3->qstat == 1) printf(" Checked: TRUE\n");
			if(curr3->qstat == 0) printf(" Checked: FALSE\n");
			printf(" Please proceed to the pharmacy queue, and show them this receipt to get a medicine for you...\n");
			printf("\n =============================================================================================\n");
			
		}
		curr3 = curr3->next;
	}
	while(curr4 != NULL){
		if(strcmp(curr4->name, sname) == 0){
			fflush(stdin);
			printf("> Patient's complaint:\n"); 
			printf("1. Headache\n");
			printf("2. Chest pain\n");
			printf("3. Infection\n");
			printf("4. Allergic\n");
			scanf("%d", &choose3);
			
			if(choose3 == 1)
				strcpy(curr4->diagnose, "Headache");
			if(choose3 == 2)
				strcpy(curr4->diagnose, "Chest pain");
			if(choose3 == 3)
				strcpy(curr4->diagnose, "Infection");
			if(choose3 == 4)
				strcpy(curr4->diagnose, "Allergic");
				
			if(strlen(curr4->diagnose) != 0){
				curr4->qstat = 1;
			}
			printf("\n =============================================================================================\n");
			printf(" Name: %s\n", curr4->name);
			printf(" Diagnose: %s\n", curr4->diagnose);
			if(curr4->qstat == 1) printf(" Checked: TRUE\n");
			if(curr4->qstat == 0) printf(" Checked: FALSE\n");
			printf(" Please proceed to the pharmacy queue, and show them this receipt to get a medicine for you...\n");
			printf("\n =============================================================================================\n");

		}
		curr4 = curr4->next;
	}
}
void PharmacyQ(){
	struct node1 *curr1 = front1;
	struct node2 *curr2 = front2;
	struct node3 *curr3 = front3;
	struct node4 *curr4 = front4;
	
	int count = 1;
	printf("\n=PHARMACY QUEUE=\n");
	while(curr1 != NULL){
		if(curr1->qstat == 1){
			printf("Queue No. %d", count);
			printf("\n > Patient name: %s\n", curr1->name);
			printf(" > Doctor: %s\n", curr1->docname);
			if(curr1->status == 1) printf(" > Status: BPJS\n");
			if(curr1->status == 2) printf(" > Status: InHealth\n");
			if(curr1->status == 3) printf(" > Status: Mandiri\n");
			printf(" > Diagnose: %s\n", curr1->diagnose);
			curr1->queue = count;
			count++;
			curr1 = curr1->next;
			
		}
		else{
			curr1 = curr1->next;
			continue;	
		}
	}
	while(curr2 != NULL){
		if(curr2->qstat == 1){
			printf("Queue No. %d", count);
			printf("\n > Patient name: %s\n", curr2->name);
			printf(" > Doctor: %s\n", curr2->docname);
			if(curr2->status == 1) printf(" > Status: BPJS\n");
			if(curr2->status == 2) printf(" > Status: InHealth\n");
			if(curr2->status == 3) printf(" > Status: Mandiri\n");
			printf(" > Diagnose: %s\n", curr2->diagnose);
			curr2->queue = count;
			count++;
			curr2 = curr2->next;
		}
		else{
			curr2 = curr2->next;
			continue;	
		}
	}
	while(curr3 != NULL){
		if(curr3->qstat == 1){
			printf("Queue No. %d", count);
			printf("\n > Patient name: %s\n", curr3->name);
			printf(" > Doctor: %s\n", curr3->docname);
			if(curr3->status == 1) printf(" > Status: BPJS\n");
			if(curr3->status == 2) printf(" > Status: InHealth\n");
			if(curr3->status == 3) printf(" > Status: Mandiri\n");
			printf(" > Diagnose: %s\n", curr3->diagnose);
			curr3->queue = count;
			count++;
			curr3 = curr3->next;
		}
		else{
			curr3 = curr3->next;
			continue;	
		}
	}
	if(front4 == NULL){
		printf("Patient list empty!\n");
	}
	while(curr4 != NULL){
		if(curr4->qstat == 1){
			printf("Queue No. %d", count);
			printf("\n > Patient name: %s\n", curr4->name);
			printf(" > Doctor: %s\n", curr4->docname);
			if(curr4->status == 1) printf(" > Status: BPJS\n");
			if(curr4->status == 2) printf(" > Status: InHealth\n");
			if(curr4->status == 3) printf(" > Status: Mandiri\n");
			printf(" > Diagnose: %s\n", curr4->diagnose);
			curr4->queue = count;
			count++;
			curr4 = curr4->next;
		}
		else{
			curr4 = curr4->next;
			continue;	
		}
	}
	
}

void DrugTaken(){
	struct node1 *curr1 = front1;
	struct node2 *curr2 = front2;
	struct node3 *curr3 = front3;
	struct node4 *curr4 = front4;
	int taken = 0;
	char diag1[] = "Headache", diag2[] = "Chest pain", diag3[] = "Infection", diag4[] = "Allergic";
	float HA = 10.000;
	float CP = 24.000;
	float IN = 18.000;
	float AC = 45.000;
	int count = 1;
	printf("\n=DRUG TAKEN LIST=\n");
	while(curr1 != NULL){
		if(curr1->qstat == 1){
			printf("Queue No. %d", count);
			printf("\n > Patient name: %s\n", curr1->name);
			printf(" > Doctor: %s\n", curr1->docname);
			if(curr1->status == 1) printf(" > Status: BPJS\n");
			if(curr1->status == 2) printf(" > Status: InHealth\n");
			if(curr1->status == 3) printf(" > Status: Mandiri\n");
			printf(" > Diagnose: %s\n", curr1->diagnose);
			if(strcmp(curr1->diagnose, diag1) == 0){
				printf(" > Drug price: Rp%f\n", HA);
				curr1->cost = HA;
			}else if(strcmp(curr1->diagnose, diag2) == 0){
				printf(" > Drug price: Rp%f\n", CP);
				curr1->cost = CP;
			}else if(strcmp(curr1->diagnose, diag3) == 0){
				printf(" > Drug price: Rp%f\n", IN);
				curr1->cost = IN;
			}else if(strcmp(curr1->diagnose, diag4) == 0){
				printf(" > Drug price: Rp%f\n", AC);
				curr1->cost = AC;
			}
			curr1->queue = count;
			count++;
			curr1->qstat = 2;
			curr1 = curr1->next;
		}else{
			curr1 = curr1->next;
			continue;	
		}
	while(curr2 != NULL){
		if(curr2->qstat == 1){
			printf("Queue No. %d", count);
			printf("\n > Patient name: %s\n", curr2->name);
			printf(" > Doctor: %s\n", curr2->docname);
			if(curr2->status == 1) printf(" > Status: BPJS\n");
			if(curr2->status == 2) printf(" > Status: InHealth\n");
			if(curr2->status == 3) printf(" > Status: Mandiri\n");
			printf(" > Diagnose: %s\n", curr2->diagnose);
			if(strcmp(curr2->diagnose, diag1) == 0){
				printf(" > Drug price: Rp%f\n", HA);
				curr2->cost = HA;
			}else if(strcmp(curr2->diagnose, diag2) == 0){
				printf(" > Drug price: Rp%f\n", CP);
				curr2->cost = CP;
			}else if(strcmp(curr2->diagnose, diag3) == 0){
				printf(" > Drug price: Rp%f\n", IN);
				curr2->cost = IN;
			}else if(strcmp(curr2->diagnose, diag4) == 0){
				printf(" > Drug price: Rp%f\n", AC);
				curr2->cost = AC;
			}
			curr2->queue = count;
			count++;
			curr2->qstat = 2;
			curr2 = curr2->next;
		}else{
			curr2 = curr2->next;
			continue;	
		}
	}
	while(curr3 != NULL){
		if(curr3->qstat == 1){
			printf("Queue No. %d", count);
			printf("\n > Patient name: %s\n", curr3->name);
			printf(" > Doctor: %s\n", curr3->docname);
			if(curr3->status == 1) printf(" > Status: BPJS\n");
			if(curr3->status == 2) printf(" > Status: InHealth\n");
			if(curr3->status == 3) printf(" > Status: Mandiri\n");
			printf(" > Diagnose: %s\n", curr3->diagnose);
			if(strcmp(curr3->diagnose, diag1) == 0){
				printf(" > Drug price: Rp%f\n", HA);
				curr3->cost = HA;
			}else if(strcmp(curr3->diagnose, diag2) == 0){
				printf(" > Drug price: Rp%f\n", CP);
				curr3->cost = CP;
			}else if(strcmp(curr3->diagnose, diag3) == 0){
				printf(" > Drug price: Rp%f\n", IN);
				curr3->cost = IN;
			}else if(strcmp(curr3->diagnose, diag4) == 0){
				printf(" > Drug price: Rp%f\n", AC);
				curr3->cost = AC;
			}
			curr3->queue = count;
			count++;
			curr3->qstat = 2;
			curr3 = curr3->next;
		}else{
			curr3 = curr3->next;
			continue;	
		}
	}
	while(curr4 != NULL){
		if(curr4->qstat == 1){
			printf("Queue No. %d", count);
			printf("\n > Patient name: %s\n", curr4->name);
			printf(" > Doctor: %s\n", curr4->docname);
			if(curr4->status == 1) printf(" > Status: BPJS\n");
			if(curr4->status == 2) printf(" > Status: InHealth\n");
			if(curr4->status == 3) printf(" > Status: Mandiri\n");
			printf(" > Diagnose: %s\n", curr4->diagnose);
			if(strcmp(curr4->diagnose, diag1) == 0){
				printf(" > Drug price: Rp%f\n", HA);
				curr4->cost = HA;
			}else if(strcmp(curr4->diagnose, diag2) == 0){
				printf(" > Drug price: Rp%f\n", CP);
				curr4->cost = CP;
			}else if(strcmp(curr4->diagnose, diag3) == 0){
				printf(" > Drug price: Rp%f\n", IN);
				curr4->cost = IN;
			}else if(strcmp(curr4->diagnose, diag4) == 0){
				printf(" > Drug price: Rp%f\n", AC);
				curr4->cost = AC;
			}
			curr4->queue = count;
			count++;
			curr4->qstat = 2;
			curr4 = curr4->next;
		}else{
			curr4 = curr4->next;
			continue;	
		}
	}
}
}

void Payment(){
	struct node1 *curr1 = front1;
	struct node2 *curr2 = front2;
	struct node3 *curr3 = front3;
	struct node4 *curr4 = front4;
	
	float service1 = 20.000;
	float service2 = 30.000;
	float service3 = 45.000;
	float service4 = 55.000;
	
	float admin = 5.000;
	while(curr1 != NULL){
		if(curr1->qstat == 2){
			printf("Queue No. %d", curr1->queue);
			printf("\n > Patient name: %s\n", curr1->name);
			printf(" > Doctor: %s\n", curr1->docname);
			float total1 = curr1->cost + service1 + admin;
			printf(" > Total Price: %.0f\n", total1);
			curr1->cost = total1;
			if(curr1->status == 1 || curr1->status == 2) 
				printf(" > The Cost are covered by insurance.\n");
			if(curr1->status == 3) printf(" > Please proceed to the cashier\n");
			curr1->qstat = 3;
			curr1 = curr1->next;
		}else{
			curr1 = curr1->next;
			continue;	
		}
	}
	while(curr2 != NULL){
		if(curr2->qstat == 2){
			printf("Queue No. %d", curr2->queue);
			printf("\n > Patient name: %s\n", curr2->name);
			printf(" > Doctor: %s\n", curr2->docname);
			float total2 = curr2->cost + service2 + admin;
			printf(" > Total Price: %.0f\n", total2);
			curr2->cost = total2;
			if(curr2->status == 1 || curr2->status == 2) 
				printf(" > The Cost are covered by insurance.\n");
			if(curr2->status == 3) printf(" > Please proceed to the cashier\n");
			curr2->qstat = 3;
			curr2 = curr2->next;
		}else{
			curr2 = curr2->next;
			continue;	
		}
	}
	while(curr3 != NULL){
		if(curr3->qstat == 2){
			printf("Queue No. %d", curr3->queue);
			printf("\n > Patient name: %s\n", curr3->name);
			printf(" > Doctor: %s\n", curr3->docname);
			float total3 = curr3->cost + service3 + admin;
			printf(" > Total Price: %.0f\n", total3);
			curr3->cost = total3;
			if(curr3->status == 1 || curr3->status == 2) 
				printf(" > The Cost are covered by insurance.\n");
			if(curr3->status == 3) printf(" > Please proceed to the cashier\n");
			curr3->qstat = 3;
			curr3 = curr3->next;
		}else{
			curr3 = curr3->next;
			continue;	
		}
	}
	while(curr4 != NULL){
		if(curr4->qstat == 2){
			printf("Queue No. %d", curr4->queue);
			printf("\n > Patient name: %s\n", curr4->name);
			printf(" > Doctor: %s\n", curr4->docname);
			float total4 = curr4->cost + service4 + admin;
			printf(" > Total Price: %.0f\n", total4);
			curr4->cost = total4;
			if(curr4->status == 1 || curr4->status == 2) 
				printf(" > The Cost are covered by insurance.\n");
			if(curr4->status == 3) printf(" > Please proceed to the cashier\n");
			curr4->qstat = 3;
			curr4 = curr4->next;
		}else{
			curr4 = curr4->next;
			continue;	
		}
	}
}

arc(){
	struct node1 *curr1 = front1;
	struct node2 *curr2 = front2;
	struct node3 *curr3 = front3;
	struct node4 *curr4 = front4;
	
	int count = 1;
	while(curr1 != NULL){
		if(curr1->qstat == 3){
			printf("Queue No. %d", count);
			printf("\n > Patient name: %s\n", curr1->name);
			printf(" > Diagnose: %s\n", curr1->diagnose);
			printf(" > Doctor: %s\n", curr1->docname);
			if(curr1->status == 1 || curr1->status == 2) 
				printf(" > The Cost are covered by insurance.\n");
			if(curr1->status == 3) 
				printf(" > Total Price: %.0f\n", curr1->cost);
			
			curr1->queue = count;
			count++;
			curr1 = curr1->next;
		}else{
			curr1 = curr1->next;
			continue;	
		}
	}
	while(curr2 != NULL){
		if(curr2->qstat == 3){
			printf("Queue No. %d", count);
			printf("\n > Patient name: %s\n", curr2->name);
			printf(" > Diagnose: %s\n", curr2->diagnose);
			printf(" > Doctor: %s\n", curr2->docname);
			if(curr2->status == 1 || curr2->status == 2) 
				printf(" > The Cost are covered by insurance.\n");
			if(curr2->status == 3) 
				printf(" > Total Price: %.0f\n", curr2->cost);
			curr2->queue = count;
			count++;
			curr2 = curr2->next;
		}else{
			curr2 = curr2->next;
			continue;	
		}
	}
	while(curr3 != NULL){
		if(curr3->qstat == 3){
			printf("Queue No. %d", count);
			printf("\n > Patient name: %s\n", curr3->name);
			printf(" > Diagnose: %s\n", curr3->diagnose);
			printf(" > Doctor: %s\n", curr3->docname);
			if(curr3->status == 1 || curr3->status == 2) 
				printf(" > The Cost are covered by insurance.\n");
			if(curr3->status == 3) 
				printf(" > Total Price: %.0f\n", curr3->cost);
			curr3->queue = count;
			count++;
			curr3 = curr3->next;
		}else{
			curr3 = curr3->next;
			continue;	
		}
	}
	while(curr4 != NULL){
		if(curr4->qstat == 3){
			printf("Queue No. %d", count);
			printf("\n > Patient name: %s\n", curr4->name);
			printf(" > Diagnose: %s\n", curr4->diagnose);
			printf(" > Doctor: %s\n", curr4->docname);
			if(curr4->status == 1 || curr4->status == 2) 
				printf(" > The Cost are covered by insurance.\n");
			if(curr4->status == 3) 
				printf(" > Total Price: %.0f\n", curr4->cost);
			curr4->queue = count;
			count++;
			curr4 = curr4->next;
		}else{
			curr4 = curr4->next;
			continue;	
		}
	}
	
}

int main()
{
	
	int menu;
	do{
	system("cls");
	printf("1. List of doctors\n");
	printf("2. Registration\n");
	printf("3. Current clinic queue\n");
	printf("4. Outpatient\n");
	printf("5. Pharmacy queue\n");
	printf("6. Drug taken\n");
	printf("7. Payment\n");
	printf("8. Archive files\n");
	printf("0. EXIT\n");
	printf(">> "); scanf("%d", &menu);
	
	switch(menu)
	{
		case 1:
			ListOfDoctors();
			break;
		case 2:
			Registration();
			break;
		case 3:
			CurrentClinicQ();
			break;
		case 4:
			Outpatient();
			break;
		case 5:
			PharmacyQ();
			break;
		case 6:
			DrugTaken();
			break;
		case 7:
			Payment();
			break;
		case 8:
			arc();
			break;
	}
	getch();
	}while(menu != 0);
	
	return 0;
}
