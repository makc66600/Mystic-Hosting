document.addEventListener('DOMContentLoaded', () => {
    // Плавная прокрутка к якорям (например, при клике на пункты меню)
    document.querySelectorAll('a[href^="#"]').forEach(anchor => {
        anchor.addEventListener('click', function (e) {
            e.preventDefault();
            document.querySelector(this.getAttribute('href')).scrollIntoView({
                behavior: 'smooth'
            });
        });
    });

    // Можно добавить интерактивность для кнопок, отправку формы обратной связи (требует серверной части)
    // Пример: обработка клика по кнопке "Создать Сервер"
    const createServerButton = document.querySelector('.btn-primary[style*="margin-top: 20px"] + button'); // Пример поиска кнопки
    if (createServerButton) {
        createServerButton.addEventListener('click', () => {
            // Перенаправление на страницу тарифов или показ модального окна
            window.location.href = 'tarifs.html'; 
        });
    }

    // Здесь также можно добавить AJAX-запросы для отправки формы, получения данных и т.д.
    // Но для этого потребуется серверная часть (например, на Python/Flask на Replit)
});
