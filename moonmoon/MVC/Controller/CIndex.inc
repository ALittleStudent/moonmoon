<?php
    class CIndex extends CAfather 
    {
        public function showindex()
        {
            $this->setView("index");
            $this->setVar("title","Moon Moon!");
        }
    }
    

?>