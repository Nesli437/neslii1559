#include <iostream>
 
using namespace std;
 
int main()
{
char n;
cout<<"bir harf girin:";
cin>>n;
	if (n == 'a' || n == 'A' || n == 'e' || n== 'E' || n == '�' || n == 'I' || n == 'i' || n == '�' || n =='o' || n=='O' || n =='�' || n=='�'|| n == 'u' || n == 'U'|| n == '�' || n == '�')
    {
	
	cout<<"sesli harftir..."<<n;
}
else {
	cout<<"sessiz harftir..."<<n;
}
return 0;	
}
