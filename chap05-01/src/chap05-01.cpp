//演習5-1	要素型がint型で要素数が5の配列の要素に対して、
//			先頭から順に5,4,3,2,1を代入して表示するプログラムを作成せよ。

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
//日付　　　　　　：2021/06/02
//備考　　　　　　：
//============================================================================
int main()
{
	//要素数を定義する為。
	const int ELEMENT = 5;

	//int型かつ要素数が5つの配列を用意する為。
	int arrayValue[ELEMENT];

	//5回繰り返す為。
	for (int i = 0; i < ELEMENT; i++){

		//各要素に値を設定する為。
		arrayValue[i] = ELEMENT - i;

		//値を出力する為。
		cout << arrayValue[i] << "\n";
	}
}
