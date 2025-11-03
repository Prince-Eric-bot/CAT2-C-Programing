/*
Name: Erick Mburu
Reg: PA106/G/28729/25
Desc: Question two
*/
int main(){ 

float hours

int main() {
float hours, wage, gross_pay, taxes, net_pay;
    
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);
    
    printf("Enter hourly wage: ");
    scanf("%f", &wage);
    
    if (hours <= 40)
        gross_pay = hours * wage;
    else
        gross_pay = (40 * wage) + ((hours - 40) * wage * 1.5);
    
    if (gross_pay <= 600)
        taxes = 0.15 * gross_pay;
    else
        taxes = (0.15 * 600) + (0.20 * (gross_pay - 600));
    
    net_pay = gross_pay - taxes;
    
    printf("\nGross Pay: $%.2f", gross_pay);
    printf("\nTaxes: $%.2f", taxes);
    printf("\nNet Pay: $%.2f\n", net_pay);
    
    return 0;
}
