    #include <stdio.h>


    double sqrt_custom(double x) {
    double guess = 1.0;
    double epsilon = 1e-6; 

    while (fabs(guess * guess - x) > epsilon) 
    {
        guess = 0.5 * (guess + x / guess);
    }

    return guess;
}

    int main() {
    
    double a, b, c;

    
    printf("Inserisci il coefficiente a: ");
    scanf("%lf", &a);

    printf("Inserisci il coefficiente b: ");
    scanf("%lf", &b);

    printf("Inserisci il coefficiente c: ");
    scanf("%lf", &c);

    
    double delta = b * b - 4 * a * c;

    
    if (delta > 0) {
        
        double x1 = (-b + sqrt_custom(delta)) / (2 * a);
        double x2 = (-b - sqrt_custom(delta)) / (2 * a);
        printf("Le radici dell'equazione sono reali e distinte:\n");
        printf("x1 = %.2lf\n", x1);
        printf("x2 = %.2lf\n", x2);
    } else if (delta == 0) {
        
        double x = -b / (2 * a);
        printf("L'equazione ha una radice reale coincidente:\n");
        printf("x = %.2lf\n", x);
    } else {
        
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt_custom(-delta) / (2 * a);
        printf("Le radici dell'equazione sono complesse:\n");
        printf("x1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("x2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }

    return 0;
}
