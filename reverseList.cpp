#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* reverseList(ListNode* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    ListNode* pre = nullptr;
    while (head->next != nullptr) {
        ListNode* nextNode = head->next;
        head->next = pre;
        pre = head;
        head = nextNode;
    }
    head->next = pre;
    return head;
}

int main() {
    int n;
    cin >> n;

    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ListNode* node = new ListNode(x);
        if (!head) {
            head = tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
    }

    head = reverseList(head);

    ListNode* p = head;
    while (p) {
        cout << p->val;
        if (p->next) cout << " ";
        p = p->next;
    }
    cout << endl;
    
    return 0;
}