#include <stdio.h>
#include <stdlib.h>
struct Node{
    char name[100];
    char depname[100];
    int age;
    long long int salary;
    long long int data;
    long long int phonenumber;
    struct Node* next;
}; 
struct Node * createNode(int n){
struct Node * head = NULL;
struct Node * temp = NULL;
struct Node * p = NULL;
int i=0;
for(i=0;i<n;i++){
temp=(struct Node *)malloc(sizeof(struct Node));
printf("Enter the data for %d Employee :-\n",i+1);
printf("Enter the Name : ");
scanf("%s",&temp->name);
printf("Enter the Department Name : ");
scanf("%s",&temp->depname);
printf("Enter the Employee Number : ");
scanf("%lld",&(temp->data));
printf("Enter the Age : ");
scanf("%d",&(temp->age));
printf("Enter the Salary : ");
scanf("%lld",&(temp->salary));
printf("Enter the Phone Number : ");
scanf("%lld",&(temp->phonenumber));
 printf("--------------------------------------------\n");
temp->next=NULL;
if(head==NULL){
    head=temp;
}
else{
    p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=temp;
}
}
return head;
}
void Display(struct Node * head){
    struct Node * p = head;
    int count=1;
    while(p!=NULL){
        printf("The details of the %d employee are given below:-\n",count);
        printf("Employee Name : %s\n",p->name);
        printf("Employee's Department Name : %s\n",p->depname);
        printf("Employee Age : %d\n",p->age);
        printf("Employee Number : %lld\n",p->data);
        printf("Employee Salary : %lld\n",p->salary);
        printf("Employee Phone Number : %lld\n",p->phonenumber);
        p=p->next;
        count++;
        printf("--------------------------------------------\n");
    }
   
}                           
int main(){
    int n;
    struct Node * head = NULL;
    printf("How many Employees : ");
    scanf("%d",&n);
    head=createNode(n);
    Display(head);
                     
return 0;
}
