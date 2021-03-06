//演習3-22 n段の下向き数字ピラミッドを表示する関数を作成せよ(右図は4段の例)。
//         第i行目にはi % 10によって得られる数字を表示すること。

//画面の入出力を行うためのライブラリを取り込む
#include <iostream>

//stdという名前空間を利用する(現時点では用途不明)
using namespace std;

//============================================================================
//関数名　　　　　：main
//メソッドの説明　：多重ループ
//パラメータの説明：
//返り値　　　　　：
//作成者　　　　　：佐藤 洸
//日付　　　　　　：2019/10/02
//備考　　　　　　：
//============================================================================
int main()
{

	//入力値を格納する変数が必要な為。
	int pyramidStep;

	//処理を確認する為。
	cout << "ピラミッドを表示します。";

	//段数の入力を促す為。
	cout << "段数は：";

	//入力値を格納する為。
	cin >> pyramidStep;

	//以下の処理を繰返し実行する為。
	for (int i = 1; i <= pyramidStep; i++)
	{
		//以下の処理を繰返し実行する為。
		for(int j = 1; j <= i; j++)
		{
			//空白文字を表示する為。
			cout << ' ';
		}

		//以下の処理を繰返し実行する為。
		for (int j = 1; j <= (pyramidStep - i) * 2 + 1; j++)
		{
			//画面に段数(10以降は1の位)を表示する為。
			cout << i % 10;
		}
		//改行する為。
		cout << '\n';
	}
}
