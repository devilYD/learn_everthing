package org.YD.web;

import com.alibaba.fastjson.JSON;
import org.YD.mapper.userMapper;
import org.YD.pojo.Users;
import org.YD.utils.MyBatisUtils;
import org.apache.ibatis.session.SqlSession;

import javax.servlet.ServletException;
import javax.servlet.http.*;
import javax.servlet.annotation.*;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.List;


@WebServlet("/LoginServlet")
public class LoginServlet extends HttpServlet {
    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response) throws IOException, ServletException {
//        request.setCharacterEncoding("UTF-8");
//        response.setContentType("text/html;charset=utf-8");
//        SqlSession sqlSession = MyBatisUtils.getSqlSession();
//
//        userMapper usermapper = sqlSession.getMapper(userMapper.class);
//
//        BufferedReader reader = request.getReader();
//        String json = reader.readLine();
//
//        Users user = JSON.parseObject(json, Users.class);
//
////        String username = user.getUsername();
////        String password = user.getPassword();
////        System.out.println(username+password);
//
//        List<Users> log = usermapper.login(user);
//        PrintWriter writer = response.getWriter();
//
//        if (log.isEmpty()) {
//            writer.write("false");
//        } else {
//            writer.write("登录成功");
//        }
//        sqlSession.close();
    }

    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response) throws IOException, ServletException {
        this.doGet(request, response);
    }
}
