<!DOCTYPE html>
<html lang="en">
	<head>
		<meta charset="UTF-8">
		<meta name="viewport" content="width="device-width, initial-scale=1.0">
		<title> Odd Even</title>
	<style>
		.out{
		text-align: center;
		background-color: #e5c0c0;
		border:4px solid brown;
		padding: 15px;
		margin:20px auto;
		margin-top:250px;
		width:400px;	
		}
	</style>
	</head>
	<body>
	<div class="out" >
	<?php
	{
	$number = $_POST['no'];
	if($number % 2 == 0) {
	echo $number." is even";
	} else {
	echo $number." is odd";
	}
	}
	?>
	</div>
	</body>
</html>