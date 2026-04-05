#include <iostream>
#include <stack>
using namespace std;

int main() {

    int n;      //명령의 수
    cin >> n;       //명령의 수 입력 받기

    stack<int> st;

	while (n--)     //명령의 수 만큼 반복
    {
        string cmd;
		cin >> cmd;     //명령 입력 받기

		if (cmd == "push")  //명령이 push인 경우
        {
            int x;
            cin >> x;
            st.push(x);
        }
		else if (cmd == "pop")      //명령이 pop인 경우
        {
			if (st.empty())     //스택이 빔
            {
                cout << -1 << '\n';
            }
			else        //스택이 안빔
            {
                cout << st.top() << '\n';       //가장 위에 있는 값 출력
                st.pop();       //그 수를 뺀다
            }
        }
		else if (cmd == "size")     //명령이 size인 경우
        {
            cout << st.size() << '\n';      //스택에 있는 정수 갯수 출력
        }
		else if (cmd == "empty")        //명령이 empty인 경우
        {
			cout << st.empty() << '\n';     //스택이 비어있으면 1, 아니면 0 출력 (true, false)
        }
		else if (cmd == "top")      //명령이 top인 경우
        {
			if (st.empty())     //스택이 빔
            {
                cout << -1 << '\n';
            }
			else              //스택이 안빔
            {
                cout << st.top() << '\n';
            }
        }
    }

    return 0;
}