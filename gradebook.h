#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <string>

class GradeBook
{
public:
    explicit GradeBook(std::string name); //初始化课程名
    void setCourseName(std::string name); //设置课程名
    std::string getCourseName() const; //获取课程名
    void displayMessage() const; //显示欢迎消息
    void determineClassAverage() const;
private:
    std::string courseName; //课程名
};

#endif // GRADEBOOK_H
