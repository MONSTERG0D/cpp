#include <stdio.h>

/* Function to calculate one Lagrange basis polynomial */

double calculateBasisPolynomial(
    int currentIndex,
    int degree,
    double xValues[],
    double targetX)
{
    double result = 1.0;

    for(int otherIndex = 0; otherIndex <= degree; otherIndex++)
    {
        if(otherIndex != currentIndex)
        {
            result = result *
                    (targetX - xValues[otherIndex]) /
                    (xValues[currentIndex] - xValues[otherIndex]);
        }
    }

    return result;
}


/* Function to calculate interpolated value */

double calculateInterpolatedValue(
    int degree,
    double xValues[],
    double yValues[],
    double targetX)
{
    double finalAnswer = 0.0;

    for(int i = 0; i <= degree; i++)
    {
        finalAnswer +=
            calculateBasisPolynomial(i, degree, xValues, targetX)
            * yValues[i];
    }

    return finalAnswer;
}


int main()
{
    int totalPoints;

    printf("Enter number of data points: ");
    scanf("%d", &totalPoints);

    int degree = totalPoints - 1;

    double xValues[totalPoints];
    double yValues[totalPoints];

    printf("Enter x values:\n");

    for(int i = 0; i < totalPoints; i++)
    {
        scanf("%lf", &xValues[i]);
    }

    printf("Enter y values:\n");

    for(int i = 0; i < totalPoints; i++)
    {
        scanf("%lf", &yValues[i]);
    }

    double targetX;

    printf("Enter x value to interpolate: ");
    scanf("%lf", &targetX);

    double answer =
        calculateInterpolatedValue(
            degree,
            xValues,
            yValues,
            targetX);

    printf("Interpolated value = %.4lf\n", answer);

    return 0;
}