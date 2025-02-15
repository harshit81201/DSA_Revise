/**#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int arr[6] = {3,23,5,64,21,6};
    for(int i = 0; i < 6; i++){
        cout<<arr[i] << " ";
    }
    return 0;
}**/

/**#include <iostream>
using namespace std;

int main() {
    int arr[] = {4,32,3,6,12};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Size of array: " << n;
}**/

/**#include <iostream>
using namespace std;

void sizedArray(int arr[], int size){
    cout<<"Array: ";
    for(int i= 0; i < size; i++){
        cout<<arr[i] << " ";
    }
}

int main(){
    int arr[] = {4,2,5,1,54,12};
    sizedArray(arr, 6);
    return 0;
}**/

#include <iostream>
using namespace std;

int main() {
    int n = 7;
    for(int i = 0; i < n; i++){
        //printing spaces
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        //printing first half numbers (i+1)
        for (int j = 1; j <= i+1; j++)
        {
            cout<<j;
        }
        //printing remaining half numbers
        for (int j = i; j > 0; j--)
        {
            cout<<j;
        }

        cout<<endl;
        
    }
}