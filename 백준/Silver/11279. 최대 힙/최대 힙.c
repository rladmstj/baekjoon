#include <stdio.h>

#define MAX 100000
int heap[MAX];
int size = 0;

void push(int x) {
    heap[++size] = x;     // 맨 끝에 삽입
    int i = size;
    // 위로 올라가며 부모보다 크면 swap
    while (i > 1 && heap[i] > heap[i/2]) {
        int tmp = heap[i];
        heap[i] = heap[i/2];
        heap[i/2] = tmp;
        i /= 2;
    }
}

int pop() {
    if (size == 0) return 0;   // 비었을 때 0 출력 (BOJ 11279 기준)
    int top = heap[1];
    heap[1] = heap[size--];    // 마지막 원소를 루트로 이동
    int i = 1;
    // 아래로 내려가며 자식보다 작으면 swap
    while (1) {
        int left = i*2, right = i*2+1, largest = i;
        if (left <= size && heap[left] > heap[largest]) largest = left;
        if (right <= size && heap[right] > heap[largest]) largest = right;
        if (largest == i) break;
        int tmp = heap[i];
        heap[i] = heap[largest];
        heap[largest] = tmp;
        i = largest;
    }
    return top;
}

int main() {
    int n, x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x == 0) printf("%d\n", pop());
        else push(x);
    }
    return 0;
}
