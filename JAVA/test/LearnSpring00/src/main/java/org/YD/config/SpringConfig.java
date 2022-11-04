package org.YD.config;

import org.springframework.context.annotation.*;
import org.springframework.stereotype.Controller;
import org.springframework.transaction.annotation.EnableTransactionManagement;
import org.springframework.web.servlet.config.annotation.EnableWebMvc;

@Configuration
@ComponentScan(value = "org.YD",
        excludeFilters = @ComponentScan.Filter(
                type = FilterType.ANNOTATION,
                classes = Controller.class
        )
)
@EnableWebMvc
@EnableAspectJAutoProxy
@EnableTransactionManagement
@PropertySource("classpath:druid.properties")
@Import({DruidConfig.class,MyBatisConfig.class})
public class SpringConfig {
}
