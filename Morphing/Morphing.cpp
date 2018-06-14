// Morphing.cpp: 定义控制台应用程序的入口点。
//


#include "Morphing.h"
using namespace std;

vector<vector<Pixel>> picture_des;
vector<vector<Pixel>> picture_orign;//两个图像矩阵
vector<pair<Line, Line>> Lines;
int pic_1_W, pic_1_H, pic_2_W, pic_2_H, P_vectors_num;
int main()
{
	string s = "input.txt";
	GetData(s);//获得原始数据
	for (int i = 0; i < pic_1_H; ++i)
	{
		for (int j = 0; j < pic_1_W; ++j)
		{
			RGB_NEW p_n;
			Get_X_Orign_RGB(picture_des[i][j],p_n);
			picture_des[i][j].Color.SetColor(p_n);
		}
	}
	Display_Des();
}

