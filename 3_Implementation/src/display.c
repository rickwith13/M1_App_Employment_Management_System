#include "../inc/Employee.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * @brief Display Detail of Employee
 * 
 */


user display(info *emp){
    //printf("Employee doesn't exist\n");
    info *p;
    p = emp;
    //struct info nt;
    if(emp == NULL)
    {
        printf("No Record exist\n");
    }
    else{
        printf("Enter Employee's ID \n");
        int emp_id;
        scanf("%d",&emp_id);
        while(p != NULL){
            if((p->e_id == emp_id)){
                printf("Experienced Employee\n");
                printf("Employee Name: %s\n", p->empname);
                printf("Employee ID: %d\n", p->e_id );
                printf("Phone No: %s\n", p->phone_no);
                printf("E-mail Id: %s\n", p->mail);
                printf("Employee Department: %s\n", p->BU);
                printf("Date of joining: %d-%d-%d\n", p->day, p->month, p->year);
                printf("Current CTC: %f\n", p->ctc);
                printf("Employee's Residence Address: %s\n",p->address);
                printf("Citizenship:%s\n",p->citizenship);
                printf("Employee's Adhaar Number: %s\n",p->adhaar);
                printf("Employee's PAN Card Number:%s\n",p->pan);
                printf("College Grade: %s\n", p->gradclg);
                printf("CGPA:%f\n", p->cgpa);
                printf("Experience %d year\n",p->expyrs);
                printf("No. of Companies, Employee worked before: %d\n",p->compworked);
                printf("Previous Organization: %s", p->prevorg);
                printf("Marital Status: %s\n", p->marital_status);
                break;
                //p=p->nt;
            }/*
            else if(p->e_id == emp_id && p-> expyrs == 0){
                printf("Fresher Employee\n");
                printf("Employee Name: %s\n", p->empname);
                printf("Employee ID: %d\n", p->e_id );
                printf("Phone No: %s\n", p->phone_no);
                printf("E-mail Id: %s\n", p->mail);
                printf("Employee Department: %s\n", p->BU);
                printf("Date of joining: %d-%d-%d\n", p->day, p->month, p->year);
                printf("Current CTC: %f\n", p->ctc);
                printf("Employee's Residence Address: %s\n",p->address);
                printf("Citizenship:%s\n",p->citizenship);
                printf("Employee's Adhaar Number: %s\n",p->adhaar);
                printf("Employee's PAN Card Number:%s\n",p->pan);
                printf("College Grade: %s\n", p->gradclg);
                printf("CGPA:%f\n", p->cgpa);
                printf("Marital Status: %s\n", p->marital_status);
                p=p->nt;
            }*/
        }
    }
    return SUCCESS;
}