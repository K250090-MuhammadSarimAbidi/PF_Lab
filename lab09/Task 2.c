#include <stdio.h>

float calculateBonus(float salary) {
    if(salary < 30000)
        return salary * 0.2;
    else
        return salary * 0.1;
}

int main() {
    float salary[5], bonus, totalPayout = 0;

    for(int i = 0; i < 5; i++) {
        printf("Enter salary of employee %d: ", i + 1);
        scanf("%f", &salary[i]);
        bonus = calculateBonus(salary[i]);
        printf("Employee %d Bonus: %.2f\n", i + 1, bonus);
        totalPayout += salary[i] + bonus;
    }

    printf("Total Payout: %.2f\n", totalPayout);
    return 0;
}

