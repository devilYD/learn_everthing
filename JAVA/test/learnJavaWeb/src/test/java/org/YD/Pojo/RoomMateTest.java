package org.YD.Pojo;

import org.YD.mapper.RoomMapper;
import org.apache.ibatis.io.Resources;
import org.apache.ibatis.session.SqlSession;
import org.apache.ibatis.session.SqlSessionFactory;
import org.apache.ibatis.session.SqlSessionFactoryBuilder;
import org.junit.jupiter.api.Test;

import java.io.IOException;
import java.io.InputStream;
import java.util.List;

class RoomMateTest {
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
    public void MybatisDemo() throws IOException {
        String resource = "mybatis-config.xml";
        InputStream inputStream = Resources.getResourceAsStream(resource);
        SqlSessionFactory sqlSessionFactory = new SqlSessionFactoryBuilder().build(inputStream);

        SqlSession sqlSession = sqlSessionFactory.openSession();

        RoomMapper mapper = sqlSession.getMapper(RoomMapper.class);

        List<roomMate> roomMates = mapper.selectRoomMate();

        System.out.println(roomMates);

        sqlSession.close();
    }

    @Test
    public void mapperDemo() throws IOException {
        String resource = "mybatis-config.xml";
        InputStream inputStream = Resources.getResourceAsStream(resource);
        SqlSessionFactory sqlSessionFactory = new SqlSessionFactoryBuilder().build(inputStream);
        SqlSession sqlSession = sqlSessionFactory.openSession();

        RoomMapper roomMapper = sqlSession.getMapper(RoomMapper.class);


        System.out.println(roomMapper.selectRoomMate());
        System.out.println(roomMapper.selectByName(""));

    }

    @Test
    public void selectAllDemo() throws IOException {
        String resource = "mybatis-config.xml";
        InputStream inputStream = Resources.getResourceAsStream(resource);
        SqlSessionFactory sqlSessionFactory = new SqlSessionFactoryBuilder().build(inputStream);
        SqlSession sqlSession = sqlSessionFactory.openSession();

        RoomMapper mapper = sqlSession.getMapper(RoomMapper.class);

        System.out.println(mapper.selectAll());

    }

    @Test
    public void where(){
        System.out.println(System.getProperty("user.dir"));
    }
}