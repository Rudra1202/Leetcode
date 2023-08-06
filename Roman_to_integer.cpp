class Solution
{
public:
    int romanToInt(string s)
    {
        map<char, int> m = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int sum = 0;
        if (s.length() == 0)
            return 0;
        else if (s.length() == 1)
            return (m[s[0]]);
        else
        {
            sum = m[s[s.length() - 1]];
            for (int i = s.length() - 2; i >= 0; i--)
            {
                if (m[s[i]] < m[s[i + 1]])
                {
                    sum -= m[s[i]];
                }
                else
                {
                    sum += m[s[i]];
                }
            }
            return sum;
        }
    }
};