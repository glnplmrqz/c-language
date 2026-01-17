/*
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

    int main()
    {
        char employeeName[100], employeeStatus[100], employeeDepartment[100];
        int employeeID, daysWork, dailyRate, grossPay;

        // Input
        printf("\n =========== WELCOME TO BASIC PAYROLL SAMPLE =========== \n");
        printf(" Enter your name        : ");
        fgets(employeeName, 100, stdin);
        employeeName[strlen(employeeName) - 1] = '\0';
        printf(" Employee ID            : ");
        scanf("%d", &employeeID);
        getchar();
        printf(" Status                 : ");
        fgets(employeeStatus, 100, stdin);
        employeeStatus[strlen(employeeStatus) - 1] = '\0';
        printf(" Department             : ");
        fgets(employeeDepartment, 100, stdin);
        employeeDepartment[strlen(employeeDepartment) - 1] = '\0';
        printf(" Days Worked            : ");
        scanf("%d", &daysWork);
        printf(" Daily Rate             : ");
        scanf("%d", &dailyRate);

        // Display
        printf(" =========== PAY SLIP RECEIPT ============= \n");
        printf(" Employee Name          : %s\n", employeeName);
        printf(" Employee ID            : %d\n", employeeID);
        printf(" Emp Status             : %s\n", employeeStatus);
        printf(" Department             : %s\n", employeeDepartment);
        printf(" Days Worked            : %d Days.\n", daysWork);
        printf(" Daily Rate             : %d Pesos.\n", dailyRate);
        
        // Formula
        grossPay = daysWork * dailyRate;
        printf(" Gross Pay              : %d \n", grossPay);

        // Display
        printf(" =========== DEDUCTIONS =========== \n");
        double lessTax = 350.75, pagibig = 100.5, totalDeductions, netPay;
        int sss = 500, philhealth = 100;

        printf(" LESS TAX               : %.2lf \n", lessTax);
        printf(" SSS                    : %d \n", sss);
        printf(" Philhealth             : %d \n", philhealth);
        printf(" Pag-Ibig               : %.1lf \n", pagibig);

        // Formula
        totalDeductions = lessTax + sss + philhealth + pagibig;
        printf("\n Total Deductions       : %.2lf \n", totalDeductions);
        printf(" ======================================== \n");

        // Formula
        netPay = grossPay - totalDeductions;
        printf(" Total Net Pay          : %.2lf Pesos \n", netPay);
        return 0;
    }