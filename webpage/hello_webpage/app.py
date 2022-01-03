from flask import Flask, render_template, request

app = Flask(__name__)

@app.route("/")
def index():
    return render_template("index.html")


# @app.route("/greet")
# def greet():
#     name = request.args.get("name", "world").capitalize()
#     if name == "":
#         name = "World"
#     return render_template("greet.html", name=name)


@app.route("/greet", methods=["POST"])
def greet():
    name = request.args.get("name", "world").capitalize()
    return render_template("greet.html", name=name)