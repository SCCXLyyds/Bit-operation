//��1��lowbit �㷨�� 
//#include<iostream>
//using namespace std;
//int lowbit(int x){
//    return x&(-x);
//}
//int main(){
//    int n;
//    cin>>n;
//    while(n--){
//        int x;
//        cin>>x;
//
//        int res=0;
//        while(x) x-=lowbit(x),res++;
//
//        cout<<res<<' ';
//    }
//    return 0;
//}
//��2������ö�٣�
#include <iostream> 
using namespace std;
int main()
{
	int n,m;
	cin>>n;
	while(n--)
	{
		cin>>m;
		int res=0;
		while(m){
			res+=m&1;
			m>>1;
		}
		cout<<res<<" ";
	}
	return 0;
}
