from flask import Flask, request
app = Flask(__name__)
t= []

@app.route('/')
def index():
    return 'hello'

@app.route('/get-temp')
def datain():
    if request.method == 'GET':
        if 'temperature' in request.args:
            temp = request.args.get('temperature')
            print(temp)
            t.append(temp)
        else:
            temp = 'nope'
        return temp
        
    else:
        return 'wrong'

@app.route('/get')
def data():
    return f"<h>{str(t)}</h>"

if __name__ == '__main__':
    app.run(debug=True,host='0.0.0.0',port='8000')
