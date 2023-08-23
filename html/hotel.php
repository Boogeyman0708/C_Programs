<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Hotel</title>
</head>
<body>
    <?php
        if(isset($_POST['name'])){
            $name = $_POST['name'];
            $room = $_POST['room'];
            $stay = $_POST['stay'];
            $total = 0;
            if($room == "Luxury"){
                $total = $stay * 3000;
            }
            else if($room == "Superior"){
                $total = $stay * 2500;
            }
            else{
                $total = $stay * 2000;
            }
            echo "Name: $name <br>Room: $room <br>Stay: $stay <br>Total: $total";
        }
        ?>
</body>