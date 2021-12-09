#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


void Color(int couleurDuTexte,int couleurDeFond)
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}

void gotoligcol( int lig, int col ) {

    COORD mycoord;
    mycoord.X = col;
    mycoord.Y = lig;
    SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), mycoord );

}

void setConsoleSize()
{
    keybd_event(VK_MENU,0x38,0,0); //Appuie sur ALT
    keybd_event(VK_RETURN,0x1c,0,0); //Appuie ENTREE
    keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0); // Relache ENTREE
    keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0); //Relache ALT
}

void plateau()
{
    setConsoleSize();
    /// création de case de 18 sur 8
    int i,j;
    for(i=0;i<4;i++)
    {
        printf(" \n______________________________________________________________________________________________________________________________________________________"); /// 144
        for(j=0;j<8;j++)
        {
            printf("\n|                  |                  |                  |                  |                  |                  |                  |                 |");
        }
    }
    printf(" \n______________________________________________________________________________________________________________________________________________________");
    ///ligne 1
    gotoligcol(3,3);
    printf("CASE DEPART");
    gotoligcol(3,24);
    printf("case 1");
    gotoligcol(3,45);
    printf("case 2");
    gotoligcol(3,63);
    printf("case 3");
    gotoligcol(3,84);
    printf("case 4");
    gotoligcol(3,121);
    printf("case 5");
    gotoligcol(3,120);
    printf("case 6");
    gotoligcol(3,141);
    printf("case 7");
    gotoligcol(3,161);
    printf("case 8");
    ///ligne 2
    gotoligcol(22,3);
    printf("CASE DEPART");
    gotoligcol(22,24);
    printf("case 1");
    gotoligcol(22,45);
    printf("case 2");
    gotoligcol(22,63);
    printf("case 3");
    gotoligcol(22,84);
    printf("case 4");
    gotoligcol(22,120);
    printf("case 5");
    gotoligcol(22,120);
    printf("case 6");
    gotoligcol(22,141);
    printf("case 7");
    gotoligcol(22,160);
    printf("case 8");
}

int main()
{
    plateau();
    gotoligcol(100,1);
    return 0;
}
