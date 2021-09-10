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

int cal1(string in1) //�Ǵܽ� ����; 
{
	int sum1=0;
	for(int i=0;i<in1.length();i++) //input���̰� �� string ���� �Է�; 
	{
		sum1+=in1[i]-'0'; //��ȯ; 
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
		
		digitsum=cal1(in1); //�� �Է��ϰ� �ٷ� �Ǵ� ����; 
		
		while(digitsum>0&&digitsum!=9&&digitsum%9==0)
		{
			count++; //�տ��� �����ϸ� count++ �ϰ� ����; 
			temp=to_string(digitsum); //c++���ο� ���� to_string; 
			digitsum=0; //0���� ���� �������; 
			digitsum=cal1(temp); //�׸��� �Ǵܽ��� ������ �������� �� �Ѵٸ� �ٽ� �Ǵ��Լ��� �̵�; 
		}
		
		if(digitsum==9) //���������ڰ� 9����  count++; 
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


/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string num, tmp;
    int digitSum, degree;

    cin >> num;
    while (num != "0")
	{
        digitSum = 0;
        degree = 0;
        
        // check if digitSum is multiple of 9 
        for (int i = 0; i < num.length(); i++)
		{
            digitSum = digitSum + (num[i] - '0');
        }
        
        // if digitSum is multiple of 9, check its 9-degree
        while (digitSum != 0 && digitSum != 9 && digitSum % 9 == 0)
		{
            degree++;
            tmp = to_string(digitSum);
            digitSum = 0;
            for (int i = 0; i < tmp.length(); i++)
			{
                digitSum = digitSum + (tmp[i] - '0');
            }
        }
        if(digitSum == 9)
		{
            degree++;
        }
        
        if (degree == 0)
		{
            cout << num << " is not a multiple of 9." << endl;
        } 
		else 
		{
            cout << num << " is a multiple of 9 and has 9-degree " << degree << "." << endl;
        }

        cin >> num;
    }
    return 0;
}
*/
