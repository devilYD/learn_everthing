package org.YD.service;

import org.YD.config.SpringConfig;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.test.context.ContextConfiguration;
import org.springframework.test.context.junit4.SpringJUnit4ClassRunner;

@RunWith(SpringJUnit4ClassRunner.class)
@ContextConfiguration(classes = SpringConfig.class)
public class UserServiceTest {

    @Autowired
    private UserService userService;

    @Test
    public void testGetAll() {
        System.out.println(userService.getAll());
    }

    @Test
    public void testGetById() {
        System.out.println(userService.getById(1));
    }
}
