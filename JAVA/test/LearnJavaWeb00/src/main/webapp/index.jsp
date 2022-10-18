
<%@ page language="java" isThreadSafe="true" pageEncoding="utf8" %>

<html>
<head>
	<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
    <title>
        主页
    </title>
	<link rel="stylesheet" type="text/css" href="css/index.css"/>
</head>
<body>
<div class="mainbox">
    <div class="log">
		<div class="logbook">
			<form action="/LoginServlet" method="post">
				<input name="username" type="text" class="usernamebox" placeholder="请输入账号"/>
				<input name="password" type="text" class="passwordbox" placeholder="请输入密码"/>
				<p id="massage" class="massage">账号密码错误，请检查</p>
				<input type="submit" value="登录" class="login">
				<input type="button" value="注册" class="logon"/>
			</form>
		</div>
    </div>
</div>
</body>
</html>
<script src="js/index.js"></script>