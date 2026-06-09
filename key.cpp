#include <iostream> //this is a code to find a key value in the array !
using namespace std;
int main (){
 
int k;
cout << "enter how many inputs :"<< endl;
cin >> k;
 
int arr[k];
cout << "enter the numbers :"<< endl;
for (int i = 0; i < k; i++){
cin >> arr[i];
}
 
int key;
cout << "what do you want to find :"<< endl;
cin >> key;
 
int low = 0;
int high = k - 1;
bool found = false;
 
while( low <= high )
{
int mid = (low + high)/2;
if (arr[mid]==key)
{
cout << "your number is at index : "<<mid<<endl;
found = true;
break;
}
else if (arr[mid] < key)
{
low = mid+1;
}
else
{
high = mid-1;
}
 
}
if (!found)
{
cout<< "not found";
}
 
return 0;
}
 
