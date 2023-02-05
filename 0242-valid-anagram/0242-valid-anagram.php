<?php


    class Solution {

    /**
     * @param String $s
     * @param String $t
     * @return Boolean
     */
    function isAnagram($s, $t) {
    if (strlen($s) != strlen($t)) {
        return false;
    }

    $s_dict = [];
    for ($i = 0; $i < strlen($s); $i++) {
        if (isset($s_dict[$s[$i]])) {
            $s_dict[$s[$i]]++;
        } else {
            $s_dict[$s[$i]] = 1;
        }
    }

    for ($i = 0; $i < strlen($t); $i++) {
        if (!isset($s_dict[$t[$i]]) || $s_dict[$t[$i]] <= 0) {
            return false;
        }
        $s_dict[$t[$i]]--;
    }

    return true;
}

}


?>