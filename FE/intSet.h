#include <iostream>

struct intSet
{
    int *data;
    int size;
    int capacity;

    intSet();
    intSet(const intSet& is);
    ~intSet();
    intSet(intSet &&is);
    intSet &operator=(const intSet& is);
    intSet &operator=(intSet &&is);
    void swap(intSet &is);
    intSet operator|(const intSet &other);
    intSet operator&(const intSet &other);
    bool operator==(const intSet &other);
    bool isSubset(const intSet &s);
    bool contains(int e);
    void add(int e);
    void remove(int e);
};

std::ostream& operator<<(std::ostream& out, const intSet& is);
