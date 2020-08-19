
#ifndef UT_TITLEBAR_TEST_H
#define UT_TITLEBAR_TEST_H

#include "../common/ut_defines.h"
#include "termproperties.h"
#include <gtest/gtest.h>

class MainWindow;
class UT_TitleBar_Test : public ::testing::Test
{
public:
    UT_TitleBar_Test();

public:
    //这里的几个函数都会自动调用

    //用于做一些初始化操作
    virtual void SetUp();

    //用于做一些清理操作
    virtual void TearDown();

public:
    //普通窗口
    MainWindow *m_normalWindow = nullptr;

    TermProperties m_normalTermProperty;
};

#endif // UT_TITLEBAR_TEST_H

