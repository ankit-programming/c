#include <stdio.h>

// give name to all function we ant to creat
float add(float a , float b);
float sub(float a , float b);
float mul(float a , float b);
float div(float a , float b);


int main(){
        float a ,b ;
        int i;
        //int i;
        while (1){
        printf("1--add    2--sub    3--mul     4--div\n");
        scanf(" %d",&i);
        if (i==1){
            printf("OK you want to do addition so\n");
            printf("enter value of a --->");
            scanf("%f",&a);
            printf("enter value of b --->");
            scanf("%f",&b);
            add(a,b);
        }
        else if (i == 2){
            printf("OK you want to do subtraction so\n");
            printf("enter value of a --->");
            scanf("%f",&a);
            printf("enter value of b --->");
            scanf("%f",&b);
            sub(a,b);

        }
        else if (i == 3){
            printf("OK you want to do multiplication so\n");
            printf("enter value of a --->");
            scanf("%f",&a);
            printf("enter value of b --->");
            scanf("%f",&b);
            mul(a,b);
        }
        else if (i == 4){
            printf("OK you want to do division so\n");
            printf("enter value of a --->");
            scanf("%f",&a);
            printf("enter value of b --->");
            scanf("%f",&b);
            div(a,b);
        }   
        else{
            printf("Do not give irlevent  input\n");
        }            
            
        }
        
        
    return 0;
}

//defining what will they do
float add (float a, float b){
    float r = a+b;
    printf("add %f \n",r);
}

float sub(float a , float b ){
    float r;
    r = a-b;
    printf("sub %f \n",r);
}

float mul(float a , float b ){
    float r;
    r = a*b;
    printf("mul %f \n",r);
}

float div(float a , float b ){
    float r;
    r = a/b;
    printf("div %f \n",r);
}