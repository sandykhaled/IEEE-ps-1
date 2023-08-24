class Solution {
public:
    bool canConstruct(string r, string m) {
        int n = r.size();
        int n2 = m.size();
        int count = 0;
        sort(r.begin(), r.end());
        sort(m.begin(), m.end());
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n2; j++) {
                if (r[i] == m[j]) {
                    count++;
                    m[j] = 65;
                    break;
                }
            }
        }
        if (count == n) {
            return true;
        }
        return false;

    }
};