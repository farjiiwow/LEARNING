#include <bits/stdc++.h>

using namespace std;

void print(void)
{
    cout << "farjii" << endl;
}

int sum(int a, int b)
{
    return a + b;
}

void explainPair(void);

void explainVector(void);

void explainList(void);

void explainDeque(void);

void explainStack(void);

void explainQueue(void);

void explainPq(void);

void explainSet(void);

void explainMultiSet(void);

void explainUSet(void);

void explainMap(void);

void explainMultiMap(void);

void explainUnorderedMap(void);

void explainExtra(void);

bool comp(pair<int, int>, pair<int, int>);

int main(void)
{

    print();
    cout << sum(2, 3) << endl;
    explainPair();
    explainVector();
    explainList();
    explainDeque();
    explainStack();
    explainQueue();
    explainPq();
    explainSet();
    explainMultiSet();
    explainUSet();
    explainMap();
    explainMultiMap();
    explainUnorderedMap();
    explainExtra();

    return 0;
}

void explainPair(void)
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> p1 = {1, {2, 4}};
    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;

    pair<pair<int, int>, int> p2 = {{11, 22}, 44};
    cout << p2.first.first << " " << p2.first.second << " " << p2.second << endl;

    pair<int, int> arr[] = {{1, 3}, {5, 9}, {11, 22}};
    cout << arr[0].first << " " << arr[0].second << endl;
    cout << arr[2].first << " " << arr[2].second << endl;
    cout << arr[1].first << " " << arr[1].second << endl;
}

void explainVector(void)
{
    cout << "vector: " << endl;
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    cout << v[0] << " " << v[1] << endl;

    vector<pair<int, int>> vec;
    vec.push_back({3, 4});
    vec.emplace_back(5, 9);
    cout << vec[0].first << " " << vec[0].second << endl;
    cout << vec[1].first << " " << vec[1].second << endl;

    cout << "V1 vector" << endl;

    vector<int> v1(5, 100);
    for (auto it4 : v1)
    {
        cout << it4 << " ";
    }
    cout << endl;

    cout << "V2 vector" << endl;
    vector<int> v2(5);
    for (auto it4 : v2)
    {
        cout << it4 << " ";
    }
    cout << endl;

    cout << "V3 vector" << endl;
    vector<int> v3(5, 30);
    for (auto it4 : v3)
    {
        cout << it4 << " ";
    }
    cout << endl;

    cout << "v4 vector" << endl;
    vector<int> v4(v3);
    for (auto it4 : v4)
    {
        cout << it4 << " ";
    }
    cout << endl;

    printf("%p \n", v3);
    printf("%p \n", v4.begin());
    // deep copy (different memory addresss)

    vector<int> v5;
    v5.push_back(11);
    v5.push_back(22);
    v5.push_back(33);
    v5.push_back(44);
    v5.push_back(55);

    cout << v5[0] << " " << v5[1] << " " << v5[2] << " " << v5[3] << " " << v5[4] << endl;
    cout << v5.at(0) << " " << v5.at(1) << " " << v5.at(2) << " " << v5.at(3) << " " << v5.at(4) << endl;

    vector<int>::iterator it = v5.begin();
    printf("%p \n", it);
    cout << *(it) << endl;
    it++;
    cout << *(it) << endl;

    it = it + 2;
    cout << *(it) << endl;

    vector<int>::iterator it1 = v5.end();
    printf("%p \n", it1);
    cout << *(it1) << endl;
    it1--;
    cout << *(it1) << endl;

    vector<int>::reverse_iterator it2 = v5.rend();
    printf("%p \n", it2);
    cout << *(it2) << endl;
    it2--;
    cout << *(it2) << endl;
    it2--;
    cout << *(it2) << endl;

    vector<int>::reverse_iterator it3 = v5.rbegin();
    printf("%p \n", it3);
    cout << *(it3) << endl;
    it3++;
    cout << *(it3) << endl;

    cout << endl;

    for (vector<int>::iterator it4 = v5.begin(); it4 != v5.end(); it4++)
    {
        cout << *(it4) << " ";
    }
    cout << endl;

    for (auto it4 = v5.begin(); it4 != v5.end(); it4++)
    {
        cout << *(it4) << " ";
    }
    cout << endl;

    for (auto it4 : v5)
    {
        cout << it4 << " ";
    }
    cout << endl;

    vector<int> v6(v5);
    for (auto it4 : v6)
    {
        cout << it4 << " ";
    }
    cout << endl;

    v6.erase(v6.begin()); // 22, 33, 44, 55
    for (auto it4 : v6)
    {
        cout << it4 << " ";
    }
    cout << endl;
    v6.erase(v6.begin() + 1); // 22, 44, 55
    for (auto it4 : v6)
    {
        cout << it4 << " ";
    }
    cout << endl;

    // v.erase(start, end)
    vector<int> v7(v5);
    v7.erase(v7.begin() + 1, v7.begin() + 4);
    for (auto it4 : v7)
    {
        cout << it4 << " ";
    }
    cout << endl;

    vector<int> v8 = {10, 20, 30, 40, 50};
    for (auto it4 : v8)
    {
        cout << it4 << " ";
    }
    cout << endl;

    vector<int> v9(2, 100);
    for (auto it4 : v9)
    {
        cout << it4 << " ";
    }
    cout << endl;
    v9.insert(v9.begin(), 300); // 300, 100, 100
    for (auto it4 : v9)
    {
        cout << it4 << " ";
    }
    cout << endl;

    v9.insert(v9.begin() + 1, 3, 99); // 300, 99, 99, 99, 100, 100
    for (auto it4 : v9)
    {
        cout << it4 << " ";
    }
    cout << endl;

    vector<int> copy(2, 11); // 300, 99, 99, 99, 11, 11, 100, 100
    v9.insert(v9.begin() + 4, copy.begin(), copy.end());
    for (auto it4 : v9)
    {
        cout << it4 << " ";
    }
    cout << endl;

    cout << v9.size() << endl;

    v9.pop_back(); // 300, 99, 99, 99, 11, 11, 100
    for (auto it4 : v9)
    {
        cout << it4 << " ";
    }
    cout << endl;

    vector<int> v10 = {11, 22};
    vector<int> v11 = {33, 44};
    v10.swap(v11);
    for (auto it4 : v10) // 33, 44
    {
        cout << it4 << " ";
    }
    cout << endl;
    for (auto it4 : v11) // 11, 22
    {
        cout << it4 << " ";
    }
    cout << endl;
    v9.clear();
    for (auto it4 : v9)
    {
        cout << it4 << " ";
    }
    cout << endl;
}

