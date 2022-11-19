package org.yd;

import com.baomidou.mybatisplus.core.conditions.Wrapper;
import com.baomidou.mybatisplus.core.conditions.query.LambdaQueryWrapper;
import com.baomidou.mybatisplus.core.conditions.query.QueryWrapper;
import org.junit.jupiter.api.Test;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.test.context.SpringBootTest;
import org.yd.dao.UserDao;
import org.yd.domain.User;

@SpringBootTest
class LearnMyBatisPlusApplicationTests {

    @Autowired
    private UserDao userDao;

    @Test
    void contextLoads() {
        QueryWrapper<User> wp = new QueryWrapper<>();
        System.out.println(userDao.selectMaps(wp));
    }

}
