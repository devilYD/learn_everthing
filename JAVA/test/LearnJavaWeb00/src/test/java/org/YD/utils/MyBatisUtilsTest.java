package org.YD.utils;

import org.YD.mapper.userMapper;
import org.apache.ibatis.session.SqlSession;
import org.junit.Test;

public class MyBatisUtilsTest {
    @Test
    public void MyBatisUtilsDemo() {
        SqlSession sqlsession = MyBatisUtils.getSqlSession();
        userMapper usermapper = sqlsession.getMapper(userMapper.class);

        System.out.println(usermapper.selectById(1));
        sqlsession.close();
    }
}
