#include<iostream>
#include<vector>
#include<cassert>
using namespace std;
int K;
int solve(const vector<string>&S,int H,int W)
{
	int ret=1e9;
	for(int i=0;i<H;i++)
	{
		int px=-K;
		int pc=0;
		for(int j=0;j<W;j++)
		{
			if(S[i][j]=='x')px=j;
			else if(S[i][j]=='.')pc++;
			if(j>=K-1)
			{
				if(px<=j-K)ret=min(ret,pc);
				if(S[i][j-K+1]=='.')pc--;
			}
		}
	}
	return ret;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int H,W;
	cin>>H>>W>>K;

	vector<string>S(H);
	for(int i=0;i<H;i++)cin>>S[i];
	int ans=solve(S,H,W);

	vector<string>T(W,string(H,'_'));
	for(int i=0;i<H;i++)for(int j=0;j<W;j++)T[j][i]=S[i][j];
    
	ans=min(ans,solve(T,W,H));
	if(ans==(int)1e9)ans=-1;
	cout<<ans<<endl;
}
