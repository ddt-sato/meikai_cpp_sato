//演習1-2 List1-1のプログラムからusing命令を削除して、
//        coutをstd::coutに変更したプログラムを作成せよ。

//画面の入出力を行うためのライブラリを取り込む
#include <iostream>

//============================================================================
//関数名　　　　　：main
//メソッドの説明　：画面への出力を行う
//パラメータの説明：
//返り値　　　　　：
//作成者　　　　　：佐藤 洸
//日付　　　　　　：2019/05/07
//============================================================================
int main()
{
	//一行目に「初めてのC++プログラム。」を画面出力させる stdを追加
	std::cout << "初めてのC++プログラム。\n";
	//二行目に「画面に出力しています。」を画面出力させる stdを追加
	std::cout << "画面に出力しています。\n";
}

