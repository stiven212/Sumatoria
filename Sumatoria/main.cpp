#include <iostream>

int suma( int m, int n);

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	
	int m;
	int n;
	
	cout << "Ingrese numeros" << endl;
	cout << "Primer digito: " ;
	cin >> m;
	cout << "Segundo digito: " ;
	cin >> n;
	
	cout << suma(m, n);
	
	
	
	
	return 0;
}


	int suma(int m, int n) {
		
		int sumatoria= 0;
		
		while((m<0) || ( n<0)){
			
			if(m<0){
				
				cout << "Ingrese nuevamente primer numero: ";
				cin >> m; 
			}
			
			if(n<0){
				
				cout << "Ingrese nuevamente segundo numero: ";
				cin >> n; 
			}
		}
		if(n<m){
				
				cout << "Ingrese numero mas grande";
				cin >> n; 
			}
		
		
		for( int i=m; i<=n ; i++){
			
			
			
			sumatoria = sumatoria + i;
			
			
		}
		return sumatoria;
		
		 
		}
