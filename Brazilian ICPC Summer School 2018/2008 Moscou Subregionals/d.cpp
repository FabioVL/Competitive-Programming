#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

map<string,int> m1;
map<pair<string,int>,int> m2;
map<pair<int,int>,string> m3;

map<string,int>::iterator it1;
map<pair<string,int>,int>::iterator it2;
map<pair<int,int>,string>::iterator it4;
//map<pair<string,int>,int>::reverse_iterator it3;
map<pair<int,string>,int>::reverse_iterator it3;


string s,code;
int n,id,x;

int main()
{
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> s;
		if(s == "ISSUE")
		{
			cin >> code;
			if(m1.count(code)==0) 
			{
				m1[code] = id;
				m2[make_pair(code,id)] = 0;
				m3[make_pair(0,m1[code])] = code;
				printf("CREATED %d 0\n", id); 
				id++;
			}
			else
			{
				printf("EXISTS %d %d\n", m1[code], -m2[make_pair(code,m1[code])]);
			}

		}
		else if(s == "DELETE")
		{
			cin >> code;
			if(m1.count(code)==0) 
				printf("BAD REQUEST\n");
			else
			{
				it1 = m1.find(code);
				it2 = m2.find(make_pair(code,m1[code]));
				it4 = m3.find(make_pair(m2[make_pair(code,m1[code])],m1[code]));
				printf("OK %d %d\n", m1[code], -m2[make_pair(code,m1[code])]);
				m1.erase(it1);
				m2.erase(it2);
				m3.erase(it4);
			}
		}
		else if(s == "RELIABILITY")
		{
			cin >> code >> x;
			if(m1.count(code)==0) 
				printf("BAD REQUEST\n");
			else
			{
				int rnovo = m2[make_pair(code,m1[code])];
				it2 = m2.find(make_pair(code,m1[code]));
				it4 = m3.find(make_pair(m2[make_pair(code,m1[code])],m1[code]));
				m2.erase(it2);
				m3.erase(it4);
				m2[make_pair(code,m1[code])] = rnovo - x;
				m3[make_pair(rnovo-x,m1[code])] = code;
				printf("OK %d %d\n", m1[code], -m2[make_pair(code,m1[code])]);				
			}
		}
		else if(s == "FIND")
		{
			cin >> x;
			if(m1.empty())
				printf("EMPTY\n");
			else
			{
				it4=m3.begin();
				int i=0;
				if(x>m3.size()) x = m3.size()-1;
				for(; it4!=m3.end() and i<x; it4++,i++)
				{

				}
				cout << "OK " << it4->second << " " << (it4->first).second << " " << (-1)*(it4->first).first << endl;	
			}
		}
	}
}





