void explainList()
{
    list<int> ls = {11, 22, 33, 44, 55};
    for (auto it : ls)
    {
        cout << it << " ";
    }
    cout << endl;

    list<int> ls1;
    ls1.push_back(1);
    for (auto it : ls1)
    {
        cout << it << " ";
    }
    cout << endl;

    ls1.emplace_back(3);
    for (auto it : ls1)
    {
        cout << it << " ";
    }
    cout << endl;

    ls1.push_front(5);
    for (auto it : ls1)
    {
        cout << it << " ";
    }
    cout << endl;

    ls1.emplace_front(7);
    for (auto it : ls1)
    {
        cout << it << " ";
    }
    cout << endl;

    // rest function are same as vector
    //  begin, end, rbegin, rend, clear, insert, size, swap
}

void explainDeque(void)
{
    deque<int> dq;

    cout << "Deque" << endl;

    dq.push_back(1);

    for (auto it : dq)
    {
        cout << it << " ";
    }
    cout << endl;

    dq.emplace_back(2);

    for (auto it : dq)
    {
        cout << it << " ";
    }
    cout << endl;

    dq.push_front(4);

    for (auto it : dq)
    {
        cout << it << " ";
    }
    cout << endl;

    dq.emplace_front(3);

    for (auto it : dq)
    {
        cout << it << " ";
    }
    cout << endl;

    dq.pop_back();

    for (auto it : dq)
    {
        cout << it << " ";
    }
    cout << endl;

    dq.pop_front();

    for (auto it : dq)
    {
        cout << it << " ";
    }
    cout << endl;

    cout << dq.back() << endl;

    cout << dq.front() << endl;

    // rest function same as vector
    //  begin, end, rbegin, rend, clear, insert, size, swap
}

void explainStack(void)
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);

    cout << "stack" << endl;

    cout << st.top() << endl;

    st.pop();

    cout << st.top() << endl;

    cout << st.size() << endl;

    cout << st.empty() << endl;

    stack<int> st1, st2;
    st1.swap(st2);
}

void explainQueue(void)
{
    queue<int> q;

    cout << "queue" << endl;

    q.push(1);
    q.push(2);
    q.emplace(4);

    q.back() += 5;

    cout << q.back() << endl;

    cout << q.front() << endl;

    q.pop();

    cout << q.front() << endl;

    // size, swap, empty same as stack
}

void explainPq(void)
{
    // max heap
    priority_queue<int> pq;

    cout << "Priority queue" << endl;

    pq.push(5);

    pq.push(2);

    pq.push(8);

    pq.emplace(10);

    cout << pq.top() << endl;

    pq.pop();

    cout << pq.top() << endl;

    // size swap empty function same as others
    // min heap
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(2);
    pq1.push(5);
    pq1.push(8);
    pq1.emplace(10);

    cout << pq1.top() << endl;
}

