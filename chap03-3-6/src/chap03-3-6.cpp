//演習3-6 読み込んだ値の個数だけ記号文字を表示するプログラムを作成せよ。
//        +と-を交互に表示すること。

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
//日付　　　　　　：2019/09/12
//備考　　　　　　：
//============================================================================
int main()
{
    //入力した値を格納する為の変数を用意。
	int inpputValue;

	//個数の入力を促す為。
	cout << "何個表示しますか：";

	//入力した値を変数へ格納する為。
	cin >> inpputValue;

	//ループ用の変数を用意し初期化。
	int i = 0;

	//以下の処理を入力値分ループさせる為。
	while (i < inpputValue)
	{

		//ループ回数が奇数と偶数の場合で表示させる記号を変える為。
		if (i % 2 == 0)
		{
			//+を表示する為。
			cout << '+';
		} else {
			//-を表示する為。
			cout << '-';
		}

		//入力値と比較している値を加算して入力値分繰り返す為。
		i++;
	}
}
