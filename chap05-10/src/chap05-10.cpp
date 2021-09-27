//演習5-10	4行目3列の行列と3行目4列の行列の積を求めるプログラムを作成せよ。
//			各構成要素の値はキーボードから読み込むこと。

//画面の入出力を行うためのライブラリを取り込む
#include <iostream>

//stdという名前空間を利用する
using namespace std;

//============================================================================
//関数名　　　　　：main
//メソッドの説明　：配列
//パラメータの説明：
//返り値　　　　　：
//作成者　　　　　：佐藤 洸
//日付　　　　　　：2021/09/22
//備考　　　　　　：
//============================================================================
int main()
{
	//行と列の要素数を定義する為。
	const int LINE = 5;

	const int COLUMN = 5;

	//int型かつ指定された数の要素を持つ多次元配列を用意する為。
	int arrayValue[LINE][COLUMN] = {0};

	//積を格納する変数を用意する為。
	int productValue = 0;

	//値を出力する為。
	cout << "◆値設定\n";

	//行の要素数分繰り返す為。
	for (int i = 0; i < LINE; i++){
		//列の要素数分繰り返す為。
		for (int j = 0; j < COLUMN; j++){

			//値を出力する為。
			cout << "arrayValue[" << i << "][" << j << "]=";

			//要素に値を設定する為。
			cin >> arrayValue[i][j];
		}
	}

	//値を出力する為。
	cout << "\n◆設定値の出力\n";

	//行の要素数分繰り返す為。
	for (int k = 0; k < LINE; k++){

		//列の要素数分繰り返す為。
		for (int l = 0; l < COLUMN; l++){

			//値を出力する為。
			cout << "arrayValue[" << k << "][" << l << "]：" << arrayValue[k][l] << "\n";
		}
	}

	//積を求める為。
	productValue = arrayValue[4][3] * arrayValue[3][4];

	//値を出力する為。
	cout << "\n◆4行目3列の行列と3行目4列の行列の値の積＝" << productValue << "\n";

}
