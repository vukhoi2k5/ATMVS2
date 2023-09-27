#include "stdio.h"
#include "string.h"

int main()
{
    char i[50] ;
    int so, d , s=1000, sodu;
    printf(" nhap mat khau : \n");
    scanf("%s",i);


    if(strcmp(i,"khoivu2k5" )==0)
    {
        while(1)
        {
            printf("1.kiem tra so du\n");
            printf("2.rut tien\n");
            printf("3.ket thuc \n");
            printf("");
            scanf("%d",&so);
            do {
                switch (so) {

                    case 1:


                        printf("so du cua ban la : %d $", s);

                        break;

                    case 2 :

                        printf("nhap so tien ban muon rut : ");
                        scanf("%d", &d);
                        sodu = s - d;
                        printf("so du con lai cua ban la %d\n", sodu);
                        break;
                    case 3:

                        printf(" cam on ban dax su dung dich vu ATM");
                        break;

                }


                printf("1.kiem tra so du\n");// muốn nhập lại chương trình thì nhập lại cái trc hàm do

                printf("2.rut tien\n");
                printf("3.ket thuc \n");
                printf("");
                scanf("%d",&so);

            }
            while (so!=3 );



        }


    }
    else
    {
        printf("mat khau dell dung cu may nhap lai cho bo");
    }


    return 0;




}