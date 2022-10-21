// document.getElementById("username").onclick = function () {
// 	var username = document.getElementById("username");
//
// 	}
// }
function login() {
	var xmlhttp;
	if (window.XMLHttpRequest)
	{
	    //  IE7+, Firefox, Chrome, Opera, Safari 浏览器执行代码
	    xmlhttp=new XMLHttpRequest();
	}
	else
	{
	    // IE6, IE5 浏览器执行代码
	    xmlhttp=new ActiveXObject("Microsoft.XMLHTTP");
	}
	xmlhttp.onreadystatechange=function()
	{
	    if (xmlhttp.readyState==4 && xmlhttp.status==200)//检测响应状态是否完成
	    {
	      if(xmlhttp.responseText == "false") {
			  document.getElementById("massage").style.visibility="visible";
		  } else {
			  document.getElementById("massage").innerText="登陆成功！";
			  document.getElementById("massage").style.color="green";
			  document.getElementById("massage").style.visibility="visible";
		  }
	    }
	}
	xmlhttp.open("POST","/LoginServlet",true);
	var username = document.getElementById("username").value;
	var password = document.getElementById("password").value;
	xmlhttp.setRequestHeader("username",username);
	xmlhttp.setRequestHeader("password",password);
	xmlhttp.send();
}
