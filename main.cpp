#include <iostream>
using namespace std;
int main() {
	int first,second,sum,fibo;
	first=0;fibo=1;
	second=1;
	while(fibo<4000000){
		fibo=first+second;
		if(fibo%2==0){
			sum+=fibo;
		}
		first=second;
		second=fibo;
	}
	cout<<sum;
	return 0;
}
