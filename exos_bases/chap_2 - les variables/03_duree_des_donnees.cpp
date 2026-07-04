#include <iostream>
using namespace std;

int main() {
  int profondeur{100};
  cout << profondeur << endl;
  {
    int temperature{80};
    cout << temperature << endl;
  }
  int temperaturedehors;
  cout << temperaturedehors << endl;
  return 0;
}