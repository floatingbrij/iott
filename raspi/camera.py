from picamera import PICamera
camera = PICamera()
camera.rotation = 180

while(1):
    camera.start_preview()
    camera.capture('hllld.jpg')
    camera.stop_preview()
