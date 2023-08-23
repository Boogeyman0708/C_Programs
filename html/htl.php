<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Hotel</title>
</head>
<body>
    <h1>Hotel Booking</h1>
    <form action="" method="post">
            <label for="name">Name of the Customer: </label>
            <input type="text" name="name" placeholder="Enter your name"> <br>
            <label for="room">Choose Your Room: </label>
            <select name="room">
                <option value="luxury">Luxury Room: 3000/day</option>
                <option value="Superior">Superior: 2500/day</option>
                <option value="Classic">Classic: 2000/day</option>
            </select> <br>
            <label for="stay">Number of days to stay: </label>
            <input type="number" name="stay" id="stay"> <br>
            <input type="submit" value="Submit">
    </form>
    <?php
        if(isset($_POST['name'])){
            $name = $_POST['name'];
            $room = $_POST['room'];
            $stay = $_POST['stay'];
            $total = 0;
            if($room == "luxury"){
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

</html>