#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "screen.h" //흠..

int main()
{
    int game_state = 1;
    int input;

    while (game_state)
    {
        if (game_state == 1)
            print_title_screen();

        printf("선택하세여!(한글입력x)> ");
        scanf_s("%d", &input);
        system("cls");
        if (input == 1)
        {
            print_playgame(); //게임시작할떄 처음나오는거
            printf("로딩중...\n");
            Sleep(3000); // 3초 동안 대기
            system("cls"); //화면지우기
            game_state = 0; // 게임 종료 후 바로 종료하기 위해 game_state 값을 0으로 설정
        }
        else if (input == 2)
        {
            while (1)
            {
                print_infoscreen();

                printf("메뉴로 돌아가겠습니까? (1.네 2.싫은데요) > ");
                scanf_s("%d", &input);

                if (input == 1)
                {
                    game_state = 1; // 타이틀 화면으로 돌아가기 위해 game_state 값을 1로 설정
                    break;
                }
            }
        }
        else if (input == 3)
        {
            printf("게임을 종료하는중...\n");
            Sleep(3000); // 3초 동안 대기
            printf("감사합니다.\n");
            game_state = 0;
        }
    }

    if (input == 1)
    {
        while (1)
        {

            print_school_choice(); //학교갈꼬임?


            printf("선택지선택\n> ");
            scanf_s("%d", &input);

            if (input == 1)
            {
                system("cls");
                printf("학교로 이동중...");
                Sleep(3000);
                system("cls");
                print_gamescreen(); //c언어 강의를 들을것인가 안들을것인가

                printf("선택하세욧> ");
                scanf_s("%d", &input);
                if (input == 1)
                {
                    system("cls");
                    printf("강의실 들어가는중..");
                    Sleep(3000);
                    system("cls");
                    print_game2screen();
                    printf("선택지를 선택하세요!\n> ");
                    scanf_s("%d", &input);
                    system("cls");

                    if (input == 1)
                    {
                        printf("최선을 다해서 문제를 맞추는중...");
                        Sleep(3000);
                        system("cls");
                        // 50%의 확률로 성공 또는 실패 처리값
                        srand(time(NULL));
                        int random = rand() % 2;  // 0 또는 1 값을 랜덤으로 생성을 하는거


                        if (random == 0)
                        {
                            // 성공
                            printf("문제를 맞추어 이번주는 다행히 과제가 없다!\n");
                            Sleep(3000);
                            system("cls");
                            print_B_gamescreen(); //c언어 과제가 없는 파이선
                            printf("선택지를 선택하세요! > ");
                            scanf_s("%d", &input);

                            if (input == 1)
                            {
                                // 1. 그린다 선택 시 처리할 내용 

                                srand(time(NULL));
                                int random = rand() % 2;  // 0 또는 1 값을 랜덤으로 생성

                                if (random == 0)
                                {
                                    // 성공
                                    system("cls");
                                    printf("터틀로 제시한 도형을 그리는데 성공했다. \n");
                                    Sleep(3000);
                                    system("cls");
                                    print_Happeyscreen(); //해피엔딩
                                    break;
                                }
                                else
                                {
                                    // 실패
                                    system("cls");
                                    printf("터틀로 제시한 도형을 그리는데 실패했다. .\n");
                                    Sleep(3000);
                                    system("cls");
                                    print_goodendingscreen(); //굿엔딩
                                    break;
                                }

                            }
                            else if (input == 2)
                            {
                                //순수힘으로 그리는경우
                                system("cls");
                                printf("순수힘으로 그리는중...");
                                Sleep(3000);
                                system("cls");
                                print_goodendingscreen(); //굿엔딩
                                break;
                            }


                        }
                        else
                        {
                            // 실패
                            printf("문제를 맞추는데 실패하여 과제가 생겼다..\n");
                            Sleep(3000);
                            system("cls");
                            print_A_gamescreen(); //c언어 과제가 있는 파이선
                            printf("선택지를 선택하세요! > ");
                            scanf_s("%d", &input);

                            if (input == 1)
                            {
                                // 1. 그린다 선택 시 처리할 내용 

                                srand(time(NULL));
                                int random = rand() % 2;  // 0 또는 1 값을 랜덤으로 생성

                                if (random == 0)
                                {
                                    // 성공
                                    system("cls");
                                    printf("터틀로 제시한 도형을 그리는데 성공했다. \n");
                                    Sleep(3000);
                                    system("cls");
                                    print_goodending2screen(); //굿엔딩2
                                    break;

                                }
                                else
                                {
                                    // 실패
                                    system("cls");
                                    printf("터틀로 제시한 도형을 그리는데 실패했다. .\n");
                                    Sleep(3000);
                                    system("cls");
                                    print_Sadendingscreen(); //새드엔딩
                                    break;

                                }
                                // 도전 후
                            }
                            else if (input == 2)
                            {
                                system("cls");
                                printf("순수힘으로 그리는중...");
                                Sleep(3000);
                                system("cls");
                                print_Sadendingscreen(); //새드엔딩2
                                break;
                            }
                        }
                        // 도전 
                    }
                    else if (input == 2)
                    {
                        printf("그러나 모른다 하더라도 풀어야 한다...");
                        Sleep(3000);
                        system("cls");
                        printf("최선을 다한 결과 과제가 생기는중...");
                        Sleep(3000);
                        system("cls");
                        print_Sadending2screen();
                        break;
                        // 몰라요 선택 시
                    }
                    break;
                }

                else if (input == 2)
                {
                    system("cls");
                    printf("집으로 가는중...");
                    Sleep(3000);
                    system("cls");
                    print_Beadscreen(); //c언어강의를 듣지않는경우...
                    break;

                }
                if (input == 1)
                    //왠진몰르겟지만 이게없으면  print_school_choice()에서 학교가안가짐
                    break;
            }
            else if (input == 2)
            {
                system("cls");
                print_Beadscreen(); //학교를 가지않는경우
                break;
            }
        }
    }

    return 0;
}