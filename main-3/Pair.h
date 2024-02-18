#ifndef PAIR_H
#define PAIR_H

template <typename K, typename V>
class Pair
{
public:
    Pair(K key, V value);
    K getKey();
    V getValue();

private:
    K key;
    V value;
};
template <typename K, typename V>
K Pair<K, V>::getKey()
{
    return key;
}

template <typename K, typename V>
V Pair<K, V>::getValue()
{
    return value;
}
template <typename K, typename V>
Pair<K, V>::Pair(K key, V value) : key{key}, value{value}
{
    cout << key << " = " << value << endl;
}

#endif
