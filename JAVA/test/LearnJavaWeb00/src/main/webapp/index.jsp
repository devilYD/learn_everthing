
<%@ page language="java" isThreadSafe="true" pageEncoding="utf8" %>

<html>
<head>
	<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
    <title>
        主页
    </title>
	<link rel="stylesheet" type="text/css" href="css/index.css"/>
	<script src="js/index.js"></script>
</head>
<body>
<div class="mainbox">
    <div class="log">
		<div class="logbook">
			<form>
				<input id="username" type="text" class="usernamebox" placeholder="请输入账号"/>
				<input id="password" type="text" class="passwordbox" placeholder="请输入密码"/>
				<p id="massage" class="massage">账号密码错误，请检查</p>
				<input type="button" value="登录" class="login" onclick="login()">
				<input type="button" value="注册" class="logon"/>
			</form>
		</div>
    </div>
</div>
</body>
</html>
