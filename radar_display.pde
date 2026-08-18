import processing.serial.*;

Serial port;

String data = "";
int angle = 0;
int distance = 0;

void setup() {
  size(800, 500);
  port = new Serial(this, Serial.list()[0], 9600);
  port.bufferUntil('\n');
}

void draw() {

  background(0);

  translate(width/2, height);

  stroke(0,255,0);
  noFill();

  arc(0,0,700,700,PI,TWO_PI);
  arc(0,0,500,500,PI,TWO_PI);
  arc(0,0,300,300,PI,TWO_PI);

  // Radar line
  strokeWeight(2);
  line(0,0,
       350*cos(radians(angle)),
      -350*sin(radians(angle)));

  // Object point
  if(distance < 200){
    fill(255,0,0);
    noStroke();

    float r = map(distance,0,200,0,350);

    ellipse(r*cos(radians(angle)),
           -r*sin(radians(angle)),
            12,12);
  }

  fill(0,255,0);
  textSize(18);
  text("Angle : " + angle, -380,-20);
  text("Distance : " + distance + " cm", -380,5);
}

void serialEvent(Serial port){

  data = trim(port.readStringUntil('\n'));

  if(data != null){

    String values[] = split(data, ',');

    if(values.length == 2){

      angle = int(values[0]);
      distance = int(values[1]);

    }
  }
}