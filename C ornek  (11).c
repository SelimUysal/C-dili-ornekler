#include<stdio.h>
double percentageVote(int sum, int vote);
int main(){

    int votes[5], i, sum=0;

    for(i=0;i<5;i++){
        printf( "Enter votes of the %d. party: ", i+1);
        scanf("%d", &votes[i]);
        sum += votes[i];
    }
    printf("\n");
    int winner = votes[0];
    int index = 0;
    for(i=0;i<5;i++){
        printf("Votes of the %d. party is %d and take %.2lf %% of the total votes.\n", i+1, votes[i], percentageVote(sum, votes[i]) );
        if(votes[i] > winner){
            winner = votes[i];
            index = i;
        }
    }
    printf("\n%d. party wins the election.", index+1);

    return 0;
}

double percentageVote(int sum, int vote){
    double per;
    per = 100.0*vote/sum;
    return per;
}
