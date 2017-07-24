<?php
    //加载配置文件
    include("moonmoon.conf");
    //加载全局函数库
    include(MM_PATH."/Common/functions.inc");
    //加载所有的父类
    include(MM_PATH."/MVC/Controller/CAfather.inc");
    //加载参数所代表的Controller
    $_controller = isset($_GET["controller"]) ? $_GET["controller"] : "";//加载controller参数
    $_action = isset($_GET["action"]) ? $_GET["action"] : "";//加载action参数

    if($_controller=="" || in_array($_controller, explode("," , MM_FORBIDDEN_TYPE ))) exit();//判断是否非法
    
    if (!file_exists(MM_PATH."/MVC/Controller/".$_controller.".inc")) echo("asdasd");
    require(MM_PATH."/MVC/Controller/".$_controller.".inc");
    

    //include();
    $controller = new $_controller();//生成实例
    if (method_exists($controller,$_action))
    {
        $controller->$_action();//执行实例方法
    };
    $controller->run();
    
?>