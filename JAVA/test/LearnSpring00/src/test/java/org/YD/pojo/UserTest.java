package org.YD.pojo;

import org.YD.config.SpringConfig;
import org.YD.mapper.UserMapper;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.test.context.ContextConfiguration;
import org.springframework.test.context.junit4.SpringJUnit4ClassRunner;

@RunWith(SpringJUnit4ClassRunner.class)
@ContextConfiguration(classes = SpringConfig.class)
public class UserTest {

    @Autowired
    private UserMapper userMapper;

    @Autowired
    private User user;

    @Test
    public void MapperTest() {
        System.out.println(userMapper.selectAll());
    }

    @Test
    public void AOPTest() {
        user.setId(0);
        user.setUsername("wc");
        user.setPassword("123");
    }
}
