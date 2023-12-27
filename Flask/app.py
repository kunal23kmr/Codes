from flask import Flask,redirect,url_for,template_rendered

app = Flask(__name__)

@app.route('/')
def fun():
    return "hello world."



@app.route('/a')
def fun2():
    return ("fun2")



if __name__ == '__main__':
    app.run(debug=True)


