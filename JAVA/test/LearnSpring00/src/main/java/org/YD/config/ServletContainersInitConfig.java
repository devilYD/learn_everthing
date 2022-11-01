package org.YD.config;

import org.springframework.web.context.WebApplicationContext;
import org.springframework.web.context.support.AnnotationConfigWebApplicationContext;
import org.springframework.web.servlet.support.AbstractDispatcherServletInitializer;

//定义一个Servlet容器初始化设置类，在里面加载Spring配置
public class ServletContainersInitConfig extends AbstractDispatcherServletInitializer {
    //加载SpringMVC容器配置
    @Override
    protected WebApplicationContext createServletApplicationContext() {
        AnnotationConfigWebApplicationContext ctx = new AnnotationConfigWebApplicationContext();
        ctx.register(SpringMVCConfig.class);
        return ctx;
    }

    //设置哪些请求归求SpringMVC配置
    @Override
    protected String[] getServletMappings() {
        return new String[]{"/"};
    }

    //设置Spring容器
    @Override
    protected WebApplicationContext createRootApplicationContext() {
        return null;
    }
}
