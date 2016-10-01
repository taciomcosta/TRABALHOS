

<?php

    function testeOnclick() {
        $email = $_GET['email'];
    ?>
        <script type="text/javascript">
            alert('<?php echo "$email" ?>');
        </script>

    <?php
    }

    if(isset($_GET['id']) == 1)
    {
        testeOnclick();
    }

?>