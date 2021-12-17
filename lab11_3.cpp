#define _USE_MATH_DEFINES
#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
#include <iomanip>
using namespace std;

int main()
{
    ifstream score;
    int count=0;
    double sum=0,sum_pow_2=0,mean=0,Standard_deviation; 
    score.open("score.txt") ;
    string textline;
    double num;
	while (getline(score,textline))
	{
		num=stof(textline);
       
        count++;
        sum+=num;
        sum_pow_2+=(num*num);
       
	}
    mean=sum/count;
    Standard_deviation=sqrt((sum_pow_2/count)-(mean*mean));
    cout << "Number of data = "<< count<<endl;
    cout << setprecision(3);
    cout << "Mean = "<< mean<<endl;
    cout << "Standard deviation = "<< Standard_deviation<<endl;

    


    return 0;
}





