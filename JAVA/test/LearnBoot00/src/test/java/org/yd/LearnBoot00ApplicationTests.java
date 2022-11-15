package org.yd;

import org.junit.jupiter.api.Test;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.test.context.SpringBootTest;
import org.yd.dao.UserDao;

@SpringBootTest
class LearnBoot00ApplicationTests {
    @Autowired
    UserDao userDao;

    @Test
    void contextLoads() {
        System.out.println(userDao.getById(1));
    }

}
