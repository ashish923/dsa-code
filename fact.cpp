#include<iostram>
using namespace std;
int main(){
  int n; cin >> n;
  int fact = 0;
  for(int i = 1; i <= n; i++){
    fact = fact * i;
  }
  cout << fact;
  return 0;
}
