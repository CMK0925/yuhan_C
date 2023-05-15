#include <stdio.h>


int title_screen();
int game_start_screen();
int game_info_screen();

int main()
{
    int game_state = 1;
    int choice;

    title_screen(); /* 타이틀 화면 출력 */

    while (game_state == 1)
    {
        printf("메뉴를 선택하세요: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            game_start_screen();
            break;
        case 2:
            game_info_screen();
            break;
        case 3:
        char screen[465]; /* 가로 : 30 + 1(개행문자)  세로 15 */
        int i = 0;
        while (i < 465)
    {
        if (i % 31 == 30)
            screen[i] = '\n'; /* 개행문자 삽입 */
        else
            screen[i] = '-';
        i = i + 1;
    }
    screen[465] = '\0';

    /* 문자열 가공3 게임종료 화면 */
    for (int row = 1; row <= 15; row++)
    {
        if (row == 8) {
            printf("-     게임을 종료합니다.     -\n");
        } else {
            for (int col = 1; col <= 30; col++)
            {
                if (col == 1 || col == 30 || row == 1 || row == 15)
                {
                    putchar(screen[(row - 1) * 31 + col - 1]);
                }
                else
                {
                    putchar(' ');
                }
            }
            putchar('\n');
        }
    }

            game_state = 0;
            break;
            default:
            printf("잘못된 입력입니다. 다시 선택해주세요.\n");
        }
    }

    return 0;
}

int title_screen()
{
    char screen[465]; /* 가로 : 30 + 1(개행문자)  세로 15 */
    int i = 0;
    while (i < 465)
    {
        if (i % 31 == 30)
            screen[i] = '\n'; /* 개행문자 삽입 */
        else
            screen[i] = '-';
        i = i + 1;
    }
    screen[465] = '\0';

    /* 문자열 가공 메인화면 */
    for (int row = 1; row <= 15; row++)
    {
        if (row == 8) {
            printf("-     1.게임시작             -\n");
            printf("-     2.게임정보             -\n");
            printf("-     3.게임 종료            -\n");
        } else {
            for (int col = 1; col <= 30; col++)
            {
                if (col == 1 || col == 30 || row == 1 || row == 15)
                {
                    putchar(screen[(row - 1) * 31 + col - 1]);
                }
                else
                {
                    putchar(' ');
                }
            }
            putchar('\n');
        }
    }
}


int game_start_screen()
{
    char screen[465]; /* 가로 : 30 + 1(개행문자)  세로 15 */
    int i = 0;
    while (i < 465)
    {
        if (i % 31 == 30)
            screen[i] = '\n'; /* 개행문자 삽입 */
        else
            screen[i] = '-';
        i = i + 1;
    }
    screen[465] = '\0';

    /* 문자열 가공2 게임실행 화면 */
    for (int row = 1; row <= 15; row++)
    {
        if (row == 8) {
            printf("-     장소 : 집              -\n");
            printf("-                            -\n");
            printf("-     힘든 하루엿다.         -\n");
        } else {
            for (int col = 1; col <= 30; col++)
            {
                if (col == 1 || col == 30 || row == 1 || row == 15)
                {
                    putchar(screen[(row - 1) * 31 + col - 1]);
                }
                else
                {
                    putchar(' ');
                }
            }
            putchar('\n');
        }
    }
}
int game_info_screen()
{
    char screen[465]; /* 가로 : 30 + 1(개행문자)  세로 15 */
    int i = 0;
    while (i < 465)
    {
        if (i % 31 == 30)
            screen[i] = '\n'; /* 개행문자 삽입 */
        else
            screen[i] = '-';
        i = i + 1;
    }
    screen[465] = '\0';

    /* 문자열 가공4 게임정보 화면 */
    for (int row = 1; row <= 15; row++)
    {
        if (row == 8) {
            printf("-     게임정보 : 일상        -\n");
            printf("-                            -\n");
            printf("-     0.1v                   -\n");
        } else {
            for (int col = 1; col <= 30; col++)
            {
                if (col == 1 || col == 30 || row == 1 || row == 15)
                {
                    putchar(screen[(row - 1) * 31 + col - 1]);
                }
                else
                {
                    putchar(' ');
                }
            }
            putchar('\n');
        }
    }
}
