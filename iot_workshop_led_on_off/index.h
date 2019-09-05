const char MAIN_page[] PROGMEM = R"======(
<!DOCTYPE html>
<html>
<head>
<title>Control LED</title>
</head>
<meta charset="utf-8">
<meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0/css/bootstrap.min.css" integrity="sha384-Gn5384xqQ1aoWXA+058RXPxPg6fy4IWvTNh0E263XmFcJlSAwiGgFAW/dAiS6JXm" crossorigin="anonymous">
<body>
  <h1>Control LED By Pressing bellow Button<h1>
  <a href="ledOn"><input type="button" class="btn btn-primary" value="TURN ON LED"></a>
  <a href="ledOff"><input type="button" class="btn btn-danger" value="TURN OFF LED"></a>
</body>
</html>

)======";
