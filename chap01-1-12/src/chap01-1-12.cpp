//演習1-12 右に示すように、三角形の底辺と高さを読み込んで、
//         その面積を表示するプログラムを作成せよ。

//画面の入出力を行うためのライブラリを取り込む
#include <iostream>

//stdという名前空間を利用する(現時点では用途不明)
using namespace std;

//============================================================================
//関数名　　　　　：main
//メソッドの説明　：キーボードからの入力確認
//パラメータの説明：
//返り値　　　　　：
//作成者　　　　　：佐藤 洸
//日付　　　　　　：2019/05/14
//============================================================================
int main()
{
	//キーボードから入力された実数値「底辺」を格納する為にdouble型の変数を用意する。
	double bottomValue;

	//キーボードから入力された実数値「高さ」を格納する為にdouble型の変数を用意する。
	double heightValue;

	//処理の目的を表示。
	cout << "三角形の面積を求めます。\n";

	//底辺の値の入力を促す為にcoutで画面に「底辺：」と表示。
	cout << "底辺：";

	//キーボードから入力をする為に標準入力ストリームcinを使い、底辺用の変数bottomValueへ格納する。
	cin >> bottomValue;

	//二つ目の値の入力を促す為にcoutで画面に「高さ：」と表示。
	cout << "高さ：";

	//キーボードから入力をする為に標準入力ストリームcinを使い、高さ用の変数heightValueへ格納する。
	cin >> heightValue;

	//入力した底辺と高さから三角形の面積を求めcoutで画面表示させる。
	cout << "面積は" << bottomValue * heightValue / 2 << "です。\n";
}