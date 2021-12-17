#include<iostream>

using namespace std;

int main(){
	int count[5] = {},run_order=1; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	char grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit."<<endl;
	do{
		cout << "Student [" << run_order << "]: ";
		cin >> grade; 
		if(grade=='A')
		{ 
			count[0]++;
			run_order++;

		}
		else if(grade=='B')
		{
			count[1]++;
			run_order++;

		}
		else if(grade=='C')
		{ 
			count[2]++;
			run_order++;
		}
		else if(grade=='D')
		{
			count[3]++;
			run_order++;
		}
		
		else if(grade=='F')
		{	
			count[4]++;
			run_order++;

		}
		else if(grade=='0')
		{	
		    run_order--;
			break;
			
		}
		else
		{ 
			cout<<"Wrong input. Please input again."<<endl;

		} 
	}while(true);
	
	
	cout << "In total "<<run_order<<" students."<<endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] <<" ";


	//	and so on ... for grade = C, D, F	
	
	return 0;
}
