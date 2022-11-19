package org.yd.domain;

import lombok.Data;
import org.springframework.stereotype.Repository;

@Data
@Repository
public class User {
    private Integer id;
    private String username;
    private String password;
}
