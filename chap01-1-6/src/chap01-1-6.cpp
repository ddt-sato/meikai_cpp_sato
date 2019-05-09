//演習1-6 List1-7のプログラムを変更して、小数部を持つ実数値をxやyに代入する
//        プログラムを作成せよ。その実行結果から、int型変数が整数値のみしか
//        扱えないことを確認すること。

//画面の入出力を行うためのライブラリを取り込む
#include <iostream>

//stdという名前空間を利用する(現時点では用途不明)
using namespace std;

//============================================================================
//関数名　　　　　：main
//メソッドの説明　：二つの変数xとyの合計と平均を表示
//パラメータの説明：
//返り値　　　　　：
//作成者　　　　　：佐藤 洸
//日付　　　　　　：2019/05/09
//============================================================================
int main()
{
	//小数部を切り捨てるint型を指定。
	int x;
	//小数部を切り捨てるint型を指定。
	int y;

	//yと計算した場合に小数部が0とならない数値をxに代入。
	x = 63.1;
	//xと計算した場合に小数部が0とならない数値をyに代入。
	y = 18.3;

	//int型変数xの小数部が切り捨てられている事を確認する為coutで画面表示。
	cout << "xの値は" << x << "です。\n";
	//int型変数yの小数部が切り捨てられている事を確認する為coutで画面表示。
	cout << "yの値は" << y << "です。\n";
	//合計値の小数部が切り捨てられている事を確認する為coutで画面表示。
	cout << "合計は" << x + y << "です。\n";
	//平均値の小数部が切り捨てられている事を確認する為coutで画面表示。
	cout << "平均は" << (x + y) / 2 << "です。\n";
}
