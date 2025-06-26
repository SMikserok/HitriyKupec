<!DOCTYPE html>
<html lang="ru">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Хитрый Купец - Игра-задача</title>
    <style>
        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            line-height: 1.6;
            color: #333;
            max-width: 800px;
            margin: 0 auto;
            padding: 20px;
            background-color: #f9f9f9;
        }
        .header {
            background-color: #2c3e50;
            color: white;
            padding: 20px;
            border-radius: 8px;
            text-align: center;
            margin-bottom: 30px;
            box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1);
        }
        h1 {
            margin: 0;
            font-size: 2.2em;
        }
        h2 {
            color: #2c3e50;
            border-bottom: 2px solid #3498db;
            padding-bottom: 5px;
            margin-top: 30px;
        }
        .author {
            font-style: italic;
            margin-top: 5px;
            color: #bdc3c7;
        }
        .scenario {
            background-color: #e8f4fc;
            padding: 15px;
            border-left: 4px solid #3498db;
            border-radius: 4px;
            margin: 20px 0;
        }
        .rules {
            background-color: #fff;
            border-radius: 8px;
            padding: 15px;
            box-shadow: 0 2px 4px rgba(0, 0, 0, 0.05);
            margin: 20px 0;
        }
        .rules ul {
            padding-left: 20px;
        }
        .rules li {
            margin-bottom: 8px;
        }
        .solution {
            background-color: #f0f7f0;
            padding: 15px;
            border-left: 4px solid #27ae60;
            border-radius: 4px;
            margin: 20px 0;
        }
        .github-link {
            display: inline-block;
            background-color: #24292e;
            color: white;
            padding: 10px 15px;
            border-radius: 5px;
            text-decoration: none;
            margin-top: 20px;
            font-weight: bold;
            transition: background-color 0.3s;
        }
        .github-link:hover {
            background-color: #0366d6;
        }
        .tech {
            background-color: #f5f5f5;
            padding: 15px;
            border-radius: 8px;
            margin: 20px 0;
        }
        .tech strong {
            color: #2c3e50;
        }
    </style>
</head>
<body>
    <div class="header">
        <h1>Хитрый Купец</h1>
        <div class="author">Разработал: Мышев Сергей ИКНТ-ИТ-12-2024</div>
    </div>

    <div class="scenario">
        <h2>Сценарий задачи</h2>
        <p>Два купца отправились торговать за море. Каждый из них повез по <strong>N</strong> одинаковых тюков с товаром. В пути корабль попал в шторм и дал течь. Чтобы корабль не затонул, капитан приказал поднять весь груз на палубу корабля, расставить его вдоль бортов по периметру и выбросить за борт половину груза.</p>
    </div>

    <div class="rules">
        <h2>Правила выбрасывания груза</h2>
        <ul>
            <li>Каждый тюк получает порядковый номер, начиная с тюка, стоящего на носу корабля</li>
            <li>Нумерация осуществляется по часовой стрелке</li>
            <li>Номер первого выброшенного тюка соответствует текущему числу месяца <strong>M</strong></li>
            <li>Через <strong>K</strong> тюков следующий тюк с товаром выбрасывается</li>
            <li>Один из купцов узнал про это правило</li>
        </ul>
    </div>

    <div class="solution">
        <h2>Задача</h2>
        <p>Как необходимо расставить груз купцу, чтобы ни один из его тюков не был выброшен?</p>
        <p>Программа должна определить оптимальные позиции для размещения тюков купца, используя алгоритм, аналогичный задаче Иосифа Флавия.</p>
    </div>

    <div class="tech">
        <h2>Техническая реализация</h2>
        <p><strong>Структура данных:</strong> Циклический однонаправленный список</p>
        <p><strong>Алгоритм:</strong> Основан на задаче Иосифа Флавия с параметрами:</p>
        <ul>
            <li>Количество тюков: <strong>N</strong></li>
            <li>Начальный номер: <strong>M</strong> (число месяца)</li>
            <li>Шаг: <strong>K</strong></li>
            <li>Количество удалений: половина от общего числа тюков</li>
        </ul>
    </div>

    <a href="https://github.com/SMikserok/HitriyKupec" class="github-link">Перейти к репозиторию на GitHub</a>
</body>
</html>
