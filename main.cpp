#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int start, int count) {
   if(count==M) {
      for(int i = 0; i<M; ++i){
	 cout<< vec[i] << endl;
      }
      cout << '\n';
      return;
   }
   for (int i = start; i <= N; ++i){
      vec.push_back(i);
      func(i+1, count+1);
      vec.pop_back();
   }
}
	

int main() {
   cin >> N >> M;
   func(1,0);
}
