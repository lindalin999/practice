/*判斷字母isalpha、轉換大小寫tolower、切割stringstream*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,tmp;
	while(getline(cin,s)){						//當輸入字串s 
		for(int i=0;i<=s.length();i++){
			if(isalpha(s[i])){					//如果"s[i]是英文字母"為真
				s[i]=tolower(s[i]);				//將s[i]轉換為"小寫"(大寫：toupper) 
			}
			else s[i]=' ';						//不是字母的話就轉成空格 
		}
		stringstream ss(s);						//stringstream多用來切割字串 
		while(ss>>tmp){
		cout<<tmp<<endl;						//用換行隔開(endl改成" "就會變成每單字空一格) 
		}
	}
} 

/*
int a=123;
string b;
stringstream c;

cout<<a<<endl;		//這邊輸出123是整數型態 
c<<a;				//123寫入c
c>>b;				//c寫入b
cout<<b<<endl; 		//這邊輸出123是字串型態
*/ 
