/*
Sample Input
999999999999999999999
9
9999999999999999999999999999998
0
Sample Output
999999999999999999999 is a multiple of 9 and has 9-degree 3.
9 is a multiple of 9 and has 9-degree 1.
9999999999999999999999999999998 is not a multiple of 9.
*/
 
#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int i,degree;

int cal1(string in1) //판단식 쓰기; 
{
	int sum1=0;
	for(int i=0;i<in1.length();i++) //input길이가 길어서 string 으로 입력; 
	{
		sum1+=in1[i]-'0'; //변환; 
	}
	return sum1; 	
} 


int main()
{
	string in1,temp;
	while(cin>>in1)
	{
		int count=0;
		if(in1=="0")
		{
			break;
		}	
		int digitsum=0;
		
		digitsum=cal1(in1); //값 입력하고 바로 판단 들어가기; 
		
		while(digitsum>0&&digitsum!=9&&digitsum%9==0)
		{
			count++; //앞에께 성공하면 count++ 하고 시작; 
			temp=to_string(digitsum); //c++새로운 문법 to_string; 
			digitsum=0; //0으로 선언 해줘야함; 
			digitsum=cal1(temp); //그리고 판단식의 조건을 만족하짐 못 한다면 다시 판단함수로 이동; 
		}
		
		if(digitsum==9) //마지막숫자가 9면은  count++; 
		{
			count++;
		}
			
		if (count==0)
		{
            cout<<in1<<" is not a multiple of 9. "<<endl;
        } 
		else 
		{
            cout<<in1<<" is a multiple of 9 and has 9-degree "<<count<<". "<< endl;
        }
	}
return 0;
}
