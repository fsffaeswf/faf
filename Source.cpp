#include <iostream>
using namespace std;
int main() {
	/*1
	for (int i = 1; i <= 5;i++) {
		cout << i;
	}*/

	/*2
	for (int i = 5; i >= 1; i--) {
		cout << i;
	}*/

	/*3
	for (int i = 1; i <= 10; i++) {
		cout<<"3*"<<  i << "=" << 3 * i<<endl;
	}*/

	/*4
	int n;
	cin >> n;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	cout << sum;*/

	/*1
	int K, N;
	cin >> K >> N;
	for (int i = 1; i <= N; i++) {
		cout << K;
	}*/

	/*2
	int A, B;
	int k = 0;
	cin >> A >> B;
	for (int i = A; i <= B; i++) {
		k += 1;
		cout << i;
	}cout << k;*/

	/*3
	int A, B;
	int k = 0;
	cin >> A >> B;
	for (int i = B; i >= A; i--) {
		k += 1;
		cout << i;
	}cout <<endl<< k;*/

	/*4
	int price;
	cin >> price;
	for (int i = 1; i <= 10; i++) {
		int price_kg =price * i;
		cout <<i<<"kg ="<< price_kg<<endl;
	}*/

	
	
	/*5
	float price;
	cin >> price;
	for (float i = 0.1; i <= 1.01; i+=0.1) {
		float price_kg = price * i;
		cout << i << "kg =" << price_kg << endl;
	}*/

	/*6
	float price;
	cin >> price;
	for (float i = 1.2; i < 2.01; i += 0.2) {
		float price_kg = price * i;
		cout << i << "kg =" << price_kg << endl;
	}*/

	/*7
	int A, B;
	int sum = 0;
	cin >> A >> B;
	for (int i = A; i <= B; i++) {
		sum += i;
		
	}cout << sum;*/

	/*8
	int A, B;
	int proiz = 1;
	cin >> A >> B;
	for (int i = A; i <= B; i++) {
		proiz *= i;

	}cout << proiz;*/

	/*9
	int A, B;
	int sum = 0;
	cin >> A >> B;
	for (int i = A; i <= B; i++) {
		sum =sum + i*i;
	}cout << sum;*/

	/*10
	int N;
	float sum = 0;
	cin >> N;
	for (float i = 1; i <= N; i++) {
		
		sum = sum + 1/i;
	}
	cout << sum;*/

	/*11
	int N;
	cin >> N;
	int sum = N*N;
	for (int i = 1; i <= N; i++) {
		
		sum = sum + (N+i)*(N+i);
	}
	cout << sum;*/

	/*12
	int N;
	cin >> N;
	float proiz = 1;
	for (int i = 1; i <= N; i++) {
		
		proiz = proiz * (1 + i / 10.0);
	}
	cout << proiz;*/

	/*13
	int N;
	cin >> N;
	float sum = 0;
	for (int i = 1; i <= N; i++) {
		if (i % 2 == 0) {
			sum = sum - (1 + i / 10.0);
		}
		else {
			sum = sum + (1 + i / 10.0);
		}
		
	}
	cout << sum;*/

	/*14
	int N;
	cin >> N;
	float sum = 0;
	for (int i = 1; i <=2*N-1; i+=2) {

		sum = sum + i;
	} 
	cout << sum;*/
}