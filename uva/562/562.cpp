/******************************************************************
***   Author        : Shipu Ahamed (Psycho Timekiller)          ***
***   E-mail        : shipuahamed01@gmail.com                   ***
***   University    : BUBT,Dept. of CSE                         ***
***   Team          : BUBT_HIDDEN                               ***
***   My Blog       : http://shipuahamed.blogspot.com           ***
***   Facebook      : http://www.facebook.com/DeesheharaShipu   ***
******************************************************************/
#include <list>
#include <set>
#include <map>
#include <ctime>
#include <stack>
#include <queue>
#include <cmath>
#include <deque>
#include <limits>
#include <string>
#include <cctype>
#include <cstdio>
#include <vector>
#include <bitset>
#include <numeric>
#include <cassert>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <complex>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;

#define sc scanf
#define pf printf
#define ll long long
#define pi 2*acos(0.0)
#define ull unsigned long long
#define all(v) v.begin(),v.end()

#define sii(t) scanf("%d",&t)
#define sll(t) scanf("%lld",&t)
#define ssii(a,b) scanf("%d%d",&a,&b)
#define ssll(a,b) scanf("%lld%lld",&a,&b)
#define Case(no) printf("Case %d: ",++no)
#define P(a) printf("%d\n",a)
#define PL(a) printf("%lld\n",a)
#define PN(a) printf("%d",a)
#define PLN(a) printf("%lld",a)

#define ff first
#define se second
#define pb push_back
#define ST(v) sort(all(v))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define maxall(v) *max_element(all(v))
#define minall(v) *min_element(all(v))
#define cover(a,d) memset(a,d,sizeof(a))
#define popcount(i) __builtin_popcount(i)                       //count one
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
#define un(v) ST(v), (v).earse(unique(all(v)),v.end())
#define common(a,b) ST(a), ST(b), a.erase(set_intersection(all(a),all(b),a.begin()),a.end())
#define uncommon(a,b) ST(a), ST(b), a.erase(set_symmetric_difference(all(a),all(b),a.begin()),a.end())

////============ CONSTANT ===============////
#define mx  (2000010)
#define inf (1<<30)                                            //infinity value
#define eps 1e-9
#define mod 1000000007
////====================================////

int main()
{
    int t;
    sii(t);
    while(t--)
    {
       int n,p,c;
       bool make[10000];
       cover(make,false);
       int coin[10000];
       sii(n);
       int sum=0;
       for(int i=0;i<n;i++)
       {
           sii(coin[i]);
           sum+=coin[i];
       }
       make[0]=true;
       int v[100000];
       int len=0;
       for(int i=0;i<n;i++)
       {
           for(int j=sum;j>=coin[i];j--)
           {
               if(make[j-coin[i]]){
               make[j]=true;
               }
           }
       }
//       int Min = mod;
//        for(int i=0;i<len;i++)
//        {
//            sum=0;
//            for(int j=0;j<len;j++)
//            {
//                if(v[i]==v[j]) continue;
//                sum+=v[j];
//            }
//            if(Min>abs(v[i]-sum))
//            Min=abs(v[i]-sum);
//        }
//        P(Min);
        for(int i=1;i<=sum;i++)
        if(make[i]){
            v[len++]=i;
            P(i);
        }
        sort(v,v+len);
        for(int i=0;i<len/2;i++)
            sum+=v[i];
        for(int i=len/2;i<len;i++)
            sum-=v[i];

        P(abs(sum));


    }
    return 0;
}

