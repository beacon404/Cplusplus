#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    ifstream file;
    string line;
    string word;

    cout << "Enter a word: ";
    cin >> word;

    file.open("data.json");

    if (!file.is_open()) {
        cerr << "Error opening the file." << endl;
        return 1;
    }

    vector<string> extractedWords;

    while (getline(file, line))
    {
        if (line.find(word) != string::npos) {
            size_t startPos = line.find("\"");
            size_t endPos = line.find("\"", startPos + 1);

            while (startPos != string::npos && endPos != string::npos) {
                string extractedWord = line.substr(startPos + 1, endPos - startPos - 1);
                extractedWords.push_back(extractedWord);

                startPos = line.find("\"", endPos + 1);
                endPos = line.find("\"", startPos + 1);
            }
        }
    }

    file.close();

    // Display the extracted words
    if (!extractedWords.empty()) {
        cout << "Extracted words:" << endl;
        for (const auto& extractedWord : extractedWords) {
            cout << extractedWord << endl;
        }
    } else {
        cout << "No occurrences found." << endl;
    }

    return 0;
}
