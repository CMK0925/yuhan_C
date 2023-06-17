#include "screen.h" //흠
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h> //그러나 이거 5개 여기는 지워도 실행이된다 왜일까..? 

void print_title_screen()
{
    printf("###############################\n");
    printf("##                           ##\n");
    printf("##      화요일의 고난        ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##  1. 게임시작              ##\n");
    printf("##  2. 게임설명              ##\n");
    printf("##  3. 종료                  ##\n");
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
    printf("##   일어나기 싫은 새벽6시다.##\n");
    printf("##   그리고 화요일이다...    ##\n");
    printf("##   그러나 가야 할 준비를   ##\n");
    printf("##   해야한다.               ##\n");
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
    printf("##        플레이 설명        ##\n");
    printf("##                           ##\n");
    printf("##  1.선택지를 통해서        ##\n");
    printf("##    다양한 엔딩을 볼수있다 ##\n");
    printf("##  2.선택을하고 운에 따라서 ##\n");
    printf("##    볼수있는 엔딩이 다름   ##\n");
    printf("##                           ##\n");
    printf("##   주의:영어나 한글입력시  ##\n");
    printf("##    자동으로 1번으로 진행함##\n");
    printf("##         플탐:1분          ##\n");
    printf("##          장르             ##\n");
    printf("##      인터랙티브(아마)     ##\n");
    printf("###############################\n");
}
void print_gamescreen()
{
    printf("###############################\n");
    printf("##                           ##\n");
    printf("##  오늘은 c언어 강의와      ##\n");
    printf("##  파이선이 있는 날이다.    ##\n");
    printf("##  그러나 오늘따라 빠지고   ##\n");
    printf("##  집에 가고 싶다.          ##\n");
    printf("##                           ##\n");
    printf("##  1. 강의를 듣는다.        ##\n");
    printf("##  2. 빠진다.               ##\n");
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
    printf("##        해피엔딩           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##  파이선 마지막 터틀 그리  ##\n");
    printf("##  기도 일찍끝나고 c언어 과 ##\n");
    printf("##  제도 없어 행복한 화요일  ##\n");
    printf("##  을 보냈다.               ##\n");
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
    printf("##        배드엔딩           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##  한학기가 끝난후... 결국  ##\n");
    printf("##  그떄 하루빠진걸로 점수가 ##\n");
    printf("##  부족해서 F학점을 받았다  ##\n");
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
    printf("##        굿엔딩             ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##  비록 파이선수업에서 도형 ##\n");
    printf("##  을 제시간안에는 못햇지만 ##\n");
    printf("##  c언어 과제를 없어서      ##\n");
    printf("##  보람찬 화요일을 보냈다.  ##\n");
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
    printf("##        굿엔딩2             ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##  파이선 터틀그리기를 일찍 ##\n");
    printf("##  끝냇지만 c언어 과제를 끝 ##\n");
    printf("##  내는데 화요일 하루를     ##\n");
    printf("##  다 쓸거같다...           ##\n");
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
    printf("##        새드엔딩           ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##  파이선 도형그리기를 제시 ##\n");
    printf("##  간에 못하여 집에 늦게 도 ##\n");
    printf("##  착하였다. c언어 과제도 있##\n");
    printf("##  고 최악의 날인거같다.    ##\n");
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
    printf("##        새드엔딩2          ##\n");
    printf("##                           ##\n");
    printf("##  그 이후..                ##\n");
    printf("##  파이선도 제시간에 못하여 ##\n");
    printf("##  귀가 시간이 늦어져       ##\n");
    printf("##  c언어 과제도 있고        ##\n");
    printf("##  최악의 화요일인거같다.   ##\n");
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
    printf("##    그렇게.. c언어 과제가  ##\n");
    printf("##    생겼다...  T_T         ##\n");
    printf("##                           ##\n");
    printf("##    어느덧 파이선 시간이   ##\n");
    printf("##    끝나기 직전 터틀 거북이##\n");
    printf("##    로 도형을 그려야만 집으##\n");
    printf("##    로 갈수있다 자 어떻게  ##\n");
    printf("##    할까?                  ##\n");
    printf("##  1.힘을 합쳐 그린다.(50퍼)##\n");
    printf("##  2.일단 혼자 해본다.      ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("###############################\n");
}
void print_B_gamescreen()
{
    printf("###############################\n");
    printf("##                           ##\n");
    printf("##    이번주는.. c언어 과제가##\n");
    printf("##    없다!!! ♥.♥          ##\n");
    printf("##                           ##\n");
    printf("##    어느덧 파이선 시간이   ##\n");
    printf("##    끝나기 직전 터틀 거북이##\n");
    printf("##    로 도형을 그려야만 집으##\n");
    printf("##    로 갈수있다 자 어떻게  ##\n");
    printf("##    할까?                  ##\n");
    printf("##     1.그린다.(구글링 등)  ##\n");
    printf("##     2.내실력만으로 그린다 ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("###############################\n");
}

void print_school_choice()
{
    printf("###############################\n");
    printf("##                           ##\n");
    printf("##        학교를 갈까요?     ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##  1. 학교를 간다           ##\n");
    printf("##  2. 가지 않는다           ##\n");
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
    printf("##   어느덧 c언어 수업이     ##\n");
    printf("##   끝날떄즘...             ##\n");
    printf("##   교수님께서 나를 지목해  ##\n");
    printf("##   서 이 문제를 맞추면     ##\n");
    printf("##   과제를 안내주신다 한다. ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("##     1.도전..! (50퍼)      ##\n");
    printf("##     2.몰라요!             ##\n");
    printf("##                           ##\n");
    printf("##                           ##\n");
    printf("###############################\n");
}