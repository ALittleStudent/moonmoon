<?php
    //重定向至404界面
    function quit()
    {
        return MM_PATH.'/MVC/View/'.MM_VIEW_PATH."/404.php";
    }

    //重定向方法
    function redirect(string $view)
    {

    }

?>