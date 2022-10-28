// function login() {
// 	var xmlhttp;
// 	if (window.XMLHttpRequest)
// 	{
// 	    //  IE7+, Firefox, Chrome, Opera, Safari 浏览器执行代码
// 	    xmlhttp=new XMLHttpRequest();
// 	}
// 	else
// 	{
// 	    // IE6, IE5 浏览器执行代码
// 	    xmlhttp=new ActiveXObject("Microsoft.XMLHTTP");
// 	}
// 	xmlhttp.onreadystatechange=function()
// 	{
// 	    if (xmlhttp.readyState==4 && xmlhttp.status==200)//检测响应状态是否完成
// 	    {
// 	      if(xmlhttp.responseText == "false") {
// 			  document.getElementById("massage").style.visibility="visible";
// 		  } else {
// 			  document.getElementById("massage").innerText="登陆成功！";
// 			  document.getElementById("massage").style.color="green";
// 			  document.getElementById("massage").style.visibility="visible";
// 		  }
// 	    }
// 	}
// 	xmlhttp.open("POST","/LoginServlet",true);
// 	var username = document.getElementById("username").value;
// 	var password = document.getElementById("password").value;
// 	xmlhttp.setRequestHeader('Content-Type','application/x-www-form-urlencoded');
// 	xmlhttp.send("username="+username+"&password="+password);
// }
function login() {
	axios({
		url:"/LoginServlet",
		method: 'post',
		data:{
			id:0,
			username:document.getElementById("username").value,
			password:document.getElementById("password").value
		}
		// headers: {
		// 	'Content-Type': 'application/x-www-form-urlencoded'
		// },
		// params: {
		// 	username:document.getElementById("username").value,
		// 	password:document.getElementById("password").value
		// }
	}).then(function (response) {
		if(response.data===false) {
			document.getElementById("massage").style.visibility="visible";
		} else {
			document.getElementById("massage").innerText="登陆成功！";
			document.getElementById("massage").style.color="green";
			document.getElementById("massage").style.visibility="visible";
		}
	})
}