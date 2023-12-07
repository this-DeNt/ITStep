const ulElements = document.querySelectorAll('ul');

    ulElements.forEach(ul => {
        const firstLi = ul.querySelector('li:first-child');
        const lastLi = ul.querySelector('li:last-child');

        //проверочки
        if (firstLi !== null) { firstLi.style.border = '1px solid red'; }
        if (lastLi !== null) { lastLi.style.border = '1px solid red'; }
    });