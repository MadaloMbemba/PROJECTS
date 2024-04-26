#include <iostream>
#include <ctime>
#include <ctdlib>
using namespace std;
int DaysUntilExpiration = rand() %12;
int main(){
if(DaysUntilExpiration == 10) {
    cout <<"your subscription will expire soon. Renew now!" << endl;
} else if(DaysUntilExpiration <= 5) {
cout <<"your subscription expires in value of days. Renew now and save 10%" <<endl;
} else if(DaysUntilExpiration == 1 ) {
    cout <<"your subscription expires within a day! Renew now and save 20%" <<end;
} else if(DaysUntilExpiration == 0) {
    cout << "your subscription has expired" <<end;
} else {
  cout<< "you have an active subscription" <<endl;
}
return 0;
}