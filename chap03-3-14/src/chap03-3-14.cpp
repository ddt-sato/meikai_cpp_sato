//演習3-14 演習3-8を書き換えて、5個表示するごとに改行するプログラムを作成せよ。

//画面の入出力を行うためのライブラリを取り込む
#include <iostream>

//stdという名前空間を利用する(現時点では用途不明)
using namespace std;

//============================================================================
//関数名　　　　　：main
//メソッドの説明　：ループ処理
//パラメータの説明：
//返り値　　　　　：
//作成者　　　　　：佐藤 洸
//日付　　　　　　：2019/09/24
//備考　　　　　　：
//============================================================================
int main()
{
	//以下の処理を入力値分ループさせる為。
	int asteriskCount;

	//個数の入力を促す為。
	cout << "何個*を表示しますか：";

	//入力した値を格納する為。
	cin >> asteriskCount;

	//入力値の回数ループさせる為。
	for (int i = 1; i <= asteriskCount; i++)
	{
		//*を画面表示させる為。
		cout << '*';

		//5個毎に改行させる為。
		if (i % 5 == 0)
		{
			cout << "\n";
		}
	}

	//入力値が1未満の時に改行文字を表示させない為。
	if (asteriskCount > 0)
	{
		//改行させる為。
		cout << '\n';
	}
}
