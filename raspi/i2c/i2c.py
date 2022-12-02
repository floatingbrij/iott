from smbus import SMBus
addr = 0x8
bus = SMBus(1)
while(1):
    int a = input(">>>>")
    if(a=='1'):
        bus.write_byte(addr,0x1)
    else:
        bus.write_byte(addr,0x0)
