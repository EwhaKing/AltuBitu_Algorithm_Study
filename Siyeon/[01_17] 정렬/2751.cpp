//이유는 모르나 vector이나 iostream 쓰려고 하면 시간초과남..
#include <cstdio>
constexpr auto MAX = 1'000'000;

void merge(int* v, int left, int mid, int right) {
    int a[MAX];
    int i = left, j = mid + 1, k = left, l=0;
    while (i <= mid && j <= right) {
        if (v[i] <= v[j]) {
            a[k++] = v[i++];
        }
        else {
            a[k++] = v[j++];
        }
    }
    if (i > mid) {
        for (int l = j; l <= right; l++) {
            a[k++] = v[l];
        }
    }
    else {
        for (int l = i; l <= mid; l++) {
            a[k++] = v[l];
        }
    }
    for (int l = left; l <= right; l++) {
        v[l] = a[l];
    }
}

void merge_sort(int* v, int left, int right) {
    int mid;
    if (left < right) {
        mid = (left + right) / 2;
        merge_sort(v, left, mid);
        merge_sort(v, mid + 1, right);
        merge(v, left, mid, right);
    }
}

int main() {
    int cnt;
    scanf("%d", &cnt);
    int num[MAX];
    for (int i = 0; i < cnt; i++) {
        scanf("%d", &num[i]);
    }
    merge_sort(num, 0, cnt - 1);
    for (int i = 0; i < cnt; i++) {
        printf("%d\n", num[i]);
    }

}
