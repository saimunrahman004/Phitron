#include<bits/stdc++.h>
using namespace std;

// হিপে নতুন ভ্যালু ইনসার্ট করার ফাংশন
void insert_heap(vector<int>& v, int val) {
    v.push_back(val);
    int cur_idx = v.size() - 1;
    while (cur_idx != 0) {
        int par_idx = (cur_idx - 1) / 2;

        if (v[par_idx] > v[cur_idx]) // Min Heap লজিক
            swap(v[par_idx], v[cur_idx]);
        else 
            break;
        cur_idx = par_idx;
    }
}

// হিপ থেকে রুট (সবচেয়ে ছোট মান) ডিলিট করার ফাংশন
void delete_heap(vector<int>& v) {
    if (v.empty()) return; 

    // যদি একটি মাত্র নোড থাকে
    if (v.size() == 1) {
        v.pop_back();
        return;
    }

    // শেষ নোডকে রুটে নিয়ে আসা
    v[0] = v.back();
    v.pop_back();

    int cur_idx = 0;
    while (true) {
        int left_idx = cur_idx * 2 + 1;
        int right_idx = cur_idx * 2 + 2;
        int last_idx = v.size() - 1;

        int smallest_idx = cur_idx;

        // বাম চাইল্ডের সাথে তুলনা
        if (left_idx <= last_idx && v[left_idx] < v[smallest_idx]) {
            smallest_idx = left_idx;
        }

        // ডান চাইল্ডের সাথে তুলনা
        if (right_idx <= last_idx && v[right_idx] < v[smallest_idx]) {
            smallest_idx = right_idx;
        }

        // যদি কোনো চাইল্ড রুটের চেয়ে ছোট হয় তবে সোয়াপ
        if (smallest_idx != cur_idx) {
            swap(v[cur_idx], v[smallest_idx]);
            cur_idx = smallest_idx;
        } else {
            break; 
        }
    }
}

// হিপ প্রিন্ট করার ফাংশন
void print_heap(vector<int> v) {
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        insert_heap(v, val);
    }

    cout << "Heap after insertion: ";
    print_heap(v);

    delete_heap(v);
    cout << "Heap after deleting root: ";
    print_heap(v);

    return 0;
}