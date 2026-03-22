#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* nextNode) : val(x), next(nextNode) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);
        ListNode* cur = &dummy;

        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                cur->next = list1;
                list1 = list1->next;
            } else {
                cur->next = list2;
                list2 = list2->next;
            }
            cur = cur->next;
        }

        cur->next = (list1 != nullptr) ? list1 : list2;
        return dummy.next;
    }
};

ListNode* buildList(const vector<int>& nums) {
    ListNode dummy(0);
    ListNode* tail = &dummy;

    for (int num : nums) {
        tail->next = new ListNode(num);
        tail = tail->next;
    }

    return dummy.next;
}

void printList(ListNode* head) {
    bool first = true;
    while (head != nullptr) {
        if (!first) {
            cout << " ";
        }
        cout << head->val;
        first = false;
        head = head->next;
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> nums1(n);
    vector<int> nums2(m);

    for (int i = 0; i < n; ++i) {
        cin >> nums1[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> nums2[i];
    }

    ListNode* list1 = buildList(nums1);
    ListNode* list2 = buildList(nums2);

    Solution solution;
    ListNode* merged = solution.mergeTwoLists(list1, list2);
    printList(merged);

    return 0;
}
