#include <iostream>
using namespace std;

//VALIDATION OF STRINGS
//METHOD1
int valid(char *name)
{
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (!(name[i] >= 65 && name[i] <= 90) && !(name[i] >= 97 && name[i] <= 122) && !(name[i] >= 48 && name[i] <= 57))
        {
            return 0;
        }
    }
    return 1;
}

//ANAGRAMS
//HAVE TO BE OF EQUAL SIZE
//CHECKING PRESENCE OF LETTER IN 2ND -> O(n^2)

void anagram(char *word1, char *word2)
{
    int i;
    bool ana = true;
    //T-> O(N)
    int h[26] = {0};
    for (i = 0; word1[i] != '\0'; i++)
    {
        h[word1[i] - 97] += 1;
    }
    for (i = 0; word2[i] != '\0'; i++)
    {
        h[word2[i] - 97] -= 1;
    }
    for (i = 0; i < 26; i++)
    {
        if (h[i] != 0)
        {
            ana = false;
            break;
        }
    }
    if (ana)
    {
        cout << "It is anagram\n";
    }
    else
    {
        cout << "Not anagram\n";
    }
}

//PERMUTATIONS
//ABC, BCA, ACB, BAC, CAB, CBA
//3 - > 3!==>6

void perm(char *word, int k)
{
    static int a[10] = {0};
    static char res[10];
    int i;

    if (word[k] == '\0')
    {
        res[k] = '\0';
        cout << res << "\n";
    }
    for (i = 0; word[i] != '\0'; i++)
    {
        if (a[i] == 0)
        {
            res[k] = word[i];
            a[i] = 1;
            perm(word, k + 1);
            a[i] = 0;
        }
    }
}

//PERMUTATION OF STRING USING SWAPPING
void perm1(char s[], int l, int h)
{
    int i;
    if (l == h)
    {
        cout << s << "\n";
    }
    else
    {
        for (i = l; i <= h; i++)
        {
            swap(s[l], s[i]);
            perm1(s, l + 1, h);
            swap(s[l], s[i]);
        }
    }
}

int main()
{

    //char temp;
    // char X[6] = {'A','B','C','D','E','\0'};
    // char name[] = "MEOW meow";
    // char x[10];
    // end of string -> '\0'
    //cin>>x;
    // gets(x);
    // cout<<x;
    // cout<<name;

    //LENGTH OF STR
    char s[] = "Welcome";
    int i;
    for (i = 0; i < s[i] != '\0'; i++)
    {
    }
    cout << i;

    //CHANGING CASES
    //A(65)-a(97) --> 32
    //LOWERCASE-UPPERCASE=32
    char lowerCase[] = "WELCOME";
    for (int i = 0; lowerCase[i] != 0; i++)
    {
        lowerCase[i] = lowerCase[i] + 32;
    }
    cout << lowerCase << "\n";

    char toggle[] = "PiKaMeOw";
    for (int i = 0; toggle[i] != '\0'; i++)
    {
        if (toggle[i] >= 65 && toggle[i] <= 90)
        {
            toggle[i] += 32;
        }
        else if (toggle[i] >= 'a' && toggle[i] <= 'z')
        {
            toggle[i] -= 32;
        }
        else
        {
        }
    }
    cout << toggle << "\n";

    //COUNTING WORDS, VOWELS AND CONSONENTS
    char counting[] = "how are  you";
    int vcount = 0;
    int ccount = 0;
    int word = 0;
    for (int i = 0; i < counting[i] != '\0'; i++)
    {
        if (counting[i] == 'a' || counting[i] == 'e' || counting[i] == 'i' || counting[i] == 'o' || counting[i] == 'u')
        {
            vcount++;
        }
        else if ((counting[i] >= 65 && counting[i] <= 90) || (counting[i] >= 97 && counting[i] <= 122))
        {
            ccount++;
        }

        if (counting[i] == ' ' && counting[i - 1] != ' ')
        {
            word++;
        }
    }
    cout << vcount << " " << ccount << "\n";
    cout << word + 1 << "\n";

    char name[] = "Pikameow532@2";
    //char *name = "Pika532002";
    if (valid(name))
    {
        cout << "Valid hai\n";
    }
    else
    {
        cout << "Invalid hai\n";
    }

    char *name2;
    for (i = 0; i < name[i] != '\0'; i++)
    {
    }
    i = i - 1;
    int j = 0;
    for (j = 0; i >= 0; i--, j++)
    {
        name2[j] = name[i];
    }
    name2[j] = '\0';
    cout << name2 << "\n";

    //Method 2
    for (j = 0; name[j] != '\0'; j++)
    {
    }
    j = j - 1;
    for (i = 0; i < j; i++, j--)
    {
        char t = name[i];
        name[i] = name[j];
        name[j] = t;
    }
    cout << name << "\n";

    //COMPARING STRINGS -> DICT
    char a[] = "Painter";
    char b[] = "Paintera";

    for (i = 0, j = 0; a[i] != '\0' && b[j] != '\0'; i++, j++)
    {
        if (a[i] != b[j])
        {
            break;
        }
    }
    if (a[i] == b[j])
    {
        cout << "equal\n";
    }
    else if (a[i] < b[j])
    {
        cout << "a smaller\n";
    }
    else
    {
        cout << "a greater\n";
    }

    //FINDING DUPLICATES->USING HASHTABLE
    //hash array size -> 25
    // f(102) - 97 = 5
    // f(105) - 95 = 8

    char duplicates[] = "finding";
    int H[26] = {0};
    for (i = 0; duplicates[i] != '\0'; i++)
    {
        H[duplicates[i] - 97] += 1;
    }
    for (i = 0; i < 26; i++)
    {
        if (H[i] > 1)
        {
            cout << char(i + 97) << " " << H[i] << "\n";
        }
    }

    //DUPLICATES USING BITS
    //1. LEFT SHIFT char H = 8, |0|1|0|0|0|
    // H = 10, |1|0|0|1|0|
    // H = 1, |0|0|0|0|1| -> H<<2 |0|0|1|0|0|

    //2. AND
    //3. OR
    //4. MASKING
    // |1|0|0|0|0| h
    // |0|0|0|0|1| a
    // |0|0|1|0|0| a<<2 a&h ->0
    // |1|0|0|0|0| a<<4 a&h ->1

    //5. MERGING
    // |1|0|0|0|0| h
    // |0|0|0|0|1| a
    // |0|0|1|0|0| a<<2 a|h ->1 --> |1|0|1|0|0|

    // char duplicates1[] = "finding";
    // int H1 = 0, x = 0 , i = 0;
    // for (i = 0; duplicates1[i]!='\0'; i++)
    // {
    //     x = 1;
    //     x = x << (duplicates1[i] - 97);
    //     if ((x & H1) != 0)
    //     {
    //         cout<<duplicates1[i]<<" is a duplicate\n";
    //     }else{
    //         H1 = (H1 | x);
    //     }
    // }

    anagram("decimal", "medical");
    perm("blo", 0);
    return 0;
}