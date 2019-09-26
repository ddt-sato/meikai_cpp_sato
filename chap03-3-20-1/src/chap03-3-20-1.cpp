//演習3-20 List3-14は左下側が直角の直角三角形を表示するプログラムであった。直角が左上側、
//         右上側、右下側の直角三角形を表示するプログラムをそれぞれ作成せよ。

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
//日付　　　　　　：2019/09/26
//備考　　　　　　：左上直角の三角形
//============================================================================
int main()
{

	//入力値を格納する変数が必要な為。
	int triangleStep;

	//処理を確認する為。
	cout << "左上直角の三角形を表示します。";

	//段数の入力を促す為。
	cout << "段数は：";

	//入力値を格納する為。
	cin >> triangleStep;

	//以下の処理を繰返し実行する為。
	for (int i = 1; i <= triangleStep; i++)
	{
		//以下の処理を繰返し実行する為。
		for(int j = 0; j <= triangleStep - i; j++)
		{
			//画面に*を表示する為。
			cout << '*';
		}
		//改行する為。
		cout << '\n';
	}
}
