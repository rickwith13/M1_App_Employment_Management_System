#include "../inc/Employee.h"
//#include "../inc/calculatorhead.h"
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <stdlib.h>

/*char empname[100];
char phone_no[15];
char mail[60];
int e_id;
char BU[60];
char role[60];
char address[60];
char citizenship[15];
char adhaar[50];
char pan[20];
float ctc;
int month;
int day;
int year;
char marital_status[20];
char gradclg[40];
float cgpa;
char prevorg[40];
int expyrs;
int compworked;
int salary;
int leave;
char personal_mail_id[15];
int noofdatt;
int noofleaves;
*/
info *(*fp1)(info *, char *, char *, char *, int, char *, char *, char *, char *, char *, char *, float, int, int, int, char *, char *, float, char *, int, int, int, int, char *, int, int) = newadd;
user (*fp2)(info *, int, int, int) = update;
user (*fp3)(info *, int, info *, int *) = search_by_empid;
int (*fp4)(int) = newatt;
int (*fp5)(int) = newlea;
user (*fp6)(info *) = display;

int main()
{
    info *emp = NULL;
    info temp = {0};
    int see;
    int ch;
    while (1)
    {
        printf("******EMPLOYEE MANAGEMENT SYSTEM******\n");
        printf("***********WELCOME*************\n");
        printf("1: Add/Remove Employee information \n");
        printf("2: Update Employee Information\n");
        printf("3: Search Employee List\n");
        printf("4: Attendance and Leave\n");
        printf("5: Employee Calculator\n");
        printf("6: Display Employee Information\n");
        scanf("%d", &ch);
        switch (ch)
        {
            int e_id;
            char empname[100];
            char phone_no[15];
            char mail[60];
            char BU[60];
            char role[60];
            char address[60];
            char citizenship[15];
            char adhaar[50];
            char pan[20];
            float ctc;
            int month;
            int day;
            int year;
            char marital_status[20];
            char gradclg[40];
            float cgpa;
            char prevorg[40];
            int expyrs;
            int compworked;
            int salary;
            int leave;
            char personal_mail_id[15];
            int noofdatt;
            int noofleaves;
        case 1:
            printf("1: Add new employee details.\n 2: Add experienced employee details. \n 3: Delete employee details.\n");
            printf("Enter the choice: \n");
            int option;
            scanf("%d", &option);
            switch (option)
            {
            case 1:
            {
                printf("Enter employee id: \n");
                scanf("%d", &e_id);
                printf("Enter employee name: \n");
                scanf("%99s", empname);
                if (validname(empname) == 0)
                {
                    printf("INCORRECT NAME \n");
                    break;
                }
                printf("Enter employee Phone Number: \n");
                scanf("%14s", phone_no);
                if (validphno(phone_no) == 0)
                {
                    printf("INCORRECT PHONE NUMBER \n");
                    break;
                }
                printf("Enter employee mail ID: \n");
                scanf("%59s", mail);
                if (validmail(mail) == 0)
                {
                    printf("INCORRECT MAIL ID \n");
                    break;
                }
                printf("Enter employee BU: \n");
                scanf("%59s", BU);
                if (checkBU(BU) == 0)
                {
                    printf("INCORRECT BU");
                    break;
                }
                printf("Enter employee Role: \n");
                scanf("%59s", role);
                if (checkRole(role) == 0)
                {
                    printf("INCORRECT ROLE");
                    break;
                }
                printf("Enter employee permanent address: \n");
                scanf("%59s", address);
                printf("Enter employee citizenship: \n");
                scanf("%14s", citizenship);
                printf("Enter employee Adhaar Number: \n");
                scanf("%49s", adhaar);
                if (validadhaar(adhaar) == 0)
                {
                    printf("INCORRECT ADHAAR NUMBER \n");
                    break;
                }
                printf("Enter employee PAN : \n");
                scanf("%19s", pan);
                printf("Enter employee CTC: \n");
                scanf("%f", &ctc);
                printf("Enter employee joining date: \n");
                scanf("%d", &day);
                printf("Enter employee joining month: \n");
                scanf("%d", &month);
                printf("Enter employee joining year: \n");
                scanf("%d", &year);
                printf("Enter Employee Graduation CGPA: \n");
                scanf("%f", &cgpa);
                printf("Enter Employee Graduation college: \n");
                scanf("%39s", gradclg);
                expyrs = 0;
                strcpy(prevorg,"NULL");
                printf("****FRESHER EMPLOYEE DETAILS ADDED****\n");
                emp = (*fp1)(emp, empname, phone_no, mail, e_id, BU, role, address, citizenship, adhaar, pan, ctc, month, day, year, marital_status, gradclg, cgpa, prevorg, expyrs, compworked, salary, leave, personal_mail_id, noofdatt, noofleaves);
                break;
            }
            case 2:
            {
                printf("Enter employee id: \n");
                scanf("%d", &e_id);
                printf("Enter employee name: \n");
                scanf("%99s", empname);
                if (validname(empname) == 0)
                {
                    printf("INCORRECT NAME \n");
                    break;
                }
                printf("Enter employee Phone Number: \n");
                scanf("%14s", phone_no);
                if (validphno(phone_no) == 0)
                {
                    printf("INCORRECT PHONE NUMBER \n");
                    break;
                }
                printf("Enter employee mail ID: \n");
                scanf("%59s", mail);
                if (validmail(mail) == 0)
                {
                    printf("INCORRECT MAIL ID \n");
                    break;
                }
                printf("Enter employee BU: \n");
                scanf("%59s", BU);
                if (checkBU(BU) == 0)
                {
                    printf("INCORRECT BU");
                    break;
                }
                printf("Enter employee Role: \n");
                scanf("%59s", role);
                if (checkRole(role) == 0)
                {
                    printf("INCORRECT ROLE");
                    break;
                }
                printf("Enter employee permanent address: \n");
                scanf("%59s", address);
                printf("Enter employee citizenship: \n");
                scanf("%14s", citizenship);
                printf("Enter employee Adhaar Number: \n");
                scanf("%49s", adhaar);
                if (validadhaar(adhaar) == 0)
                {
                    printf("INCORRECT ADHAAR NUMBER \n");
                    break;
                }
                printf("Enter employee PAN : \n");
                scanf("%19s", pan);
                printf("Enter employee CTC: \n");
                scanf("%f", &ctc);
                printf("Enter employee joining date: \n");
                scanf("%d %d %d", &day, &month, &year);
                printf("Enter Employee Graduation CGPA: \n");
                scanf("%f", &cgpa);
                printf("Enter Employee Graduation college: \n");
                scanf("%39s", gradclg);
                printf("Enter number of companies worked: \n");
                scanf("%d", &compworked);
                printf("Enter years of experience: \n");
                scanf("%d", &expyrs);
                printf("Enter previously worked organisation: \n");
                scanf("%39s", prevorg);
                printf("****EXPERIENCED EMPLOYEE DETAILS ADDED****\n");
                emp = (*fp1)(emp, empname, phone_no, mail, e_id, BU, role, address, citizenship, adhaar, pan, ctc, month, day, year, marital_status, gradclg, cgpa, prevorg, expyrs, compworked, salary, leave, personal_mail_id, noofdatt, noofleaves);
                break;
            }

            case 3:
            {
                int em_id;
                printf("Enter employee id to be deleted: \n");
                scanf("%d", &em_id);
                user id = (*fp3)(emp, em_id, &temp, &see);
                printf("Employee details is successfully deleted \n");
            }
            default:
                printf("Exit\n");

                break;
            }
            break;

        case 2:
            printf("1.Update Employee Details.\n");
            printf("Press 0 to exit.\n");
            printf("Enter the choice: \n");
            int op;
            scanf("%d", &op);
            switch (op)
            {
            case 1:
            {
                printf("Enter Employee ID:\n");
                scanf("%d", &e_id);
                user id1 = (*fp3)(emp, e_id, &temp, &see);
                if (id1 == EMPID_DOESNT_EXISTS)
                {
                    printf("Employee ID doesnot exsist\n\n");
                    break;
                }
                if (see = 1)
                {
                    int choice;
                    printf("Choose any of the below options you want to update: ");
                    printf("1. Update Name; \n");
                    printf("2. Update Salary: \n");
                    printf("3. Update Leaves: \n");
                    printf("4. Update Address: \n");
                    printf("5. Update Personal MailID: \n");
                    printf("6. Update Phone number: \n");
                    printf("7. Update Marital Status: \n");
                    printf("8. Update BU: \n");
                    printf("9. Update Role: \n");
                    scanf("%d", &choice);
                    user id;
                    switch (choice)
                    {
                    case 1:
                        printf("Enter the name: \n");
                        //scanf("%99s", empname);
                        id = (*fp2)(emp, e_id, choice, 0);
                        if (validname(empname) == 0)
                        {
                            printf("INCORRECT NAME \n");
                            break;
                        }
                        break;
                    case 2:
                        printf("Enter the salary: \n");
                        id = (*fp2)(emp, e_id, choice, 0);
                        //scanf("%d", &salary);
                        break;
                    case 3:
                        printf("Enter the leave: \n");
                        //scanf("%d", &leave);
                        id = (*fp2)(emp, e_id, choice, 0);
                        break;
                    case 4:
                        printf("Enter the address: \n");
                        //scanf("%99s", address);
                        id = (*fp2)(emp, e_id, choice, 0);
                        break;
                    case 5:
                        printf("Enter the personal mail id: \n");
                        //scanf("%14s", personal_mail_id);
                        /*if (validmail(personal_mail_id) == 0)
                        {
                            printf("INCORRECT MAIL ID \n");
                            break;
                        }*/
                        id = (*fp2)(emp, e_id, choice, 0);
                        break;
                    case 6:
                        printf("Enter the phone number: \n");
                        //scanf("%s", phone_no);
                        /*if (validphno(phone_no) == 0)
                        {
                            printf("INCORRECT PHONE NUMBER \n");
                            break;
                        }*/
                        id = (*fp2)(emp, e_id, choice, 0);
                        break;
                    case 7:
                        printf("Enter the marital status: \n");
                        //scanf("%50s", marital_status);
                        id = (*fp2)(emp, e_id, choice, 0);
                        break;
                    case 8:
                        printf("Enter the BU: \n");
                        //scanf("%50s", BU);
                        /*if (checkBU(BU) == 0)
                        {
                            printf("INCORRECT BU");
                            break;
                        }*/
                        id = (*fp2)(emp, e_id, choice, 0);
                        break;
                    case 9:
                        printf("Enter the role: \n");
                        //scanf("%30s", role);
                        if (checkRole(role) == 0)
                        {
                            printf("INCORRECT ROLE");
                            break;
                        }
                        id = (*fp2)(emp, e_id, choice, 0);

                        break;
                    }
                    //user id = (*fp2)(emp, e_id, choice, 0);
                    printf("\n\n***DETAILS UPDATED \n\n");
                    break;
                }
                else
                {
                    printf("\n\n NO RECORD FOUND \n\n");
                    break;
                }
            }
            }
            break;
        case 3:

            printf("1. To search employees by Joining Date\n");
            printf("2. To search employees from BU unit\n");
            printf("3. To search employees by roles\n");
            int opt;
            scanf("%d", &opt);
            switch (opt)
            {
            case 1:
                printf("Enter Joining Date\n");
                int date1, month1, year1;
                scanf("%d", &date1);
                printf("Enter joining month\n");
                scanf("%d", &month1);
                printf("Enter joining year\n");
                scanf("%d", &year1);
                if (checkDate(date1, month1, year1))
                {
                    searchJoiningDate(emp, date1, month1, year1);
                    break;
                }
                else
                {
                    printf("Enter Correct Date");
                }
                break;

            case 2:
                printf("Enter BU\n");
                char bu1[20];
                scanf("%19s", bu1);
                if (checkBU(bu1))
                {
                    searchBU(emp, bu1);
                    break;
                }
                else
                {
                    printf("BU entered is incorrect");
                }
                break;

            case 3:
                printf("Enter Role\n");
                char role1[20];
                scanf("%19s", role1);
                if (checkRole(role1))
                {
                    searchRole(emp, role1);
                    break;
                }
                else
                {
                    printf("Role entered is incorrect");
                }
                break;

            default:
                break;
            }
            break;
        case 4:
            printf("1:Attendance.\n2.Leaves.\n3.Exit\n");
            printf("Enter the choice: \n");
            int opti;
            scanf("%d", &opti);
            switch (opti)
            {
            case 1:
            {
                /*printf("Enter Employee id:\n");
                int e_id1;
                scanf("%d", &e_id1);
                user id = (*fp3)(emp, e_id1, &temp, &see);
                if (id == EMPID_DOESNT_EXISTS)
                {
                    printf("EMPLOYEE ID DOESNOT EXSIST\n\n");
                    break;
                }*/
                printf("Enter no.of.days present in this month:\n");
                int noofdatt1;
                scanf("%d", &noofdatt1);
                //att->emp_id = empid;
                //att->no_of_datt= noofdatt;
                printf("Attendance report of this month: ");
                int atten = (*fp4)(noofdatt1);
                printf("%d", atten);
                break;
            }
            case 2:
            {
                /*printf("Enter Employee id:\n");
                int e_id1;
                scanf("%d", &e_id1);
                user id = (*fp3)(emp, e_id1, &temp, &see);
                if (id == EMPID_DOESNT_EXISTS)
                {
                    printf("EMPLOYEE ID DOESNOT EXSIST\n\n");
                    break;
                }*/
                printf("Enter no.of.leaves taken\n");
                int noofleaves1;
                scanf("%d", &noofleaves1);
                printf("Number of leaves left: ");
                int atten = (*fp5)(noofleaves1);
                printf("%d", atten);
                break;
            }
            default:
                printf("exit\n");
                break;
            }
            break;
        case 5:
            printf("         ____Calculator____         \n");
            printf("  Press 1 for salary Calculation \n");
            printf("  Press 2 for Gratuity Calculation \n");
            printf("  Press 3 for Tax Calculation \n");
            printf("  Press 4 for PF Calculation \n");

            int option1;
            scanf("%d", &option1);
            switch (option1)
            {

            case 1:
            {
                int s_p_d, n_d_a;
                printf("Enter Salary per day: \n");
                scanf("%d", &s_p_d);
                printf("\n Enter the Number of days worked in office: \n");
                scanf("%d", &n_d_a);
                if (Sal_Cal(n_d_a, s_p_d) == 0)
                {
                    printf("Wrong Input\n");
                    break;
                }
                else
                {
                    printf("\nYour Monthly Salary is : %d \n", Sal_Cal(n_d_a, s_p_d));
                    break;
                }
                break;
            }
            case 2:
            {
                long int d_m_s;
                int n_y;
                printf(" Enter the Monthly Drawn Salary: ");
                scanf("%ld", &d_m_s);
                printf("\n Enter the number of Years: ");
                scanf("%d", &n_y);
                printf("\n Graduity \n");
                printf(" %d \n", Grat_Cal(d_m_s, n_y));
                break;
            }
            case 3:
            {
                long int s_p_m;
                printf(" Enter the Monthly Salary: ");
                scanf("%ld", &s_p_m);
                if (Tax_Cal(s_p_m) == 0)
                {
                    printf("No tax on your salary as it below 5LPA.\n");
                    break;
                }
                else
                {
                    printf("\n Monthly Tax Reduction \n");
                    printf("%d \n", Tax_Cal(s_p_m));
                    break;
                }
                break;
            }
            case 4:
            {
                long int s_p_m;
                printf(" Enter the Monthly Salary: ");
                scanf("%ld", &s_p_m);
                printf("\n Monthly PF Reduction  \n");
                printf("%f \n", pf_Cal(s_p_m));
                break;
            }
            break;
        }
            break;
        case 6: // Display
            (*fp6)(emp);
            break;
        }
        /* default:
        {
            break;
        }*/
        printf("\n1 to continue\n");
        printf("0 to stop");
        int enter;
        scanf("%d", &enter);
        if (enter == 0)
        {
            break;
        }
    }
    return 0;
}

