import json, requests, serial, time

serial = serial.Serial(port='/dev/ttyS1', baudrate=9600)

while True:
    bitcoinPrices = requests.request("GET", "https://api.bitfinex.com/v1/pubticker/btcusd")
    serial.write(json.loads(bitcoinPrices.text)['last_price'].encode())

    time.sleep(100)
