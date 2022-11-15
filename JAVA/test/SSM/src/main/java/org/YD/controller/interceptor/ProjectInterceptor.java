package org.YD.controller.interceptor;

import org.springframework.stereotype.Component;
import org.springframework.web.servlet.HandlerInterceptor;
import org.springframework.web.servlet.ModelAndView;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@Component
public class ProjectInterceptor implements HandlerInterceptor {

    /**
     * 处理器执行之前调用
     * @param request  HttpServletRequest对象，可以获取请求参数等等
     * @param response HttpServletResponse对象
     * @param handler  拦截器的Controller对象
     * @return 如果返回false，就会中断处理流程，不会处理后续的拦截器和Controller。如果返回true，则会执行后续的拦截器和处理器
     */
    @Override
    public boolean preHandle(HttpServletRequest request, HttpServletResponse response, Object handler) throws Exception {
        return HandlerInterceptor.super.preHandle(request, response, handler);
    }

    /**
     * 处理器执行之后调用,跳转到指定视图之前调用
     * @param request  HttpServletRequest对象
     * @param response HttpServletResponse对象
     * @param handler  拦截器的Controller对象
     * @param modelAndView  ModelAndView对象，其中存放的是处理结果和视图的信息
     */
    @Override
    public void postHandle(HttpServletRequest request, HttpServletResponse response, Object handler, ModelAndView modelAndView) throws Exception {
        HandlerInterceptor.super.postHandle(request, response, handler, modelAndView);
    }

    /**
     * 请求处理完成之后调用
     */
    @Override
    public void afterCompletion(HttpServletRequest request, HttpServletResponse response, Object handler, Exception ex) throws Exception {
        HandlerInterceptor.super.afterCompletion(request, response, handler, ex);
    }
}
