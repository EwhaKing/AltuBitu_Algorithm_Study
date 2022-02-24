
#include<iostream>
#include<algorithm>
using namespace std;

void BinarySearch(int *arr, int start, int end, int searchNum){

    int mid;

    while(end - start >= 0){
        mid = (start+end)/2;

        if(arr[mid] == searchNum){
            printf("1 \n");
            return;
        }else if(arr[mid] > searchNum){
            end = mid - 1;
        }else {
            start = mid + 1;
        }
    }

    printf("0 \n");
    return;

}


int main() {

    int n,m;
    scanf("%d", &n);
    int nArr[n];

    for(int i=0; i<n; i++)
        scanf("%d", &nArr[i]);

    sort(nArr, nArr + n );


    scanf("%d", &m);

    int tmp;
    int end = sizeof(nArr)/sizeof(nArr[0]);

    for(int i=0; i<m; i++){
        scanf("%d",&tmp);
        BinarySearch(nArr, 0, end, tmp);
    }
}