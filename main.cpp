#include <iostream>
#include <vector>
#include <queue>
using namespace std;



/* Solved with priority queue. Priorities insertion is done in logn. here it would be logk
   and done n times. so the run time is O(nlogk)
 */


  
int main(){
  const int AS = 8;//Array Size
  int k = 3;
  std::vector<int> arr{3,1,2,4,6,5,8,7}; //Test Array

  std::priority_queue <int,vector<int>, greater<int>> sorting;


  for(int i = 0; i < k; ++i){
    sorting.push(arr[i]);
  }

  int index = 0;
  for(int i = k; i < arr.size(); ++i){
    arr[index] = sorting.top();
    ++index;
    sorting.push(arr[i]);
    sorting.pop();
  }

  for(int i = arr.size() -sorting.size(); i < arr.size(); ++i){
    arr[i] = sorting.top();
    sorting.pop();
  }

  for(auto it = arr.begin(); it< arr.end(); ++it){
    cout<<"its:"<<(*it)<<endl;
  }
 
  return 0;
}



