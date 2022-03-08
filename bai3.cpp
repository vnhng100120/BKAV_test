#include<conio.h>
#include<stdio.h>
int main(){
    int n = 365219;
    int sotachra;
    int s = 0;
    for(;n!=0;){
        sotachra = n % 10;
        s += sotachra;
        n /= 10;
    }    
    printf("%d",s);
}
