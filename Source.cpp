#include<iostream>
using namespace std;
int main() {
	/*for(int i=1;i<=5;i=i+1){
		cout << i;
	}*/
	/*for (int i = 5; i >= 1; i--) {
		cout << i;
	}*/
	/*for (int i = 1; i <= 10; i++) {
		cout << "3*" << i << "=" << 3 * i << endl;
	}*/
	/*int b;
	cin >> b;
	int sum = 0;
	for (int i = 1; i <= b; i++) {
		sum = sum + i;
	}
	cout << sum;*/

	//1
	/*int k,n;
	cin >> k >> n;
	for (int i = 0; i < n; i++) {
		cout << k;
	}*/

	//2
	/*int a, b;
	cin >> a >> b;
	int k = 0;
	for (int i = a; i <= b;i++) {
		k++;
		cout << k;
	}*/

	//3
	/*int a, b;
	cin >> a >> b;
	int k = 0;
	for (int i = a+1; i < b; i++) {
		cout << i<<endl;
		k++;
	}
	cout << k;*/

	//4
	/*int price;
	cin >> price;
	for (int i =1; i <= 10; i++) {
		cout << i <<" kg = " << i * price << endl;
	}*/

	//5
	/*float price;
	cin >> price;
	for (float i = 0.1; i <= 1.1; i+=0.1) {
		float price2 = i * price;
		cout << i << " kg = " << price2 << endl;
	}*/

	//6
	/*float price;
	cin >> price;
	for (float i = 0.2; i <= .1; i += 0.2) {
		float price2 = i * price;
		cout << i << " kg = " << price2 << endl;
	}*/

	//7
	/*int a,b;
	cin >> a>> b;
	int sum = 0;
	for (int i = a; i <= b; i++) {
		sum = sum + i;
	}
	cout << sum;*/

	//8
	/*int a, b;
	cin >> a >> b;
	int sum = 1;
	for (int i = a; i <= b; i++) {
		sum = sum * i;
	}
	cout << sum;*/

	//9
	/*int a, b;
	cin >> a >> b;
	int sum = 0;
	for (int i = a; i <= b; i++) {
		sum = sum + i*i;
	}
	cout << sum;*/

	//10
	/*float a;
	cin >> a;
	float sum = 0;
	for (float i = 1; i <= a; i++) {
		sum = sum + 1/ i;
	}
	cout << sum << endl;*/
	
	//11
	/*float N;
	cin >> N;
	float sum = N*N;
	for (float i = 1; i <= N; i++) {
		sum = sum + (N + i) * (N + i);
	}
	cout << sum << endl;*/
	
	//12
	/*float N;
	cin >> N;
	float sum = 1;
	for (float i = 1; i <= N; i++) {
		sum =sum*(1+0.1*i);
	}
	cout << sum << endl;*/

	//13
	/*float N;
	cin >> N;
	float sum = 0;
	for (int i = 1; i <= N; i++) {
		if (i % 2!=0) {
			sum = sum + (1 + 0.1 * i);
		}
		else {
			sum = sum - (1 + 0.1 * i);
		}
	}
	cout << sum << endl;*/
	return 0;
}