#include <stdio.h>
#include <windows.h>//consoleâ �����
#include <conio.h>
#include <time.h>//time() 
#include <stdlib.h>//srand() 
#include <stdbool.h>//tru false
//21.10�� 20�ϱ��� �����
//������ 
//���Ŀ� ���� �߰��ϱ�
//�̸� �Է� ���� �� ĳ���� ���� �߰� �ϱ�
#define dino_bottom_y 12
#define car_1_bottom_y 13
//�ܼ�â ũ������ �Լ�
//system �Լ� �̿��ϱ�
void SetConsoleView()
{
	system("mode con:cols=120 lines=30");//console â ũ������
	system("title Chrome game homage by 5muji");

}
//Ŀ�� ��ġ ���� �Լ�
//�ܼ�â�� ���� �� �κ��� (0,0)�̴�.
void GotoXY(int x, int y)
{
	COORD pos;
	pos.X= 2 * x;//�ܼ� â���� x 2ĭ�̶� y��ĭ�̶� �����ϰ� ���̴�.
	pos.Y= y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
//Ű���� �Է��� �ް� ��ȯ�ϴ� �Լ�
void keyreward()
{
	if (_kbhit() != 0)
		return _getch();
	return 0;//else ����ϸ� �ȵǳ�
}

//�ð� �����Լ� �����

//clock �Լ� �̿��ϱ�

//�ڵ����׸��� �Լ�
void crong(int dinoY)//��ó : https://blockdmask.tistory.com/344 (�����մϴ�.��)
//���������� ������ ǥ��
{
    GotoXY(0, dinoY);
    static bool legFlag = true;//13ĭ ������ (�� 
    printf("        $$$$$$$ \n");
    printf("       $$ $$$$$$\n");
    printf("       $$$$$$$$$\n");
    printf("$      $$$      \n");
    printf("$$     $$$$$$$  \n");
    printf("$$$   $$$$$     \n");
    printf(" $$  $$$$$$$$$$ \n");
    printf(" $$$$$$$$$$$    \n");
    printf("  $$$$$$$$$$    \n");
    printf("    $$$$$$$$    \n");
    printf("     $$$$$$     \n");
    if (legFlag)//���� �Լ��� ������ ǥ���Ѱ� ����.
    {
        printf("     $    $$$    \n");
        printf("     $$          \n");
        legFlag = false;
    }
    else
    {
        printf("     $$$  $     \n");
        printf("          $$    ");
        legFlag = true;
    }
}
void car_1()
{//�ڵ��� �׸���
    GotoXY(0, car_1_bottom_y);
    static bool tire_1 = true;
    printf("   %%%%%%%%%%%% \n");
    printf("   %%%%%%%%%%%%%%%\n");
    printf("    %%%%%%%%%%%%%%%%\n");
    printf("     %%%%%%%%%%%%%%%%\n");
    printf("       %%%%%%%%%%%%%%%%\n");
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%\n");
    if (tire_1)
    {
        printf("    %%%          %%% \n");
        printf("   %   %        %   %\n");
        printf("    %%%          %%% \n");
        static tire_1 = false;
    }
    else
    {
        printf("\n");
        printf("\n");
        printf("\n");
        static tire_1 = true;
    }
}


//���º�ȭ �����ϱ�(������)
//�ð� ������ ��� ���ϱ�
//��Ʈ�ڽ� �߰��ϱ�


//�߻��Լ�

//���� ��ֹ� 5�� �����
void obstacle_1(int tree_x)//������ 3���� ����
{
    printf("");
    printf("");
    printf("");
    printf("");
    printf("");
    printf("");
    
}
//������

//������ �Լ�

//�̻��� �浿�Լ� ���� �浹 �Լ�

//�뷡�Լ� ���Խ�Ű��

//gameover ��

//�����Լ�
int main()
{
    SetConsoleView();//�ܼ� â �Լ�

   

    while (true)//���� �� ���� true�� ����
    {

    }

	return 0;
}
