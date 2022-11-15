package org.yd.dao;

import org.apache.ibatis.annotations.Mapper;
import org.apache.ibatis.annotations.Select;
import org.yd.domain.User;

@Mapper
public interface UserDao {
    @Select("SELECT * FROM user WHERE id = #{id}")
    User getById(Integer id);
}
