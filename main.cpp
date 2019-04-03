#include<bits/stdc++.h>
using namespace std;
int main()
{
	int temp,i,a,k;
	cin >> temp;
	for(i=0;i<temp;i++)
	{
		int rank = 0,q=0,p;
		char patt[1001];
		char text[100001];
		cin >> patt >> text;
		int l = strlen(patt);
		int flag[200] = {0};
		int count2 = 0;
		for(a=0;a<l;a++)
		{
			flag[patt[a]]++;
		}
		int check2[200] = {0};
		int crack[200] = {0};
		for(p=0;p<strlen(text);p++)
		{
			q++;
			check2[text[p]]++;
			if(check2[text[p]] == flag[text[p]])
			{
				count2 = count2 + check2[text[p]];
			}
			if(q >= l)
			{
				if(count2 == l)
				{
					cout << "YES" << "\n";
					rank = 1;
					break;
				}
				else
				{
					if( check2[text[p-l+1]] == flag[text[p-l+1]] )
					count2 = count2-flag[text[p-l+1]];
					check2[text[p-l+1]]--;
				}
			}		


		}
		if(rank == 0)
		cout << "NO" << "\n";
	}
}

/*
OUTPUT:
3
hack
indiahacks
YES
code
eddy
NO
coder
imredoc
YES
/*
