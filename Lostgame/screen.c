#include "screen.h" //��
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h> //�׷��� �̰� 5�� ����� ������ �����̵ȴ� ���ϱ�..? 

void print_title_screen()
{
    printf("###############################\n");
    printf("##                           ##\n");
    printf("##      ȭ������ ��        ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##  1. ���ӽ���              ##\n");
    printf("##  2. ���Ӽ���              ##\n");
    printf("##  3. ����                  ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("###############################\n");
}

void print_playgame()
{
    printf("###############################\n");
    printf("##                           ##\n");
    printf("##   �Ͼ�� ���� ����6�ô�.##\n");
    printf("##   �׸��� ȭ�����̴�...    ##\n");
    printf("##   �׷��� ���� �� �غ�   ##\n");
    printf("##   �ؾ��Ѵ�.               ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("###############################\n");
}

void print_infoscreen()
{
    printf("###############################\n");
    printf("##                           ##\n");
    printf("##        �÷��� ����        ##\n");
    printf("##                           ##\n");
    printf("##  1.�������� ���ؼ�        ##\n");
    printf("##    �پ��� ������ �����ִ� ##\n");
    printf("##  2.�������ϰ� � ���� ##\n");
    printf("##    �����ִ� ������ �ٸ�   ##\n");
    printf("##                           ##\n");
    printf("##   ����:��� �ѱ��Է½�  ##\n");
    printf("##    �ڵ����� 1������ ������##\n");
    printf("##         ��Ž:1��          ##\n");
    printf("##          �帣             ##\n");
    printf("##      ���ͷ�Ƽ��(�Ƹ�)     ##\n");
    printf("###############################\n");
}
void print_gamescreen()
{
    printf("###############################\n");
    printf("##                           ##\n");
    printf("##  ������ c��� ���ǿ�      ##\n");
    printf("##  ���̼��� �ִ� ���̴�.    ##\n");
    printf("##  �׷��� ���õ��� ������   ##\n");
    printf("##  ���� ���� �ʹ�.          ##\n");
    printf("##                           ##\n");
    printf("##  1. ���Ǹ� ��´�.        ##\n");
    printf("##  2. ������.               ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("###############################\n");
}
void print_Happeyscreen()
{
    printf("###############################\n");
    printf("##                           ##\n");
    printf("##        ���ǿ���           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##  ���̼� ������ ��Ʋ �׸�  ##\n");
    printf("##  �⵵ ���ﳡ���� c��� �� ##\n");
    printf("##  ���� ���� �ູ�� ȭ����  ##\n");
    printf("##  �� ���´�.               ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("###############################\n");
}

void print_Beadscreen()
{
    printf("###############################\n");
    printf("##                           ##\n");
    printf("##        ��忣��           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##  ���бⰡ ������... �ᱹ  ##\n");
    printf("##  �׋� �Ϸ�����ɷ� ������ ##\n");
    printf("##  �����ؼ� F������ �޾Ҵ�  ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("###############################\n");
}
void print_goodendingscreen()
{
    printf("###############################\n");
    printf("##                           ##\n");
    printf("##        �¿���             ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##  ��� ���̼��������� ���� ##\n");
    printf("##  �� ���ð��ȿ��� �������� ##\n");
    printf("##  c��� ������ ���      ##\n");
    printf("##  ������ ȭ������ ���´�.  ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("###############################\n");
}
void print_goodending2screen()
{
    printf("###############################\n");
    printf("##                           ##\n");
    printf("##        �¿���2             ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##  ���̼� ��Ʋ�׸��⸦ ���� ##\n");
    printf("##  �������� c��� ������ �� ##\n");
    printf("##  ���µ� ȭ���� �Ϸ縦     ##\n");
    printf("##  �� ���Ű���...           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("###############################\n");
}
void print_Sadendingscreen()
{
    printf("###############################\n");
    printf("##                           ##\n");
    printf("##        ���忣��           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##  ���̼� �����׸��⸦ ���� ##\n");
    printf("##  ���� ���Ͽ� ���� �ʰ� �� ##\n");
    printf("##  ���Ͽ���. c��� ������ ��##\n");
    printf("##  �� �־��� ���ΰŰ���.    ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("###############################\n");
}
void print_Sadending2screen()
{
    printf("###############################\n");
    printf("##                           ##\n");
    printf("##        ���忣��2          ##\n");
    printf("##                           ##\n");
    printf("##  �� ����..                ##\n");
    printf("##  ���̼��� ���ð��� ���Ͽ� ##\n");
    printf("##  �Ͱ� �ð��� �ʾ���       ##\n");
    printf("##  c��� ������ �ְ�        ##\n");
    printf("##  �־��� ȭ�����ΰŰ���.   ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("###############################\n");
}
void print_A_gamescreen()
{
    printf("###############################\n");
    printf("##                           ##\n");
    printf("##    �׷���.. c��� ������  ##\n");
    printf("##    �����...  T_T         ##\n");
    printf("##                           ##\n");
    printf("##    ����� ���̼� �ð���   ##\n");
    printf("##    ������ ���� ��Ʋ �ź���##\n");
    printf("##    �� ������ �׷��߸� ����##\n");
    printf("##    �� �����ִ� �� ���  ##\n");
    printf("##    �ұ�?                  ##\n");
    printf("##  1.���� ���� �׸���.(50��)##\n");
    printf("##  2.�ϴ� ȥ�� �غ���.      ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("###############################\n");
}
void print_B_gamescreen()
{
    printf("###############################\n");
    printf("##                           ##\n");
    printf("##    �̹��ִ�.. c��� ������##\n");
    printf("##    ����!!! ��.��          ##\n");
    printf("##                           ##\n");
    printf("##    ����� ���̼� �ð���   ##\n");
    printf("##    ������ ���� ��Ʋ �ź���##\n");
    printf("##    �� ������ �׷��߸� ����##\n");
    printf("##    �� �����ִ� �� ���  ##\n");
    printf("##    �ұ�?                  ##\n");
    printf("##     1.�׸���.(���۸� ��)  ##\n");
    printf("##     2.���Ƿ¸����� �׸��� ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("###############################\n");
}

void print_school_choice()
{
    printf("###############################\n");
    printf("##                           ##\n");
    printf("##        �б��� �����?     ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##  1. �б��� ����           ##\n");
    printf("##  2. ���� �ʴ´�           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("###############################\n");
}
void print_game2screen()
{
    printf("###############################\n");
    printf("##                           ##\n");
    printf("##   ����� c��� ������     ##\n");
    printf("##   ��������...             ##\n");
    printf("##   �����Բ��� ���� ������  ##\n");
    printf("##   �� �� ������ ���߸�     ##\n");
    printf("##   ������ �ȳ��ֽŴ� �Ѵ�. ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##     1.����..! (50��)      ##\n");
    printf("##     2.�����!             ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("###############################\n");
}