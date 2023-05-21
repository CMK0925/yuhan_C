#include <stdio.h>


int clearBuffer(char* screenBuf, int width, int height)
{
    int i = 0;  /* 가로 인덱스 */
    int j = 0;  /* 세로 인덱스 */
    while (j < height)
    {
        while (i < width + 1) /* 개행문자 때문에 +1 */
        {
            if (i == width)
                screenBuf[i + (j * (width + 1))] = '\n';
            else
            {
                if (i == 0 || i == 1 || i == (width - 1) || i == (width - 2) || j == 0 || j == (height - 1))
                    screenBuf[i + (j * (width + 1))] = '#';
                else
                    screenBuf[i + (j * (width + 1))] = ' ';
            }
            i = i + 1;
        }
        i = 0;
        j = j + 1;
    }
    screenBuf[height * (width + 1) - 1] = '\0';
}

int writeStringToBuffer(char* screenBuf, const char* string, int x, int y, int width)
{
    int i = 0;
    while (string[i] != '\0')
    {
        screenBuf[(y * (width + 1)) + x + i] = string[i];
        i++;
    }
}

int setTitleToScreenBuffer(char* screenBuf, int width, int height)
{
    writeStringToBuffer(screenBuf, "게임 타이틀", 7, 5, width);
    writeStringToBuffer(screenBuf, "1. 게임시작", 8, 6, width);
    writeStringToBuffer(screenBuf, "2. 게임정보", 8, 7, width);
    writeStringToBuffer(screenBuf, "3. 게임종료", 8, 8, width);
}

int setGameendToScreenBuffer(char* screenBuf, int width, int height)
{
    writeStringToBuffer(screenBuf, "다음에봐요", 10, 5, width);
}

int main()
{
    const int WIDTH = 30;
    const int HEIGHT = 15;
    char screen[WIDTH * HEIGHT + HEIGHT]; /* 개행 문자를 위해 HEIGHT 추가 */
    int previousChoice = 0;

    clearBuffer(screen, WIDTH, HEIGHT);
    setTitleToScreenBuffer(screen, WIDTH, HEIGHT);
    printf("%s\n", screen);

    int choice;
    scanf("%d", &choice);

    while (1)
    {
        if (choice == 1)
        {
            if (previousChoice != 1)
            {
                clearBuffer(screen, WIDTH, HEIGHT);
                writeStringToBuffer(screen, "월요일은싫다", 8, 5, WIDTH);
                previousChoice = 1;
            }
        }
        else if (choice == 2)
        {
            if (previousChoice != 2)
            {
                clearBuffer(screen, WIDTH, HEIGHT);
                writeStringToBuffer(screen, "v0.2", 12, 6, WIDTH);
                writeStringToBuffer(screen, "게임제목:일상", 8, 7, WIDTH);
                previousChoice = 2;
            }
        }
        else if (choice == 3)
        {
            clearBuffer(screen, WIDTH, HEIGHT);
            setGameendToScreenBuffer(screen, WIDTH, HEIGHT);
            previousChoice = 3;

            // 게임 종료
            break;
        }
        else
        {
            // 잘못된 선택 처리
            clearBuffer(screen, WIDTH, HEIGHT);
            setTitleToScreenBuffer(screen, WIDTH, HEIGHT);
            previousChoice = 0;
        }

        printf("%s\n입력하세요: ", screen);
        scanf("%d", &choice);
    }

    printf("%s\n", screen);

    return 0;
}
