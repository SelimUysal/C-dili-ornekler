#include<stdio.h>
int countdigit1(int a[], int size);
int countdigit2(int a[], int size);
int main(){
    int i, arr[10];

    printf("Enter 10 elements in array: ");
    for(i=0;i<10;i++){
        scanf("%d", &arr[i]);
    }
    printf("There are %d elements with two digits.\n", countdigit1(arr, 10) );
    printf("There are %d elements with two digits.\n", countdigit2(arr, 10) );
    return 0;
}

int countdigit1(int a[], int size){
    int i, counter=0;
    for(i=0;i<size;i++){
        if( (a[i]>=10 && a[i]<=99) || (a[i]>=-99 && a[i]<=-10) ){
            counter++;
        }
    }
    return counter;
}

int countdigit2(int a[], int size){
    int i, counter=0, result_counter=0;
    for(i=0;i<size;i++){
        counter=0;
        while(a[i]!=0){
            a[i]=a[i]/10;
            counter++;
        }
        if(counter==2){
            result_counter++;
        }
    }
    return result_counter;
}
