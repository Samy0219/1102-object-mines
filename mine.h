#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include <ctime>
#include<iomanip>
using namespace std;

#define ROW 9//表示棋盤真正的大小
#define COL 9
#define ROWS ROW + 2//為了不讓陣列越界而多設定了兩行兩列的陣列大小
#define COLS COL + 2

#define BOOM 10//設定為10個雷

class Mine {
public:

	//初始化陣列,方格內初始化
	void gameInit(char map[ROWS][COLS], int rows, int cols, char set);

	//列印棋盤方格,座標
	void gameDraw(char map[ROWS][COLS], int row, int col);

	//埋雷//雷為1
	void set_mine(char map[ROWS][COLS], int row, int col);

	//計算座標周圍(九宮格)雷個數
	//static int get_mine_number();

	//開始排雷
	void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

	//是否開始遊戲的菜單
	void menu();

	void game();

	//總結，遊戲開始
	void gameStart();
};
