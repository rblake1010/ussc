<? include("admob.php"); ?>

<!DOCTYPE html PUBLIC "-//WAPFORUM//DTD XHTML Mobile 1.0//EN" "http://www.wapforum.org/DTD/xhtml-mobile10.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
 	<meta http-equiv="Cache-Control" content="no-cache" />
	<meta http-equiv="Content-Type" content="text/html;charset=ISO-8859-1" />
	<link href="style.css" rel="stylesheet" type="text/css" />
  	<title>YourSite</title>
</head>
<body>
<div class="container">
	<div class="navItem1">0. <a href="index.php" accesskey="0">Home</a></div>
</div>

<div>
<img src="logo.gif" alt="Company" width="166" height="51" />
</div>

<div class="container">
	<div class="navItem2"><? echo admob_request($admob_params); ?></div>
</div>
<div class="container">
	<div class="navItem1"><b>About</b></div>
</div>
<div class="container">
	<div class="text">
Our company was founded in 1985 by John Doe.	
	</div>
</div>


<div class="container">
	<div class="navItem1"> 
<? echo admob_request($admob_params); ?>
	</div>
</div>



<p>&copy; YourSite</p>
<p><a href="http://scripter.mobi">Mobile Web Template downloaded for free at Scripter.mobi</a></p>
</body>
</html>