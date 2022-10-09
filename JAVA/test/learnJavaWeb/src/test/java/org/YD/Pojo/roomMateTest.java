package org.YD.Pojo;

import org.apache.ibatis.io.Resources;
import org.apache.ibatis.session.SqlSession;
import org.apache.ibatis.session.SqlSessionFactory;
import org.apache.ibatis.session.SqlSessionFactoryBuilder;
import org.junit.jupiter.api.Test;

import java.io.InputStream;
import java.util.List;

class roomMateTest {
    @Test
    public void InsertDemo() throws Exception {
        roomMate rm = new roomMate(0,"王创",21);
        rm.Insert();
    }

    @Test
    public void DeleteDemo() throws Exception {
        roomMate rm = new roomMate(0,"王创",21);
        int howMuch = rm.Delete();
        System.out.println("您杀死了" + howMuch + "个室友，恭喜您！");
    }

    @Test
    public void MybatisDemo() throws  Exception {
        String resource = "mybatis-config.xml";
        InputStream inputStream = Resources.getResourceAsStream(resource);
        SqlSessionFactory sqlSessionFactory = new SqlSessionFactoryBuilder().build(inputStream);

        SqlSession sqlSession = sqlSessionFactory.openSession();

        List<roomMate> roomMates = sqlSession.selectList("org.YD.Pojo.selectRoomMate");

        System.out.println(roomMates);

        sqlSession.close();
    }

    @Test
    public void where() throws Exception{
        System.out.println(System.getProperty("user.dir"));
    }
}