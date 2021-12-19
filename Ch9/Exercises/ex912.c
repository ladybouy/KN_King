
double inner_product(double a[], double b[], int n)
{
    double product_sums = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            product_sums += a[i] * b[i];
        }
    }
    return product_sums;
}
