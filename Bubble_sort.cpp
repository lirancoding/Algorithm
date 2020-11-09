#include <iostream>

using namespace std;

int main()
{

    int arr[] = {2,4,9,0,1,8,7,5,6,3};

    for (int i = 0; i < 10; ++i) {

        for (int j = 1; j < 9; ++j) {
            if (arr[j] > arr[i]) {
                int tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }

        }
    }

    for (int i = 0; i < 10; ++i) {

        cout << arr[i] << endl;

    }

    bool a = false;
    bool b = false;
    bool c = true;

    if ( a && (b || c) )
    {
        cout << "good \n" << endl;
    }

    return 0;
}