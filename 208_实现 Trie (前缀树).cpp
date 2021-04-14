class Trie
{
private:
    // 定义节点
    bool flag = false;
    Trie *next[26] = {nullptr};

public:
    Trie() {} // 构造函数

    void insert(string word)
    { // 插入
        Trie *node = this;
        for (int i = 0; i < word.length(); i++)
        {
            char c = word[i];
            if (node->next[c - 'a'] == nullptr)
            {
                node->next[c - 'a'] = new Trie();
            }
            node = node->next[c - 'a'];
        }
        node->flag = true; // 单词串的尾节点为true
    }

    bool search(string word)
    { // 查找单词是否存在Trie中
        Trie *node = this;
        for (int i = 0; i < word.length(); i++)
        {
            char c = word[i];
            if (node->next[c - 'a'] == nullptr)
                return false;
            node = node->next[c - 'a'];
        }
        return node->flag; // 如果该节点是串尾节点，则为true
    }

    bool startsWith(string prefix)
    { //查找前缀
        Trie *node = this;
        for (int i = 0; i < prefix.length(); i++)
        {
            char c = prefix[i];
            if (node->next[c - 'a'] == nullptr)
                return false;
            node = node->next[c - 'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */