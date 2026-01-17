/*
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

    int main()
    {
        char employeeName[100], employeePosition[100], employeeGender[100];
        int daysWork, ratePerDay, grossPay, sss, birTax, philhealth, totalDeductions, netPay;

        printf("\n\t === Laging Buhay Funeral Service === \n");
        printf("\t === Montalban Rodriguez Rizal === \n");
        printf("\t\t === 0912345694 === \n");

        // Input
        printf("\n Enter the Employees Name: ");
        fgets(employeeName, 100, stdin);
        employeeName[strlen(employeeName) - 1] = '\0';
        printf(" Enter the Employees Position: ");
        fgets(employeePosition, 100, stdin);
        employeePosition[strlen(employeePosition) - 1] = '\0';
        printf(" Enter Employees Gender: ");
        fgets(employeeGender, 100, stdin);
        employeeGender[strlen(employeeGender) - 1] = '\0';
        printf(" Enter Number of Days Work: ");
        scanf("%d", &daysWork);
        printf(" Enter Rate Per Day: ");
        scanf("%d", &ratePerDay);

        // Formula
        grossPay = daysWork * ratePerDay;

        // Display
        printf("\n Your Gross Pay is %d Php \n", grossPay);

        // Input
        printf("\n Enter Your SSS Deduction: ");
        scanf("%d", &sss);
        printf(" Enter Your BIR Tax Deduction: ");
        scanf("%d", &birTax);
        printf(" Enter Your PhilHealth Deduction: ");
        scanf("%d", &philhealth);

        // Formula
        totalDeductions = sss + birTax + philhealth;
        printf("\n Your Total Deduction is %d Php \n", totalDeductions);

        // Display
        printf("\n ***** EMPLOYEES PAYROLL RESULT ***** \n");
        printf("\n Name: %s\n", employeeName);
        printf(" Position: %s\n", employeePosition);
        printf(" Gender: %s\n", employeeGender);

        // Formula
        netPay = grossPay - totalDeductions;
        printf(" Net Pay: %d Php\n", netPay);
        return 0;
    }