
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
    char word;
    if (s1 == ""){
        cout << "";
    }
    else{
    cout << "[";
        for(int i = 0; i < s1.size(); ++i){
        if (s1[i] != ' '){
            word = s1[i];
            cout << word;
        }
        if (s1[i] == ' '){
            cout << "]" << endl; 
            cout << "[";
        }
    }
    cout << "]" << endl;
    }
}

void exercise_3(string s1) {
for(int i = 0; i < s1.size(); i++){
    char word = s1[i];
    if (i > 19){
        break;
    }
    if (word == '0'){
        cout << "No cake :(" << endl;
        break;
    }
    else if(word == '1'){ 
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
int f = 0; 
int count = 0;
for(int i = 1; i < s.size(); i++){
    switch(s[i]){
        case 'f': f++; 
    }
}
    if(f <= 0){
        cout << "-2" << endl;
    }
    else if(f == 1){
        cout << "-1" << endl;
    }
    else if(f == 2){
        for(int i = 0; i <= s.size(); ++i){
        if (s[i] == 'f'){
            count = i;
            }
        }
            cout << count << endl;
    } 
}

int exercise_10(int a, int b) {
if (a>0 && b> 0 && a!=b){
  if(a>b){
    int aux = a;
    a=b;
    b=aux;
    }
    int i=a;
    while (i>=1){
      if (a % i == 0 && b % i == 0){
        return i;
        break;
        }
        else{
          i -= 1;
    } 
  }
 }
 else{
     if (a>b){
        return a; 
     }
     else if (a<b){
        return b; 
     }
 }
  //return i;
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
  int copy=n;
    int inverse = 0;
   while(copy != 0 ){
       inverse= inverse*10 + copy % 10;
       copy = copy /10;
   }
    if (n==inverse){
        return"Es palindrome";
    }
    else{
        return"No es palindrome";
    }
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
    cin >> n;
    for(int i = 2; i <= n * 2; i++){
        int c = 2;
        int primo = 1;
        while(primo == 1 && c < i){
            if (i % c == 0){
                primo = 0;
            }
            else{
                c++;
            }
        }
    if(primo == 1){
        cout << i << " ";
    }
    }
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}