#include <stdio.h>                                                          //KHAI BAO THU VIEN 
#include <conio.h>                                                          //KHAI BAO THU VIEN  

void main()                                                                 //KHAI BAO HAM MAIN

{
    int x;                                                                  //KHAI BAO BIEN X
    char name[10];                                                          //KHAI BAO CHUOI NAME
    printf("Ten: ");                                                        //NHAP TEN
    scanf("%s",name);                                                       //IN RA MAN HINH
    do                                                                      //BAT DAU KIEM TRA 
    {                                                                       
        printf("\nNam sinh: ");                                             //NHAP NAM XIN 
        scanf("%d",&x);                                                     //IN RA MAN HINH
    } while ( x > 2018);                                                    //KIEM TRA. NEU CHO NAM SINH >2018 THI CHAY LAI
    printf("\nXin chao ban %s.Ban dang %d tuoi.",name,2018-x);              //CHO RA KET QUA
    getch();                                                                //DUNG MAN HINH                                  
                                                              
}
