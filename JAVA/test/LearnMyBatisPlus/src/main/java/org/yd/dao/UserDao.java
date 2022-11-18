package org.yd.dao;

import com.baomidou.mybatisplus.core.mapper.BaseMapper;
import org.apache.ibatis.annotations.Mapper;
import org.yd.domain.User;

@Mapper
public interface UserDao extends BaseMapper<User> {
}
