#include <bits/stdc++.h>
using namespace std;

int printMenu(){
	cout<<"---------------- * *"<<endl;
	cout<<"MAIN MENU  * *"<<endl;
	cout<<"----------------"
	cout<<"1. Row Numbers"<<endl;
	cout<<"2. Row Numbers Backwards"<<endl;
	cout<<"3. Up Down Numbers"<<endl;
	cout<<"4. Up Numbers Down Alphabets"<<endl;
	cout<<"5. Alpha Numeric Alternate"<<endl;
	cout<<"6. Consecutive Series"<<endl;
	cout<<"7. Row Number Up Down"<<endl;
	cout<<"8. Diamond Alpha Numeric"<<endl;
	cout<<"9. Diamond Alpha Star"<<endl;
	cout<<"10.SET ROW_LEVEL"<<endl;
	cout<<"0. EXIT"<<endl;
	cout<<"Enter your option (1 to 10) (0 to Exit): "<<endl;
	int num;
	cin>>num;
	return num;
}

int main(int argc, char const *argv[])
{
	int inp = printMenu();
	while(inp!=0){
		if(inp==1){
			RowNumbers();
			cout<<"Press any key to continue...  "<<endl;
			if(kbhit()){
				inp = printMenu();
			}
		}else if(inp==2){
			RowNumbersBackwards();
			cout<<"Press any key to continue...  "<<endl;
			if(kbhit()){
				inp = printMenu();
			}
		}else if(inp==3){
			UpDownNumbers();
			cout<<"Press any key to continue...  "<<endl;
			if(kbhit()){
				inp = printMenu();
			}
		}
		else if(inp==4){
			UpNumbersDownAlphabets();
			cout<<"Press any key to continue...  "<<endl;
			if(kbhit()){
				inp = printMenu();
			}
		}
		else if(inp==5){
			AlphaNumericAlternate();
			cout<<"Press any key to continue...  "<<endl;
			if(kbhit()){
				inp = printMenu();
			}
		}
		else if(inp==6){
			ConsecutiveSeries();
			cout<<"Press any key to continue...  "<<endl;
			if(kbhit()){
				inp = printMenu();
			}
		}
		else if(inp==7){
			RowNumberUpDown();
			cout<<"Press any key to continue...  "<<endl;
			if(kbhit()){
				inp = printMenu();
			}
		}
		else if(inp==8){
			DiamondAlphaNumeric();
			cout<<"Press any key to continue...  "<<endl;
			if(kbhit()){
				inp = printMenu();
			}
		}
		else if(inp==9){
			DiamondAlphaStar();
			cout<<"Press any key to continue...  "<<endl;
			if(kbhit()){
				inp = printMenu();
			}
		}
		else if(inp==10){
			SETROW_LEVEL();
			cout<<"Press any key to continue...  "<<endl;
			if(kbhit()){
				inp = printMenu();
			}
		}
	}
	return 0;
}