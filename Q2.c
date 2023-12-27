#include<stdio.h>


	struct employees{

	int emp_id;
	char emp_name[100];
	int emp_age;
	char emp_role[100];
	char emp_city[100];
	int emp_experience;
	char emp_company_name[100];
		
	};
	
void main()
{
	int i,n;
	printf("enter the number of employees:");
	scanf("%d",&n);
	
	  struct employees e1[n];
	  
	  for(i=0;i<n;i++){
	 
	  	printf("Employee %d:- \n",i+1);

		printf("Enter the name:");
		scanf("%s",&e1[i].emp_name);	   	
		
			
		printf("Enter the id:");
		scanf("%d",&e1[i].emp_id);

		printf("enter the position:");
		scanf("%s",&e1[i].emp_role);	   	
		
		printf("Enter the cityname:");
		scanf("%s",&e1[i].emp_city);	   	
		
		printf("Enter the companyname:");
		scanf("%s",&e1[i].emp_company_name);	   	
		
		printf("Enter the expericence(years):");
		scanf("%d",&e1[i].emp_experience);	   	
		
		printf("Enter the age of employe:");
		scanf("%d",&e1[i].emp_age);	  
	}
		 		   		

	      
    printf("\n\n-------------- Employees Details ---------------\n\n");
    for(i=0; i<n; i++){
        printf("Name : ");
        printf("%s \n",e1[i].emp_name);
 
        printf("Id : ");
        printf("%d \n",e1[i].emp_id);
 
        printf("Position : ");
        printf("%s \n",e1[i].emp_role);
        
        printf("Experience : ");
        printf("%d \n",e1[i].emp_experience);
        
        printf("comName: ");
        printf("%s \n",e1[i].emp_company_name);
        
        printf("age : ");
        printf("%d \n",e1[i].emp_age);
        
        printf("City : ");
        printf("%s \n",e1[i].emp_city);
 
       }
 


}
