package org.YD.mapper;

import org.YD.pojo.User;
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

        System.out.println(usermapper.selectByName("devilyudun"));
    }

    @Test
    public void selectByIdTest() throws IOException {
        String resource = "mybatis-config.xml";
        InputStream inputStream = Resources.getResourceAsStream(resource);
        SqlSessionFactory sqlSessionFactory = new SqlSessionFactoryBuilder().build(inputStream);
        SqlSession sqlSession = sqlSessionFactory.openSession();
        userMapper usermapper =  sqlSession.getMapper(userMapper.class);

        System.out.println(usermapper.selectById(1));
    }

    @Test
    public void LoginTest() throws IOException {
        String resource = "mybatis-config.xml";
        InputStream inputStream = Resources.getResourceAsStream(resource);
        SqlSessionFactory sqlSessionFactory = new SqlSessionFactoryBuilder().build(inputStream);
        SqlSession sqlSession = sqlSessionFactory.openSession();
        userMapper usermapper =  sqlSession.getMapper(userMapper.class);

        User user = new User();
        user.setUsername("devilyudun");
        user.setPassword("123456");

        System.out.println(usermapper.login(user));
    }

    @Test
    public void LogonTest() throws IOException {
        String resource = "mybatis-config.xml";
        InputStream inputStream = Resources.getResourceAsStream(resource);
        SqlSessionFactory sqlSessionFactory = new SqlSessionFactoryBuilder().build(inputStream);
        SqlSession sqlSession = sqlSessionFactory.openSession();
        userMapper usermapper =  sqlSession.getMapper(userMapper.class);

        User user = new User(0,"devilyudun","123456");

        usermapper.logon(user);
        System.out.println(usermapper.login(user));

        sqlSession.commit();
        sqlSession.close();
    }

    @Test
    public void LogoutTest() throws IOException {
        String resource = "mybatis-config.xml";
        InputStream inputStream = Resources.getResourceAsStream(resource);
        SqlSessionFactory sqlSessionFactory = new SqlSessionFactoryBuilder().build(inputStream);
        SqlSession sqlSession = sqlSessionFactory.openSession();
        userMapper usermapper =  sqlSession.getMapper(userMapper.class);

        User user = new User(0,"devilyudun","123456");

        usermapper.logout(user);

        sqlSession.commit();
        sqlSession.close();
    }
}
