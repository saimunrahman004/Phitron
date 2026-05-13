#include<bits/stdc++.h>
using namespace std;

// Max Heap-এ ইনসার্ট করার ফাংশন
void insert_heap(vector<int>& v, int val) {
    v.push_back(val);
    int cur_idx = v.size() - 1;
    while (cur_idx != 0) {
        int par_idx = (cur_idx - 1) / 2;

        // পরিবর্তন: প্যারেন্ট ছোট হলে সোয়াপ করে বড়টাকে উপরে পাঠাও
        if (v[par_idx] < v[cur_idx]) 
            swap(v[par_idx], v[cur_idx]);
        else 
            break;
        cur_idx = par_idx;
    }
}

// Max Heap থেকে রুট (সবচেয়ে বড় মান) ডিলিট করা
void delete_heap(vector<int>& v) {
    if (v.empty()) return;
    if (v.size() == 1) {
        v.pop_back();
        return;
    }

    v[0] = v.back();
    v.pop_back();

    int cur_idx = 0;
    while (true) {
        int left_idx = cur_idx * 2 + 1;
        int right_idx = cur_idx * 2 + 2;
        int last_idx = v.size() - 1;

        int largest_idx = cur_idx;

        // বাম চাইল্ড বড় কি না চেক
        if (left_idx <= last_idx && v[left_idx] > v[largest_idx]) {
            largest_idx = left_idx;
        }

        // ডান চাইল্ড বাম বা রুটের চেয়েও বড় কি না চেক
        if (right_idx <= last_idx && v[right_idx] > v[largest_idx]) {
            largest_idx = right_idx;
        }

        // যদি চাইল্ড বড় হয় তবে সোয়াপ করো
        if (largest_idx != cur_idx) {
            swap(v[cur_idx], v[largest_idx]);
            cur_idx = largest_idx;
        } else {
            break;
        }
    }
}

void print_heap(vector<int> v) {
    for (int x : v) cout << x << " ";
    cout << endl;
}

int main() {
    vector<int> v;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        insert_heap(v, val);
    }

    cout << "Max Heap: ";
    print_heap(v);

    delete_heap(v);
    cout << "After Delete (Max): ";
    print_heap(v);

    return 0;
}