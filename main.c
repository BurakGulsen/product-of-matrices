#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<time.h>






float** createMatrix(int boyut )
{

    float ** vector = (float ** )(malloc(boyut*sizeof(float*)));

    int i;
    for(i=0; i<boyut; i++)
    {
        vector[i]= (float*) malloc(boyut*sizeof(float));
    }
    return vector;
}


void fillMatrix(float **v,int boyut)
{

    int i,j;
    srand(time(0));
    for(i=0; i<boyut; i++)
    {
        for(j=0; j<boyut; j++)
        {

            v[i][j]=(rand()%2)+2;
        }
    }

}

//kontrol amacli
void printMatrix(float** v, int boyut)
{
    int i,j;

    for(i=0; i<boyut; i++)
    {
        for(j=0; j<boyut; j++)
        {
            printf("%.2f \t",v[i][j]);
        }
        puts(" ");
    }

}


float ** matrixMatrixMultiply(float** vector1,float**vector2,float** vector3,int boyut)
{

    int i,j,k;

    for(i=0; i<boyut; i++)
    {
        for(j=0; j<boyut; j++)
        {

            for(k=0; k<boyut; k++)
            {
                vector3[i][j] += vector1[i][k] * vector2[k][j];


            }

        }

    }
    printf("Matrisler carpildi.\n");
    return vector3;
}

float ** matrixMatrixMultiply2(float** vector1,float**vector2,float** vector3,int boyut)
{

    int i,j,k;


    for(i=0; i<boyut; i++)
    {
        for(k=0; k<boyut; k++)
        {

            for(j=0; j<boyut; j++)
            {
                vector3[i][j] += vector1[i][k] * vector2[k][j];


            }

        }

    }
    printf("Matrisler carpildi.\n");
    return vector3;
}

float ** matrixMatrixMultiply3(float** vector1,float**vector2,float** vector3,int boyut)
{

    int i,j,k;


    for(j=0; j<boyut; j++)
    {
        for(i=0; i<boyut; i++)
        {

            for(k=0; k<boyut; k++)
            {
                vector3[i][j] += vector1[i][k] * vector2[k][j];


            }

        }

    }
    printf("Matrisler carpildi.\n");
    return vector3;
}

float ** matrixMatrixMultiply4(float** vector1,float**vector2,float** vector3,int boyut)
{

    int i,j,k;


    for(j=0; j<boyut; j++)
    {
        for(k=0; k<boyut; k++)
        {

            for(i=0; i<boyut; i++)
            {
                vector3[i][j] += vector1[i][k] * vector2[k][j];


            }

        }

    }
    printf("Matrisler carpildi.\n");
    return vector3;
}

float ** matrixMatrixMultiply5(float** vector1,float**vector2,float** vector3,int boyut)
{

    int i,j,k;


    for(k=0; k<boyut; k++)
    {
        for(i=0; i<boyut; i++)
        {

            for(j=0; j<boyut; j++)
            {
                vector3[i][j] += vector1[i][k] * vector2[k][j];


            }

        }

    }
    printf("Matrisler carpildi.\n");
    return vector3;
}


float ** matrixMatrixMultiply6(float** vector1,float**vector2,float** vector3,int boyut)
{

    int i,j,k;


    for(k=0; k<boyut; k++)
    {
        for(j=0; j<boyut; j++)
        {

            for(i=0; i<boyut; i++)
            {
                vector3[i][j] += vector1[i][k] * vector2[k][j];


            }

        }

    }
    printf("Matrisler carpildi.\n");
    return vector3;
}


int main(void)
{

    int boyut;

    printf("Lutfen matrisin boyutunu giriniz.\n");

    scanf("%d",&boyut);

    float** vector1= createMatrix(boyut);

    float** vector2= createMatrix(boyut);

    float** vector3= createMatrix(boyut);


    printf("Matrisler olusturuldu.\n");



    fillMatrix(vector1,boyut);

    fillMatrix(vector2,boyut);

    fillMatrix(vector3,boyut);


    printf("Matrisler dolduruldu.\n");

    time_t start, finish ;

    start = time (NULL) ;

    float *vector4= matrixMatrixMultiply3(vector1,vector2,vector3,boyut);

    finish = time(NULL);

    printf("Carpma islemi icin gecen sure = %.2f sn", difftime(finish,start));

    getch();

    return 0;

}
