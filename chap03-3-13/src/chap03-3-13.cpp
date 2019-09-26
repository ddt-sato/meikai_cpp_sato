//演習3-13 身長と標準泰淳の対応表を表示するプログラムを作成せよ。表示する身長の
//         範囲(開始値/終了値/増分)は、整数値として読み込むこと。
//         標準体重は(身長 - 100)×0.9によって求める。

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
	//値格納用の変数が必要な為。
	int minimumHeight, maxHeight, plusHeight, averageWeight;

	//以下の処理を繰返し実行する為。
	do
	{
		//開始値の入力を促す為。
		cout << "何cmから：";

		//入力した値を格納する為。
		cin >> minimumHeight;
	}
	//0以下の場合入力し直させる為。
	while(minimumHeight <= 0);

	//以下の処理を繰返し実行する為。
	do
	{
		//終了値の入力を促す為。
		cout << "何cmまで：";

		//入力した値を格納する為。
		cin >> maxHeight;
	}
	//開始値以下の場合入力し直させる為。
	while(maxHeight <= minimumHeight);

	//以下の処理を繰返し実行する為。
	do
	{
		//増分の入力を促す為。
		cout << "何cmごと：";

		//入力した値を格納する為。
		cin >> plusHeight;
	}
	//0以下の場合入力し直させる為。
	while(plusHeight <= 0);

	//画面表示させる為。
	cout << "身長　標準体重\n";

	//入力値までループさせる為。
	while (minimumHeight <= maxHeight)
	{

		//標準体重を算出する為。
		averageWeight = (minimumHeight - 100) * 0.9;

		//身長と標準体重を表示する為。
		cout << " " << minimumHeight << "　" << averageWeight << "\n";

		//入力した増分を加算する為。
		minimumHeight += plusHeight;
	}
}