void explainSet(void)
{
    set<int> st;
    st.insert(1);
    st.emplace(2);
    st.insert(2);
    st.insert(4);
    st.insert(3);

    cout << "Set" << endl;

    /*
    functionality of insert in vector
    can be used also, that only increases efficiency
    */

    // begin(), end(), rbegin(), rend(), size(),
    // empty() and swap() are same as those of above

    // {1, 2, 3, 4, 5}
    auto it = st.find(3);
    printf("%p \n", it);

    auto it1 = st.find(5);
    printf("%p \n", it1);

    auto it2 = st.find(6);
    printf("%p \n", it2);

    st.erase(5); // take logarithmic time

    int count = st.count(1);

    auto it3 = st.find(3);
    st.erase(it3); // it take constant time

    auto it4 = st.find(2);
    auto it5 = st.find(4);
    st.erase(it4, it5); // after erase {1, 4, 5} [first, last)

    auto it6 = st.lower_bound(2);
    cout << *(it6) << endl;
    auto it7 = st.upper_bound(3);
    cout << *(it7) << endl;
}

void explainMultiSet(void)
{

    // everything is same as set
    // stores duplicate elements also

    cout << "Multiset" << endl;
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    multiset<int> ms1;
    ms1 = ms;
    ms.erase(1);
    int cnt = ms.count(1);
    cout << cnt << endl;

    ms1.erase(ms1.find(1));

    int cnt1 = ms1.count(1);
    cout << cnt1 << endl;
    for (auto x : ms1)
    {
        cout << x << " ";
    }
    cout << endl;

    // rest all function are same as set
}

void explainUSet(void)
{
    unordered_set<int> ust;
    /*
    lower bound and upper bound function
    does not works, rest all functions
    are same as above, it  does not stores
    in any particular order it has a better
    complexity than set in most cases,
    except some when collision happens
    */
}

void explainMap(void)
{

    cout << "Map" << endl;
    map<int, int> mp;

    map<int, pair<int, int>> mp1;

    map<pair<int, int>, int> mp2;

    mp[1] = 2;

    mp.emplace(3, 1);

    mp.insert({2, 4});

    mp2[{2, 3}] = 10;

    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }

    cout << mp[1] << endl;
    cout << mp[5] << endl;

    auto it = mp.find(3);
    cout << it->second << endl;

    auto it1 = mp.find(5);
    cout << it1->second << endl;

    auto it2 = mp.lower_bound(2);
    auto it3 = mp.upper_bound(3);

    // erase, swap, size, empty are same
}

void explainMultiMap(void)
{
    // everything same as map, only it can store multiple keys
    // only map[key] cannot be used here
}

void explainUnorderedMap(void)
{
    // same as set and unordered_set difference
}

void explainExtra(void)
{
    cout << "sort" << endl;

    // sort(start_iterator, end_iterator);

    vector<int> v = {1, 5, 3, 2};

    vector<int> v1 = v;

    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;

    sort(v.begin(), v.end());

    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;

    for (auto it : v1)
    {
        cout << it << " ";
    }
    cout << endl;

    sort(v1.begin(), v1.end(), greater<int>());

    for (auto it : v1)
    {
        cout << it << " ";
    }
    cout << endl;

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};

    // pair<int, int> a[] = {{1, 4},
    //                       {3, 2},
    //                       {2, 4},
    //                       {4, 1}};

    // sort it according to second element
    // if second element is same, then sort
    // it according to first element but in descending

    for (auto it : a)
    {
        cout << it.first << " " << it.second << endl;
    }

    sort(a, a + 3, comp);

    for (auto it : a)
    {
        cout << it.first << " " << it.second << endl;
    }

    int num = 7;
    int cnt = __builtin_popcount(num);
    cout << "popcount :" << endl;
    cout << cnt << endl;

    int num2 = 6;
    int cnt2 = __builtin_popcount(num2);
    cout << cnt2 << endl;

    long long num3 = 165786578687;
    int cnt3 = __builtin_popcountll(num3);
    cout << cnt3 << endl;

    cout << "permutation" << endl;

    string s = "123";
    sort(s.begin(), s.end());

    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    string s1 = "231";
    cout << "second " << endl;
    do
    {
        cout << s1 << endl;
    } while (next_permutation(s1.begin(), s1.end()));

    cout << "max element from array" << endl;

    int arr[] = {1, 2, 3, 5, 4, 23, 56, 1, 5, 93, 23, 5, 66, 77};

    int maxi = *max_element(arr, arr + 14);

    cout << maxi << endl;

    cout << "min element from array" << endl;

    int min = *min_element(arr, arr + 14);

    cout << min << endl;
}

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;

    // same

    if (p1.first > p2.first)
        return true;
    return false;
}