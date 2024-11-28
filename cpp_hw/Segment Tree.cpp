#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 세그먼트 트리를 구현하는 클래스 정의
class SegmentTree {
private:
    vector<int> tree; // 세그먼트 트리를 저장할 배열
    int n; // 입력 배열의 크기

    // 세그먼트 트리를 재귀적으로 빌드
    void build(const vector<int>& arr, int node, int start, int end) {
        if (start == end) { 
            // 리프 노드
            tree[node] = arr[start];
        } else {
            int mid = (start + end) / 2;
            build(arr, node * 2, start, mid); // 왼쪽 자식
            build(arr, node * 2 + 1, mid + 1, end); // 오른쪽 자식
            tree[node] = max(tree[node * 2], tree[node * 2 + 1]); // 현재 노드에 최대값 저장
        }
    }

    // 특정 범위의 최대값을 쿼리
    int query(int node, int start, int end, int l, int r) {
        if (r < start || end < l) { 
            // 범위 밖
            return -1; 
        }
        if (l <= start && end <= r) { 
            // 범위 내 완전히 포함
            return tree[node]; 
        }
        int mid = (start + end) / 2;
        int left_query = query(node * 2, start, mid, l, r); // 왼쪽 자식에서 쿼리
        int right_query = query(node * 2 + 1, mid + 1, end, l, r); // 오른쪽 자식에서 쿼리
        return max(left_query, right_query); // 최대값 반환
    }

    // 특정 인덱스의 값을 업데이트
    void update(int node, int start, int end, int idx, int val) {
        if (start == end) {
            // 리프 노드 업데이트
            tree[node] = val;
        } else {
            int mid = (start + end) / 2;
            if (start <= idx && idx <= mid) { 
                // 왼쪽 자식 갱신
                update(node * 2, start, mid, idx, val);
            } else { 
                // 오른쪽 자식 갱신
                update(node * 2 + 1, mid + 1, end, idx, val);
            }
            // 현재 노드 갱신
            tree[node] = max(tree[node * 2], tree[node * 2 + 1]);
        }
    }

public:
    // 생성자
    SegmentTree(const vector<int>& arr) {
        n = arr.size();
        tree.resize(4 * n); // 세그먼트 트리 크기 할당
        build(arr, 1, 0, n - 1); // 트리 생성
    }

    // 외부에서 호출 가능한 업데이트 함수
    void update(int idx, int val) {
        update(1, 0, n - 1, idx, val);
    }

    // 외부에서 호출 가능한 쿼리 함수
    int query(int l, int r) {
        return query(1, 0, n - 1, l, r);
    }
};

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    SegmentTree segTree(arr);

    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            int x, v;
            cin >> x >> v;
            x--; // 0-based 인덱스
            segTree.update(x, v);
        } else if (type == 2) {
            int l, r;
            cin >> l >> r;
            l--; r--; // 0-based 인덱스
            cout << segTree.query(l, r) << endl;
        }
    }

    return 0;
}

// 세그먼트 트리를  사용하여 최대 마력 수치를 출력하게끔 구현
// 세그먼트 트리를 생성하는데 O(n), 마력 수치를 계산, 변경에 O(log n)만큼의 시간복잡도가 소요됨