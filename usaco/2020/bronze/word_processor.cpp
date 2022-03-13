#include <iostream>

using namespace std;

int main()
{
    int N;
    int K;

    cin >> N >> K;

    int length = 0;
    for (int i = 0; i < N; i++)
    {
        string word;
        cin >> word;

        if (length + word.length() > K)
        {
            cout << "\n" + word; // if the length exceeds K, start a new line and print the word
            length = word.length(); // update the length to see if another word can fit on the same line
        }
        else
        {
            // only add space if there is a word already
            if (length > 0) {
                cout << " ";
            }
            cout << word; // add word or next word
            length += word.length(); // update length
        }
    }
    cout << endl;

    return 0;
}