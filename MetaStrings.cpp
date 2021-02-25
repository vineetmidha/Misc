
// https://www.codingninjas.com/codestudio/problems/meta-strings_1089556

// Solved in Python using dictionary. This is a better solution from CN.

bool checkMeta(string &str1, string &str2)
{
    // If the length of strings is not equal, return false.
    if (str1.length() != str2.length())
    {
        return false;
    }

    // If the strings are already equal, return false.
    if (str1 == str2)
    {
        return false;
    }

    int n = str1.length();
    int count = 0;
    int first = -1, second = -1;

    for (int i = 0; i < n; i++)
    {
        // Count total unmatched characters.
        if (str1[i] != str2[i])
        {
            if (first == -1)
            {
                first = i;
            }
            else if (second == -1)
            {
                second = i;
            }
            count++;
        }
        if (count > 2)
        {
            return false;
        }
    }

    // If the count is equal to 1, means we can not make strings equal in 1 swap.
    if (count == 1)
    {
        return false;
    }

    // Swap the characters at unmatched indices.
    swap(str2[first], str2[second]);

    // After swapping check if the string become equal or not.
    bool ans = (str1[first] == str2[first]) && (str1[second] == str2[second]);

    return ans;
}
