#ifndef MIDTERM2_MYCLASS_H
#define MIDTERM2_MYCLASS_H


class myClass {
private:
    std::string fullName;
    int id;
public:
    myClass();
    ~myClass();
    void setFullName(std::string name);
    void setID(int id);
    std::string getFullName();
    int getID();
};


#endif //MIDTERM2_MYCLASS_H
