package org.YD.utils;

import org.apache.ibatis.io.Resources;
import org.apache.ibatis.session.SqlSession;
import org.apache.ibatis.session.SqlSessionFactory;
import org.apache.ibatis.session.SqlSessionFactoryBuilder;

import java.io.IOException;
import java.io.InputStream;

// SqlSession sqlsession = MyBatisUtils.getSqlSession();
// sqlsession.close();

public class MyBatisUtils {
    private static SqlSessionFactory factory=null;
    static {
        String resource = "mybatis-config.xml";
        try {
            InputStream inputStream = Resources.getResourceAsStream(resource);
            factory = new SqlSessionFactoryBuilder().build(inputStream);
        } catch (IOException e) {
            throw new RuntimeException(e);
        }
    }
    public static SqlSession getSqlSession() {
        SqlSession sqlSession=null;
        if(factory!=null) {
            sqlSession=factory.openSession();//非自动提交事务
        }
        return sqlSession;
    }
}
