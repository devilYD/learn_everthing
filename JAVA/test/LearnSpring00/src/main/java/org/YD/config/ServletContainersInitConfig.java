package org.YD.config;

import org.springframework.web.filter.CharacterEncodingFilter;
import org.springframework.web.servlet.support.AbstractAnnotationConfigDispatcherServletInitializer;

import javax.servlet.Filter;


//定义一个Servlet容器初始化设置类，在里面加载Spring配置
public class ServletContainersInitConfig extends AbstractAnnotationConfigDispatcherServletInitializer {

    @Override
    protected Class<?>[] getRootConfigClasses() {
        return new Class[]{SpringConfig.class};
    }

    @Override
    protected Class<?>[] getServletConfigClasses() {
        return new Class[]{SpringMVCConfig.class};
    }

    @Override
    protected String[] getServletMappings() {
        return new String[]{"/"};
    }

    @Override
    protected Filter[] getServletFilters() {
        CharacterEncodingFilter filter = new CharacterEncodingFilter();
        filter.setEncoding("utf-8");
        return new Filter[]{filter};
    }
}

//使用AbstractDispatcherServletInitializer的继承类进行配置
//public class ServletContainersInitConfig extends AbstractDispatcherServletInitializer {
//    //加载SpringMVC容器配置
//    @Override
//    protected WebApplicationContext createServletApplicationContext() {
//        AnnotationConfigWebApplicationContext ctx = new AnnotationConfigWebApplicationContext();
//        ctx.register(SpringMVCConfig.class);
//        return ctx;
//    }
//
//    //设置哪些请求归求SpringMVC配置
//    @Override
//    protected String[] getServletMappings() {
//        return new String[]{"/"};
//    }
//
//    //设置Spring容器
//    @Override
//    protected WebApplicationContext createRootApplicationContext() {
//        AnnotationConfigWebApplicationContext ctx = new AnnotationConfigWebApplicationContext();
//        ctx.register(SpringConfig.class);
//        return ctx;
//    }
//}
