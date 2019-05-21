//演習1-7 三つのint型変数に値を代入し、
//        それらの合計と平均を求めるプログラムを作成せよ

//画面の入出力を行うためのライブラリを取り込む
#include <iostream>

//stdという名前空間を利用する(現時点では用途不明)
using namespace std;

//============================================================================
//関数名　　　　　：main
//メソッドの説明　：三つの変数の合計と平均を表示
//パラメータの説明：
//返り値　　　　　：
//作成者　　　　　：佐藤 洸
//日付　　　　　　：2019/05/09
//============================================================================
int main()
{
	//整数での計算をする為int型を指定。
	int firstValue;
	//整数での計算をする為int型を指定。
	int secondValue;
	//整数での計算をする為int型を指定。
	int thirdValue;

	//定義した他二つの変数との合計、平均を求める為整数を代入。
	firstValue  = 76;
	//定義した他二つの変数との合計、平均を求める為整数を代入。
	secondValue = 34;
	//定義した他二つの変数との合計、平均を求める為整数を代入。
	thirdValue  = 28;

	//変数firstValueに代入した値を確認する為coutで画面表示。
	cout << "firstValueの値は" << firstValue << "です。\n";
	//変数secondValueに代入した値を確認する為coutで画面表示。
	cout << "secondValueの値は" << secondValue << "です。\n";
	//変数thirdValueに代入した値を確認する為coutで画面表示。
	cout << "thirdValueの値は" << thirdValue << "です。\n";
	//三つの変数の合計値を確認する為coutで画面表示。
	cout << "合計は" << firstValue + secondValue + thirdValue << "です。\n";
	//三つの変数の平均値を確認する為coutで画面表示。
	cout << "平均は" << (firstValue + secondValue + thirdValue) / 3 << "です。\n";
}
