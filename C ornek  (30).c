#include <stdio.h>
#define LENGTH 20
#define SALESPERSONCOUNT 5
struct salesperson{
    char name[LENGTH];
    int amountOfSold;;
};
int main(){
    int i;
    struct salesperson sp[SALESPERSONCOUNT];

    for(i=0; i<SALESPERSONCOUNT; i++){
        printf("Enter the name of salesperson: ");
        fgets(sp[i].name, LENGTH, stdin);
        sp[i].name[strcspn(sp[i].name, "\n")]='\0';

        printf("Enter the amount of sold: ");
        scanf("%d", &sp[i].amountOfSold);
        getchar();
    }
    double total = 0;
    for(i=0; i<SALESPERSONCOUNT; i++){
        total += sp[i].amountOfSold;
    }
    double avg = total/SALESPERSONCOUNT;
    double commision;
    for(i=0; i<SALESPERSONCOUNT; i++){
        commision=0;
        if(sp[i].amountOfSold<5000){
            commision += sp[i].amountOfSold*0.04;
        }else{
            commision += sp[i].amountOfSold*0.06;
        }
        if(sp[i].amountOfSold>avg){
            commision += 50;
        }
        printf("Commission of %s, after sold %d mount item, is %.2lf\n", sp[i].name, sp[i].amountOfSold, commision);
    }
    return 0;
}
