#tarifs-preview h2 {
    font-size: 2.5em;
    margin-bottom: 20px;
}

.tarifs-preview-grid {
    display: grid;
    grid-template-columns: repeat(auto-fit, minmax(250px, 1fr));
    gap: 30px;
    justify-content: center;
}

.tarif-preview-item {
    background-color: var(--dark-gray);
    padding: 30px;
    border-radius: 8px;
    border: 1px solid var(--medium-gray);
    transition: transform 0.3s ease, box-shadow 0.3s ease;
}

.tarif-preview-item:hover {
    transform: translateY(-5px);
    box-shadow: 0 5px 15px rgba(0, 0, 0, 0.3);
}

.tarif-preview-item h3 {
    font-size: 1.6em;
    color: var(--accent-color);
    margin-bottom: 15px;
}

.tarif-preview-item .price {
    font-size: 2em;
    font-weight: bold;
    color: var(--accent-color);
    margin-bottom: 25px;
}

.tarif-preview-item ul {
    list-style: none;
    padding: 0;
    text-align: left;
    margin-bottom: 30px;
}

.tarif-preview-item ul li {
    margin-bottom: 10px;
    display: flex;
    align-items: center;
}

.tarif-preview-item ul li i {
    color: var(--primary-color);
    margin-right: 10px;
}

/* FAQ Preview */
.faq-item {
    background-color: var(--dark-gray);
    padding: 20px;
    border-radius: 8px;
    margin-bottom: 20px;
    text-align: left;
    border: 1px solid var(--medium-gray);
}

.faq-item h4 {
    color: var(--accent-color);
    font-size: 1.3em;
    margin-bottom: 10px;
    display: flex;
    align-items: center;
}

.faq-item h4 i {
    margin-right: 10px;
}

/* Footer */
footer {
    background-color: var(--dark-gray);
    padding: 30px 0;
    text-align: center;
    margin-top: 60px;
    border-top: 2px solid var(--primary-color);
}

.footer-links {
    margin-top: 15px;
}

.footer-links a {
    color: var(--light-gray);
    text-decoration: none;
    margin: 0 10px;
    transition: color 0.3s ease;
}

.footer-links a:hover {
    color: var(--primary-color);
}
