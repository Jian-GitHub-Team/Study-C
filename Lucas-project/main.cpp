#include <iostream>
#include <limits>
using namespace std;

void isNum1(int a[],int b[],int sizeA, int sizeB);
void isNum2(int* arr1,int* arr2, int arrSize1,int arrSize2);
void inputNum();

int* arr1, *arr2;
int arrSize1,arrSize2;

int main() {
    /*int n[]={1,2,3,7,10};
    int m[]={9,8,5,9,10};
    int sizeN=sizeof(n)/sizeof(n[0]);
    int sizeM=sizeof(m)/sizeof(m[0]);
    isNum1(n,m,sizeN,sizeM);*/

    inputNum();
    isNum2(arr1,arr2,arrSize1,arrSize2);
}

void isNum1(int a[],int b[],int sizeA, int sizeB) {
    for (int i = 0; i < sizeA; i++) {
        for (int j = 0; j < sizeB; j++) {
            if (a[i] + b[j] == 10) {
                cout << "a[" << i << "] + b[" << j << "]=10" << endl;
            }
        }
    }
}

void isNum2(int* arr1,int* arr2, int arrSize1,int arrSize2) {
    bool found = false;
    for (int i = 0; i < arrSize1; i++) {
        for (int j = 0; j < arrSize2; j++) {
            if (arr1[i] + arr2[j] == 10) {
                cout << "arr1["<<i<<"]+arr2["<<j<<"]=10" << endl;
                found = true;
            }
        }
    }
    if (!found) {
        cout << "数组中元素相加都不等于10"<<endl;
    }
}

void inputNum() {
    //int arrSize1, arrSize2;

    cout << "请输入数组arr1的长度：";
    cin >> arrSize1;
    arr1 = new int[arrSize1];
    for(int i = 0; i < arrSize1; i++) {
        cout << "第" << i+1 << "个元素,请输入：";
        cin >> arr1[i];
    }

    cout << "请输入数组arr2的长度：";
    cin >> arrSize2;
    arr2 = new int[arrSize2];
    for(int j = 0; j < arrSize2; j++) {
        cout << "第" << j+1 << "个元素,请输入：";
        cin >> arr2[j];
        // cin.ignore();
    }

    // _sleep(500);
    // cout.clear();
    cout << endl << "=计算结果=" << endl;
    // printf("=计算结果=\n");

    /*isNum2(arr1,arr2,arrSize1,arrSize2);
    delete[] arr1;
    delete[] arr2;*/
}
