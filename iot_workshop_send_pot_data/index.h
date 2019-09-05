const char MAIN_page[] PROGMEM = R"======(
<!DOCTYPE html>
<html>
<head>
  <title>IOT WORKSHOP</title>
  <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0/css/bootstrap.min.css" integrity="sha384-Gn5384xqQ1aoWXA+058RXPxPg6fy4IWvTNh0E263XmFcJlSAwiGgFAW/dAiS6JXm" crossorigin="anonymous">
</head>
<body>
    <h1>This is Sensor data</h1>
    <div class="jumbotron">
  Pot Sensor Value is : <span id="ADCValue">0</span><br>
  </div>
</body>
</html>
<script>

setInterval(function() {  getData();
}, 1000);

function getData() {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("ADCValue").innerHTML =
      this.responseText;
    }
  };
  xhttp.open("GET", "readADC", true);
  xhttp.send();
}
</script>
)======";
