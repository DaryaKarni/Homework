#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
 cout << "Input the the size: " << endl;
 cin >> n;
  if(n<=10) {

      vector<vector<int>> vec(n+2 /*,vector<int>(n+2)*/);



      for (int i =0; i < n+2; i ++) {
          for (int j = 0; j < n+2; j++) {
              if(i==0 ||j==0||i==n+1||j==n+1 ){

              vec[i].push_back(10);}
              else
              {
                  int e =  rand() % 10;

                  vec[i].push_back(e);

              }
          }
      }

      for ( int i = 0; i < n + 2; i++){
          for (int j = 0; j < n + 2; j++) {
              vec[i][j] = vec[n+2-j-1][n+2-i-1];
          }
      }

      for (int i = 1; i < n+1; i++) {
          cout<<endl;
          for (int j = 1; j < n+1; j++) {
              cout << vec[i][j]<<'\t';
          }
      }

     int k = 0;
      for (int i = 1; i < n+1; i++) {
          for (int j = 1; j < n + 1; j++) {
              if (vec[i][j] < vec[i][j + 1]
                  && vec[i][j] < vec[i + 1][j]
                  && vec[i][j] < vec[i][j - 1]
                  && vec[i][j] < vec[i - 1][j]
                  && vec[i][j] < vec[i + 1][j + 1]
                  && vec[i][j] < vec[i - 1][j - 1]
                  && vec[i][j] < vec[i - 1][j + 1]
                  && vec[i][j] < vec[i + 1][j - 1]) {
                  k++;
              }

          }
      }

      cout << endl << "Amount of local minimums: " << k << endl;

      int s = 0;
      for (int i = 1; i < n + 1; i++) {
          for (int j = 1 ; j < n + 1; j++) {
              if (j > i) {
                   s += vec[i][j];
              }
          }
      }
     cout << "Sum of elements above main diagonal: " << s << endl;

  }

  else{
      cout << " Size has to be not larger than 10" << endl;
  }
    return 0;
}