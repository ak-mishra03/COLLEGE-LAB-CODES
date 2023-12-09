#include <stdio.h>
#include <windows.h>
 
int main()
{
    int hr,sc,mn;
    printf("Enter hour: ");
    scanf("%d",&hr);
    printf("Enter minutes: ");
    scanf("%d",&mn);
    for(int h =hr;h<24;h++)
    {
        for(int m=mn;m<60;m++)
        {
            for(sc=0;sc<60;sc++)
            { 
                if(h<12)
                {
                    system("cls");
                    printf("%02d:%02d:%02d A.M.",h,m,sc);
                    Sleep(1000);
                }
                else
                {
                    system("cls");
                    printf("%02d:%02d:%02d P.M.",h,m,sc);
                    Sleep(1000);
                }
            }
        }
    }
}

