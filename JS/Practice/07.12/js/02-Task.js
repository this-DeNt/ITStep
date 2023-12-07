function getRandomColor(){
        const letters = '0123456789ABCDEF';
        let color = '#';
        for (let i = 0; i < 6; i++) { color += letters[Math.floor(Math.random() * 16)]; }
        return color;
    }

    const paragraphs = document.querySelectorAll('p');

    paragraphs.forEach(paragraph => {
        const randomColor = getRandomColor();
        paragraph.style.border = `2px solid ${randomColor}`;
    });