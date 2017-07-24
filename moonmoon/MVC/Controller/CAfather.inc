<?php
    abstract class CAfather 
    {
        //Controller类的父类

        var $_view = "index";
        var $_vars = array();//变量储存数组
        public function setView($view)
        {
            $this->_view=$view;
        }

        public function getView()
        {
            return MM_PATH.'/MVC/View/'.MM_VIEW_PATH."/".$this->_view.MM_VIEW_EXT;
        }

        public function run()
        {
            //解包变量
            extract($this->_vars);
            //加载模板
            include(MM_PATH.'/MVC/View/'.MM_VIEW_PATH."/".MM_VIEW_HEADER.MM_VIEW_EXT);//加载头部
            include($this->getView());//加载身体模板
            include(MM_PATH.'/MVC/View/'.MM_VIEW_PATH."/".MM_VIEW_FOOTER.MM_VIEW_EXT);//加载尾部
        }

        /*
        **@parm String $varName 
        **@parm Object $varValue
        **@return
        */
        public function setVar($varName, $varValue)
        {
            $this->_vars[$varName] = $varValue;
        }
    }
    
?>