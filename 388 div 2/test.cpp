#include<bits/stdc++.h>
using  namespace std;
int main(){
	map< int , pair<int,int> > m;
	
	m[1] = make_pair(1,1);
	m[2] = make_pair(1,2);
	m[3] = make_pair(1,3);
	
	for(map< int , pair<int,int> >::iterator it = m.begin() ; it!=m.end() ; it++)
	{
		cout<<"key : " << (*it).first << " value pair : " << (*it).second.first << " " << (*it).second.second << endl;
	}

}
