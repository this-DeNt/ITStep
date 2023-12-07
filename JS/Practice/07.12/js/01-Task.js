const borderedParagraphs = document.querySelectorAll('p.border');

    borderedParagraphs.forEach(paragraph => {
        paragraph.style.border = '1px solid red'; 
    });