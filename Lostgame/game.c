#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "screen.h" //��..

int main()
{
    int game_state = 1;
    int input;

    while (game_state)
    {
        if (game_state == 1)
            print_title_screen();

        printf("�����ϼ���!(�ѱ��Է�x)> ");
        scanf_s("%d", &input);
        system("cls");
        if (input == 1)
        {
            print_playgame(); //���ӽ����ҋ� ó�������°�
            printf("�ε���...\n");
            Sleep(3000); // 3�� ���� ���
            system("cls"); //ȭ�������
            game_state = 0; // ���� ���� �� �ٷ� �����ϱ� ���� game_state ���� 0���� ����
        }
        else if (input == 2)
        {
            while (1)
            {
                print_infoscreen();

                printf("�޴��� ���ư��ڽ��ϱ�? (1.�� 2.��������) > ");
                scanf_s("%d", &input);

                if (input == 1)
                {
                    game_state = 1; // Ÿ��Ʋ ȭ������ ���ư��� ���� game_state ���� 1�� ����
                    break;
                }
            }
        }
        else if (input == 3)
        {
            printf("������ �����ϴ���...\n");
            Sleep(3000); // 3�� ���� ���
            printf("�����մϴ�.\n");
            game_state = 0;
        }
    }

    if (input == 1)
    {
        while (1)
        {

            print_school_choice(); //�б�������?


            printf("����������\n> ");
            scanf_s("%d", &input);

            if (input == 1)
            {
                system("cls");
                printf("�б��� �̵���...");
                Sleep(3000);
                system("cls");
                print_gamescreen(); //c��� ���Ǹ� �������ΰ� �ȵ������ΰ�

                printf("�����ϼ���> ");
                scanf_s("%d", &input);
                if (input == 1)
                {
                    system("cls");
                    printf("���ǽ� ������..");
                    Sleep(3000);
                    system("cls");
                    print_game2screen();
                    printf("�������� �����ϼ���!\n> ");
                    scanf_s("%d", &input);
                    system("cls");

                    if (input == 1)
                    {
                        printf("�ּ��� ���ؼ� ������ ���ߴ���...");
                        Sleep(3000);
                        system("cls");
                        // 50%�� Ȯ���� ���� �Ǵ� ���� ó����
                        srand(time(NULL));
                        int random = rand() % 2;  // 0 �Ǵ� 1 ���� �������� ������ �ϴ°�


                        if (random == 0)
                        {
                            // ����
                            printf("������ ���߾� �̹��ִ� ������ ������ ����!\n");
                            Sleep(3000);
                            system("cls");
                            print_B_gamescreen(); //c��� ������ ���� ���̼�
                            printf("�������� �����ϼ���! > ");
                            scanf_s("%d", &input);

                            if (input == 1)
                            {
                                // 1. �׸��� ���� �� ó���� ���� 

                                srand(time(NULL));
                                int random = rand() % 2;  // 0 �Ǵ� 1 ���� �������� ����

                                if (random == 0)
                                {
                                    // ����
                                    system("cls");
                                    printf("��Ʋ�� ������ ������ �׸��µ� �����ߴ�. \n");
                                    Sleep(3000);
                                    system("cls");
                                    print_Happeyscreen(); //���ǿ���
                                    break;
                                }
                                else
                                {
                                    // ����
                                    system("cls");
                                    printf("��Ʋ�� ������ ������ �׸��µ� �����ߴ�. .\n");
                                    Sleep(3000);
                                    system("cls");
                                    print_goodendingscreen(); //�¿���
                                    break;
                                }

                            }
                            else if (input == 2)
                            {
                                //���������� �׸��°��
                                system("cls");
                                printf("���������� �׸�����...");
                                Sleep(3000);
                                system("cls");
                                print_goodendingscreen(); //�¿���
                                break;
                            }


                        }
                        else
                        {
                            // ����
                            printf("������ ���ߴµ� �����Ͽ� ������ �����..\n");
                            Sleep(3000);
                            system("cls");
                            print_A_gamescreen(); //c��� ������ �ִ� ���̼�
                            printf("�������� �����ϼ���! > ");
                            scanf_s("%d", &input);

                            if (input == 1)
                            {
                                // 1. �׸��� ���� �� ó���� ���� 

                                srand(time(NULL));
                                int random = rand() % 2;  // 0 �Ǵ� 1 ���� �������� ����

                                if (random == 0)
                                {
                                    // ����
                                    system("cls");
                                    printf("��Ʋ�� ������ ������ �׸��µ� �����ߴ�. \n");
                                    Sleep(3000);
                                    system("cls");
                                    print_goodending2screen(); //�¿���2
                                    break;

                                }
                                else
                                {
                                    // ����
                                    system("cls");
                                    printf("��Ʋ�� ������ ������ �׸��µ� �����ߴ�. .\n");
                                    Sleep(3000);
                                    system("cls");
                                    print_Sadendingscreen(); //���忣��
                                    break;

                                }
                                // ���� ��
                            }
                            else if (input == 2)
                            {
                                system("cls");
                                printf("���������� �׸�����...");
                                Sleep(3000);
                                system("cls");
                                print_Sadendingscreen(); //���忣��2
                                break;
                            }
                        }
                        // ���� 
                    }
                    else if (input == 2)
                    {
                        printf("�׷��� �𸥴� �ϴ��� Ǯ��� �Ѵ�...");
                        Sleep(3000);
                        system("cls");
                        printf("�ּ��� ���� ��� ������ �������...");
                        Sleep(3000);
                        system("cls");
                        print_Sadending2screen();
                        break;
                        // ����� ���� ��
                    }
                    break;
                }

                else if (input == 2)
                {
                    system("cls");
                    printf("������ ������...");
                    Sleep(3000);
                    system("cls");
                    print_Beadscreen(); //c���Ǹ� �����ʴ°��...
                    break;

                }
                if (input == 1)
                    //�������������� �̰Ծ�����  print_school_choice()���� �б����Ȱ���
                    break;
            }
            else if (input == 2)
            {
                system("cls");
                print_Beadscreen(); //�б��� �����ʴ°��
                break;
            }
        }
    }

    return 0;
}