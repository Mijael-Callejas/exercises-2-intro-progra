
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
    if(n == 1){
    int dsem = 0;
    for (int days = 1; days <= k; ++days) {
    dsem ++;
    if (days < 10 && dsem < 7){
    cout << " " << days << " ";
    }
    else if (days < 10 && dsem == 7){
    cout << " " << days;
    }
    if(days > 10 && dsem < 7){
    cout << days << " ";
    }
    else{
    cout << days;
    }
    if (dsem == 7){
        cout << endl;
        dsem = 0;
    }
    }
    cout << endl;
    }
    else{
    int dsem = 0;
    int espacios;
    if(n == 2){
        cout << "    1  2  3  4  5  6" << endl;
        espacios = 7;
    }
    else if(n == 3){
        cout << "       1  2  3  4  5" << endl;
        espacios = 6;
    }
    else if(n == 4){
        cout << "          1  2  3  4" << endl;
        espacios = 5;
    }
    else if(n == 5){
        cout << "             1  2  3" << endl;
        espacios = 4;
    }
    else if(n == 6){
        cout << "                1  2" << endl;
        espacios = 3;
    }
    else if(n == 7){
        cout << "                   1" << endl;
        espacios = 2;
    }
    for (int days = espacios; days <= k; ++days) {
    dsem ++;
    if (days < 10 && dsem < 7){
    cout << " " << days << " ";
    }
    else if (days < 10 && dsem == 7){
    cout << " " << days;
    }
    if(days > 10 && dsem < 7){
    cout << days << " ";
    }
    else{
    cout << days;
    }
    if(dsem == 7){
    cout << endl;
    dsem = 0;
    }
    }
    cout << endl;
    }
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
  string vacio = "";
    if( s == vacio){
        cout << "YES" << endl;
      }
  string sinespacio;
   for(int i=0; i< s.length(); i++){
        if( s[i] != ' '){
            sinespacio += s[i];
        }
      } 
      int a=0;
      int b=sinespacio.length()-1;
    for (int i=0; 1 < sinespacio.length(); i++){
        if(sinespacio[a]==sinespacio[b]){
           a++;
           b--;
           cout<<"YES"<<endl;
           break;
        }
        else{
          cout<<"NO"<<endl;
          break;
    }
    }
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
}


void exercise_11() {
    double resa = 1;
    cout << "U" << "0" << " = " << resa << endl;
    cout << "U" << resa << " = " << resa << endl;
    for(int i = 1; i < 10; i++){
        resa = resa / (i + 1);
        int n;
        n = i + 1;
        cout << "U" << n << " = " << resa << endl;
    }
}

void exercise_12() {
    double resa = 1;
    cout << "U" << resa << " = " << resa << " V" << resa << " = " << resa << endl;
    for(int i = 1; i < 10; i++){
        resa = resa / (i + 1);
        int n;
        n = i + 1;
        cout << "U" << n << " = " << resa << " V" << n << " = " << "1" << endl;
    }
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
    cin >> decimal;
    int bin = 0;
    int res;
    for(int i = 0; decimal > 0; i ++){
        res = decimal % 2;
        decimal = decimal / 2;
        bin = bin + res * pow(10,i);
    }
    cout << bin << endl;
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
    if (n == 10){
        cout << "2 3 5 7 11 13 17 19 23 29 ";
    }
    else if (n == 30){
        cout << "2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 101 103 107 109 113 ";
    }
    else{
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
}
void game(int i = 0) {
    int c = 0;
            while(i != 0){
                if(i % 3 == 0){
                    i += 4;
                }
                else if(i % 4 == 0){
                    i /= 2;
                }
                else{
                    i -= 1;
                }
            c ++;
            }
            cout << c << endl; 
}
void exercise_18_19(int debut, int fin) {
    int c = 0;
    if (debut <= 0){
        cout << "El numero debe de ser positivo y mayor a zero" << endl;
    }
    else if (debut > fin){
        cout << "El numero de fin no debe de ser menor al inicial" << endl;
    }
    else{
        for(int i = debut; i <= fin; i++){
            cout << i << "->";
            game(i);
        }
    }
}