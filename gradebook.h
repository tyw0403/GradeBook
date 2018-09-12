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
    void determineClassAverage() const;  //求用户输入的数据的平均值
    void inputGrades();  //输入成绩
    void displayGradeReport() const;  //显示成绩单
    int maximum( int, int, int ) const;
private:
    std::string courseName; //课程名
    unsigned int aCount;
    unsigned int bCount;
    unsigned int cCount;
    unsigned int dCount;
    unsigned int eCount;
    int maximumGrade;
};

#endif // GRADEBOOK_H
