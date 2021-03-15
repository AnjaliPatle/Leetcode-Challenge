class Solution {
public:
    map<string,string>m;
    long int k=0;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string s="Anjali/"+to_string(k);
        m[s]=longUrl;
        k++;
        return s;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return m[shortUrl];
    }
};
