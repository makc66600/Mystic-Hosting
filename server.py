from flask import Flask, render_template, request, redirect, url_for
import os

app = Flask(__name__, static_folder='public', template_folder='public')
app.config['SECRET_KEY'] = os.environ.get('SECRET_KEY', 'your_default_secret_key') # Для безопасности

@app.route('/')
def index():
    return render_template('index.html')

@app.route('/tarifs.html')
def tarifs():
    return render_template('tarifs.html')

@app.route('/contact.html')
def contact():
    return render_template('contact.html')

# Пример обработки POST запроса с формы обратной связи
@app.route('/submit_contact', methods=['POST'])
def submit_contact():
    if request.method == 'POST':
        name = request.form['name']
        email = request.form['email']
        message = request.form['message']

        # Здесь вы можете добавить логику:
        # - Отправить email администратору
        # - Сохранить в базу данных
        # - Ответить пользователю
        print(f"Получено сообщение от {name} ({email}): {message}")

        return redirect(url_for('index')) # Перенаправить на главную
    return redirect(url_for('contact')) # Если не POST, то на страницу контакта

if __name__ == '__main__':
    app.run(host='0.0.0.0', port=8080) # Port 8080 или 5000, как настроено на Replit
