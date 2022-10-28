package org.YD.pojo;

import org.YD.config.SpringConfig;
import org.YD.mapper.UserMapper;
import org.junit.Test;
import org.springframework.context.ApplicationContext;
import org.springframework.context.annotation.AnnotationConfigApplicationContext;

public class UserTest {

    @Test
    public void MapperTest() {
        ApplicationContext ctx = new AnnotationConfigApplicationContext(SpringConfig.class);

        System.out.println(ctx.getBean("userMapper",UserMapper.class).selectAll());
    }
}
