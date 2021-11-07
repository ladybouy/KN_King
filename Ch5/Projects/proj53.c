#include <stdio.h>

int main(void)
{
    int share_quantity;
    float value;
    float commission;
    float rival_commission;
    float price_per_share;

    printf("Enter the number shares: ");
    scanf("%d", &share_quantity);
    printf("Enter the price per share: ");
    scanf("%f", &price_per_share);

    value = share_quantity * price_per_share;
    
    if (value < 2500.00f) {
        commission = 30.00f + 0.017f * value;
    } else if (value < 6250.00f) {
        commission = 56.00f + .0066f * value;
    } else if (value < 20000.00f) {
        commission = 76.00f + .0034f * value;
    } else if ( value < 50000.00f) { 
        commission = 100.00f + 0.0022f * value; 
    } else if (value < 500000.00f) {
        commission = 155.00f + .0011f * value; 
    } else {
        commission = 255.00f + .0009f * value;
    }
    if (commission < 39.00f) {
        commission = 39.00f;
    }
    
    if (share_quantity < 2000) {
        rival_commission = 33.0 + 0.03 * share_quantity;
    } else {
        rival_commission = 33.0 + 0.02 * share_quantity;
    }
    
    printf("Commission: $%.2f\n", commission);
    printf("Rival commission: $%.2f\n", rival_commission);

    return 0;
}
