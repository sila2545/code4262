#include<iostream>
#include<cstdio>
using namespace std;
void switcher(int x , char y , int z){
    switch(y){
        case '+' : printf("%d + %d = %d",x,z,x+z);
            break;
        case '-' : printf("%d - %d = %d",x,z,x-z);
            break;
        case '*' : printf("%d * %d = %d",x,z,x*z);
            break;
        case '/' : 
            if(z == 0){
                printf("Error");
            }else{
                printf("%d / %d = %d\n",x,z,x/z);
            }
            break;
        default:cout << "Error";
    }
}
int main(){
    int x,z;
    char y;
    cout << "Input + - * /";
    cin >> y;
    cout << "Input num1 :";
    cin >> x;
    cout << "Input num2 :";
    cin >> z;
    switcher(x,y,z);
    printf("\n");
}
