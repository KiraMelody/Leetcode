#include<iostream>
#include<cstdio>
#include<map>
using namespace std;
map<int, string> word;
string numberToWords(int num) {
    word[1] = "One";
    word[2] = "Two";
    word[3] = "Three";
    word[4] = "Four";
    word[5] = "Five";
    word[6] = "Six";
    word[7] = "Seven";
    word[8] = "Eight";
    word[9] = "Nine";
    word[10] = "Ten";
    word[11] = "Eleven";
    word[12] = "Twelve";
    word[13] = "Thirteen";
    word[14] = "Fourteen";
    word[15] = "Fifteen";
    word[16] = "Sixteen";
    word[17] = "Seventeen";
    word[18] = "Eighteen";
    word[19] = "Nineteen";
    word[20] = "Twenty";
    word[30] = "Thirty";
    word[40] = "Forty";
    word[50] = "Fifty";
    word[60] = "Sixty";
    word[70] = "Seventy";
    word[80] = "Eighty";
    word[90] = "Ninety";
    word[100] = "Hundred";
    word[1000] = "Thousand";
    word[1000000] = "Million";
    word[1000000000] = "Billion";
    string ans = "";
    int ph = 1;
    if (num == 0)
        return "Zero";
    while(num > 0)
    {
        string tmp = "";
        int h = num % 1000 / 100;
        if(h > 0)
            tmp += word[h] + " " + word[100] + " ";
        int p = num % 100;
        if(word.find(p) == word.end())
        {
            int t = p / 10;
            if(t > 0)
                tmp += word[t * 10] + " ";
            int g = num % 10;
            if(g > 0)
                tmp += word[g] + " ";
        } else
        {
            tmp += word[p] + " ";
        }
        if(ph == 1)
            ans = tmp + ans;
        else if (tmp.size() != 0)
            ans = tmp + word[ph] + " " + ans;
        ph *= 1000;
        num /= 1000;
    }
    ans.erase(ans.size() - 1, 1);
    // cout<<"+"<<ans<<"+"<<endl;
    return ans;
}

int main()
{
    numberToWords(0);
    numberToWords(14);
    numberToWords(140);
    numberToWords(1400);
    numberToWords(14000);
    numberToWords(140000);
}