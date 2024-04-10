
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1) {
    for(int i = 0; i <= s1.size(); ++i){
        if (s1[i] == ' '){
            cout << i << endl;
        }
    }
    cout << s1.size() << endl;
}

void exercise_2(string s1) {
   for(int i = 0; i <= s1.size(); ++i){
        if (s1[i] == ' '){
            cout << "]" << endl >> "[";
        }
    }
    cout << s1.size() << endl;
}
void exercise_3(string s1) {
getline(cin, s1, '\n');
for(int i = 0; i < 10; i++){
if(s1[i] == 0){
cout << "No cake :(" << endl;
break;
}
else{
cout << "Om-nom-nom :P" << endl;
}
}
}

void exercise_4(int n) {
    cin >> n;
    int res = 1;
    if(n < 0){
        cout << "El numero es negativo. Intentelo de nuevo" << endl;
    }
    else if(n > 14){
        cout << "El numero es muy grande. Intentelo de nuevo" << endl;
    }
    else{
    for(int i = 1; i <= n; i++){
        res *= i;
    }
    cout << res << endl;
    }
}

void exercise_5(int n, int k) {
  // TODO: YOUR CODE HERE
}

int exercise_6(int n) {
cin >> n;
    int sum = 0;
    while(n > 0){
        sum = sum + n%10;
        n = n/10;
    }
    return sum;
}

void exercise_7(int n) {
    cin >> n;
    double res = 0;
    for(int i = 1; i <= n; i++){
        res += pow(-1,i+1)/i;
    }
    cout << res << endl;
}

void exercise_8(string s) {
  // TODO: YOUR CODE HERE
}

void exercise_9(string s) {
getline(cin, s, '\n');
int f = 0; 
for(int i = 0; i < s.size(); i++){
    switch(s[i]){
        case 'f': f++; 
    }
}
    if(f <= 0){
        cout << -2 << endl;
    }
    else if(f == 1){
        cout << -1 << endl;
    }
    else if(f == 2){
        for(int i = 0; i <= s.size(); ++i){
        if (s[i] == 'f'){
            f = 0;
            f++;
            if(f == 1){
            cout << i << endl;
            }
        }
    }
    }
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  return 0;
}

void exercise_11() {
  // TODO: YOUR CODE HERE
}

void exercise_12() {
  // TODO: YOUR CODE HERE
}

long exercise_13(int n, int k) {
    cin >> n;
    cin >> k;
    int res = 0;
    for(int i = 1; i <= n; i++){
        res += pow(i,k);
    }
  return res;
}

string exercise_14(int n) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int decimal) {
    int cosiente = decimal/2;
    int residuo = decimal%2;
    string res;
    res += residuo;
    while(cosiente > 0){
    cosiente = cosiente/2;
    residuo = cosiente%2;
    res += residuo;
    }
    cout << res << endl;
}

void exercise_16(int divident, int divider) {
    if (divider == 0){
    cout << "";
    } 
    else{
    int res = 0;
    int cosi = 0;
    cosi = divident/divider;
    res = divident%divider;
    cout << cosi << " ";
    cout << res << endl;
    }
}

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}