#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    double A;// Payment amount
    double B;//initialBalance
    double r;//interest rate
    int n; // total number payments or periods
     double intn;// paid principal
    double pn;// paid interest
    double bn;// new balance
    int m;
    int f;

    printf("Enter Amount of loan: ");
    scanf("%lf",&B);
    printf("Enter Interest rate per year:%% ");
    scanf("%lf",&r);
    printf("Enter number of payments: ");
    scanf("%d",&n);
        f=n;


    r=r/(100*12);





    A = B*(r*pow(1+r,n))/(pow(1+r,n)-1); // Payment per period


    printf("Monthly Payment should be %lf \n",A);
    printf("===============Amortization Schedule====================\n");



    printf("#Payment     Principal        Interest        Balance \n");
    //    printf("%d $%lf $%lf     $%lf     $%lf \n",m,A,intn,pn,bn);
    for ( m=1;m<=f;m++){
             intn = B*r; // paid principal
          pn = A - intn; // paid interest
          bn = B-pn; // newbalance

    if (bn <0)
    bn =0;


    printf("%d $%.2lf     $%.2lf            $%.2lf           $%.2lf \n",m,A,pn,intn,bn);
    B =bn;


    }


    return 0;
}

