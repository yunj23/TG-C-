#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    pair<int, string> arr[100001];     //나이, 이름을 저장할 배열
    int n;      //회원 수 저장할 변수
    cin >> n;       //회원 수 입력

    for (int i = 0; i < n; i++)       //회원 수 만큼 반복
    {
        cin >> arr[i].first >> arr[i].second;   //회원 정보 입력 받기
    }

    stable_sort(arr, arr + n, [](const pair<int, string>& a, const pair<int, string>& b)
        {
            return a.first < b.first;     //나이 비교하여 정렬
        });

    for (int i = 0; i < n; i++)       //회원 수 만큼 반복
    {
        cout << arr[i].first << " " << arr[i].second << endl;   //회원 정보 출력
    }

    return 0;
}