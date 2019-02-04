#include<stdio.h>
float calgrade(int score){
    if(score>=80 && score <= 100){
        return 4;
    }else if(score>=75) {
        return 3.5;
    }else if(score>=70) {
        return 3;
    }else if(score>=65) {
        return 2.5;
    }else if (score>=60) {
        return 2;
    }else if (score>=55) {
        return 1.5;
    }else if (score>=50) {
        return 1;
    }else if (score >= 0) {
        return 0;
    }else{
        return -1;
    }
}

int main(){
    int score;
    float grade;
    scanf("%d",&score);
    grade = calgrade(score);
    if(grade == -1) {
        printf("Error");
    }else{
        printf("%.2f\n",grade);
    }
    return 0;
}