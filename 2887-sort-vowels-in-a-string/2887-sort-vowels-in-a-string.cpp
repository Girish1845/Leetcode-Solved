class Solution {
public:
    string sortVowels(string s) {
        auto isVowel = [](char c) {
            c = tolower(c);
            return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
        };

        string vowels;
        for (char c : s) {
            if (isVowel(c)) vowels.push_back(c);
        }

        // Sort collected vowels
        sort(vowels.begin(), vowels.end());

        // Replace vowels in order
        int idx = 0;
        for (char &c : s) {
            if (isVowel(c)) {
                c = vowels[idx++];
            }
        }
        return s;
    }
};
