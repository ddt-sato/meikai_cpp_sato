//演習3-2 2桁の整数値（10～99）を当てさせる「数当てゲーム」を作成せよ。

//時間関係の関数を利用できるようにするライブラリ(現時点では詳細不明)
#include <ctime>

//rand関数を利用できるようにするライブラリ(現時点では詳細不明)
#include <cstdlib>

//画面の入出力を行うためのライブラリを取り込む
#include <iostream>

//stdという名前空間を利用する(現時点では用途不明)
using namespace std;

//============================================================================
//関数名　　　　　：main
//メソッドの説明　：do文
//パラメータの説明：
//返り値　　　　　：
//作成者　　　　　：佐藤 洸
//日付　　　　　　：2019/07/30
//備考　　　　　　：
//============================================================================
int main()
{
	//現在の時刻から乱数の種となる値を設定。
	srand(time(NULL));

	//2桁の整数値を格納する為変数を用意し、10～99までのランダムな値を初期化子として与える。
	int randValue = rand() % 90 + 10;

    //入力した整数値を格納する為の変数を用意。
	int inputValue;

	//以下の処理を繰り返し行う為。
	do
	{
		//整数値の入力を促す為以下を画面表示。
		cout << "整数値：";

		//画面から入力させ、変数へ格納する為。
		cin >> inputValue;

		//入力値がランダムな値より大きい場合を判別する為。
		if (inputValue > randValue)
		{
			//ランダムな値が入力値より小さいことを確認する為画面表示。
			cout << "入力値より小さい値です。\n";
		}
		//入力値がランダムな値未満の場合を判別する為。
		else if (inputValue < randValue)
		{
			//ランダムな値が入力値より大きいことを確認する為画面表示。
			cout << "入力値より大きい値です。\n";
		}

	//入力値がランダムな値と等しくない場合もう一度整数値の入力から処理を行う為。
	}
	while (inputValue != randValue);

	//入力値とランダムな整数値が合致したことを確認する為画面表示。
	cout << "正解：" << randValue << "\n";

}