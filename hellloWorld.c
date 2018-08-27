/*
 * hellloWorld.c
 *
 *  Created on: 2018/08/28
 *      Author: hp
 */


#include <stdio.h>
#include <string.h>

int main()
{
	void test();
	char c [20];
	strcpy(c,"Hello,World");
	printf("%s\n",c);
	test();
	return(0);
}

void test()
{
	void charTest();
	void intTest();
	void shortTest();
	void typedefStructTest();
	int returnTest();
	void ifTest();
	charTest();
	intTest();
	shortTest();
	typedefStructTest();
	returnTest();
	ifTest();
}

void charTest()
{
	char charSize = sizeof(char);
	printf("char型のサイズは%d,charSizeのアドレスは%p\n",charSize,&charSize);
}

void intTest()
{
	int intSize;
	printf("int型のサイズは%d,intSizeのアドレスは%p\n",(int)sizeof(intSize),&intSize);
}

void shortTest()
{
	short shortSize = sizeof(short);
	printf("short型のサイズは%d,shortSizeのアドレスは%p\n",shortSize,&shortSize);
}

void typedefStructTest()
{
	typedef struct
	{
		int no;
		char name [20];
	}STUDENT;
	STUDENT s;
	STUDENT *STUDENTptr;
	STUDENTptr = &s;
	s.no = 111;
	strcpy(s.name,"bobby");
	printf("生徒の名前は%s,生徒Noは%d\n",s.name,STUDENTptr->no);
	printf("STUDENT型のサイズは%d,STUDENT型変数sのアドレスは%p\n",(int)sizeof(STUDENT),&s);
}

int returnTest()
{
	printf("順次実行は一行の式、あるいは文です\n");
	printf("制御構造以外は、行の最後にセミコロンをつけます\n");
	return(0);
}

void ifTest()
{
	int x = 20;
	if(x > 0)
		printf("変数の値はプラスの値です\n");
	else
		printf("一行で書かれていれば{}を省略できます\n");
	if(x)
	{
		printf("0なのか0以外かで判定できます\n");
	}else{
		printf("0ならばelse0以外はtrueです\n");
	}
}
