#include <iostream>
#include <string>
#include <boost/lexical_cast.hpp>
#include <vector>

// int main()
// {
// 	double x=2.135248;
// 	// double base = 2.718281828;

// 	double tay1=x;
// 	double tay2=1;
// 	int n=1;

// 	double result;

// 	result=1+tay1/tay2;

// 	while (tay1/tay2 > 0.000000001)
// 	{
// 		tay1*=x;
// 		tay2=tay2*(++n);
// 		result+=(tay1/tay2);
// 	}
// std::cout<<result<<std::endl;	

// return 0;
// }

double power(double x, int n)
{
	double Pow=1;
	int cnt=1;
	while (cnt<=n)
	{
		Pow*=x;
		++cnt;
	}

	return Pow;
}

double factor(int n)
{
	if (n>1)
		return factor(n-1)*n;
	return 1;
}

int main()
{
	double x=4.2;
	double result=1.0;
	double term=1.0;
	int n=1;

	while(term>0.0000000001)
	{
		term=power(x,n)/factor(n);
		result+=term;
		++n;
	}

	std::cout<<"e^"<<x<<"="<<result<<std::endl;
return 0;
}