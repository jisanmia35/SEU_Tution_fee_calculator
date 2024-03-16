#include <stdio.h>

int main(){
    int perCradit = 3850;

    int cradit;
    printf("Ener your credit = ");
    scanf("%d", &cradit);

    int waiver;
    printf("Ener your waiver pecentage = ");
    scanf("%d", &waiver);

    int courseFee = (perCradit * cradit);
    double totalSemesterFeeWithOutWaiver = courseFee + 3500;


    double stInstallment = (totalSemesterFeeWithOutWaiver * 0.4);
    double ndInstallment = (totalSemesterFeeWithOutWaiver * 0.3);
    double rdInstallment = (totalSemesterFeeWithOutWaiver * 0.3) - (courseFee * (waiver/100.00));
    if(rdInstallment < 0){
        ndInstallment += rdInstallment;
        rdInstallment = 0;
    }
    if(ndInstallment < 0){
        stInstallment += ndInstallment;
        ndInstallment = 0;
    }

    printf("Congratulation you have successfully lost = %.2lf tk\n", stInstallment+ndInstallment+rdInstallment);
    printf("1st Installment = %.2lf\n2nd Installment = %.2lf\n3rd Installment = %.2lf\n", stInstallment, ndInstallment, rdInstallment);

  return 0;
}
