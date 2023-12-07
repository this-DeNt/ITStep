const listItems = document.querySelectorAll('ul.border li');

    listItems.forEach(listItem => {
        listItem.style.border = '1px solid red';
    });