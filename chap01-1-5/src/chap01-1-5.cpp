//演習1-5 右に示すように、１行に１文字ずつ名前を表示するプログラムを作成せよ。
//        姓と名のあいだは１行あけることとし、自分の名前を表示すること。

//画面の入出力を行うためのライブラリを取り込む
#include <iostream>

//stdという名前空間を利用する(現時点では用途不明)
using namespace std;

//============================================================================
//関数名　　　　　：main
//メソッドの説明　：画面への出力を行う
//パラメータの説明：
//返り値　　　　　：
//作成者　　　　　：佐藤 洸
//日付　　　　　　：2019/05/09
//============================================================================
int main()
{
	//姓と名の間を1行あける為、藤と洸の間に改行を表す\nを2つ記載。
	cout << "佐\n藤\n\n洸\n";
}
