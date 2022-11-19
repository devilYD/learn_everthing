package org.yd.domain;

import com.baomidou.mybatisplus.annotation.TableField;
import lombok.Data;
import org.springframework.stereotype.Repository;

@Data
@Repository
public class User {
    private Integer id;
    private String username;
    @TableField(select = false)
    private String password;
}
