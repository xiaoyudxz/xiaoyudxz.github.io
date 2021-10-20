function check(){
      var name=document.getElementById("name").value;
   var pass=document.getElementById("pass").value;
   if(name=="admin" && pass=="syadmin666"){
   alert("登入成功");
   window.document.f.action="./web.html";
   window.document.f.submit();
   }else{
   alert("用户名或密码错误");
   
   }
   
   }