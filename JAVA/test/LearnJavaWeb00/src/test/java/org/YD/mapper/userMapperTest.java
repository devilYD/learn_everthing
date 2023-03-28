package org.YD.mapper;

import org.apache.ibatis.io.Resources;
import org.apache.ibatis.session.SqlSession;
import org.apache.ibatis.session.SqlSessionFactory;
import org.apache.ibatis.session.SqlSessionFactoryBuilder;
import org.junit.Test;

import java.io.IOException;
import java.io.InputStream;

public class userMapperTest {
    @Test
    public void selectByNameTest() throws IOException {
        String resource = "mybatis-config.xml";
        InputStream inputStream = Resources.getResourceAsStream(resource);
        SqlSessionFactory sqlSessionFactory = new SqlSessionFactoryBuilder().build(inputStream);
        SqlSession sqlSession = sqlSessionFactory.openSession();
        userMapper usermapper =  sqlSession.getMapper(userMapper.class);

        System.out.println(usermapper.selectByName("admin"));

        sqlSession.close();
    }

    @Test
    public void selectByIdTest() throws IOException {
        String resource = "mybatis-config.xml";
        InputStream inputStream = Resources.getResourceAsStream(resource);
        SqlSessionFactory sqlSessionFactory = new SqlSessionFactoryBuilder().build(inputStream);
        SqlSession sqlSession = sqlSessionFactory.openSession();
        userMapper usermapper =  sqlSession.getMapper(userMapper.class);

        System.out.println(usermapper.selectById(1));

        sqlSession.close();
    }

    @Test
    public void selectAll() throws IOException {
        String resource = "mybatis-config.xml";
        InputStream inputStream = Resources.getResourceAsStream(resource);
        SqlSessionFactory sqlSessionFactory = new SqlSessionFactoryBuilder().build(inputStream);
        SqlSession sqlSession = sqlSessionFactory.openSession();
        userMapper usermapper =  sqlSession.getMapper(userMapper.class);

        System.out.println(usermapper.getAll());

        sqlSession.close();
    }


}
