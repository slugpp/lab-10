#include<iostream>
using namespace std;

//Write the function printO() here
void printO(int n,int m){
    if(m>0 and n>0)
    {
        for(int i=0; i<n ;i++){
            for(int k=0; k<m;k++){
                cout << "O";
            }
            cout <<"\n";
        }
    }
	else{
    cout << "Invalid input";}

}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}