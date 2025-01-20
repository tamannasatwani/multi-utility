#include <stdio.h>

int main() {
    float baseSalary, HRA_Percent, DA_Percent, TA_Percent;
    float HRA, DA, TA, grossSalary;

    printf("Enter the base salary: ");
    scanf("%f", &baseSalary);

    printf("Enter the HRA percentage: ");
    scanf("%f", &HRA_Percent);

    printf("Enter the DA percentage: ");
    scanf("%f", &DA_Percent);

    printf("Enter the TA percentage: ");
    scanf("%f", &TA_Percent);

    
    HRA = (HRA_Percent / 100) * baseSalary;
    DA = (DA_Percent / 100) * baseSalary;
    TA = (TA_Percent / 100) * baseSalary;

  
    grossSalary = baseSalary + HRA + DA + TA;

    
    printf("Gross Salary: Rs %.2f\n", grossSalary);

    return 0;
}

