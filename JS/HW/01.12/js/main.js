// console.log("combining:", result);


        //2
        function common(arr1, arr2) 
        {
            //фильтр для нахождения элементов которые есть в 1 и 2 массиве, возвращает из 1 массива если есть такой же во 2
            //второй фильтр проверяет что бы в созданном массиве были все уникальные числа (сравнивает индексы элемента value с текущим index)
            return arr1.filter(element => arr2.includes(element)).filter((value, index, self) => self.indexOf(value) === index);
        }

        // const array1 = [8, 2, 6, 3, 5];
        // const array2 = [3, 4, 5, 8, 0];

        // const result = common(array1, array2);
        // console.log("common:", result);

        //3
        function different(arr1, arr2) 
        {
            //элементы которых НЕТ, которые НЕ ПОВТОРЯЮТСЯ
            return arr1.filter(element => !arr2.includes(element));
        }

        // const array1 = [8, 2, 6, 3, 5];
        // const array2 = [3, 4, 5, 8, 0];

        // const result = different(array1, array2);
        // console.log("different:", result);


        //ЗАДАНИЕ 3

        //1
        let fruits = ['tangerine', 'mango', 'peach', 'dragon fruit', 'papaya'];
        fruits.sort();

    
        function display() 
        {
            document.write('<ol>'); //хи, хардкодик
            fruits.forEach
            (
                function(fruit) 
                {
                    document.write(`<li>${fruit}</li>`);
                }
            );
            document.write('</ol>');
        }

        //2
        function find(fruitName) 
        {
            const findFruitName = fruitName.toLowerCase();
            return fruits.findIndex(fruit => fruit.toLowerCase() === findFruitName);
        }

        // display();

        // const searched = 'Watermelon';
        // const index = find(searched);

        // if (index !== -1) 
        // {
        //     document.write(`Frut "${searched}" find: ${index}`);
        // } else { document.write(`Frut "${searched}" error`); }


        //ДОПОЛНИТЕЛЬНОЕ
        //1
        const questions = 
        [
            "Do you love front end? (yes/no)",
            "Are you sure of your answer to the last question?) (Think well, maybe it’s still NO) (yes/no)",
            "Would you like to return to the HTML course? (yes/no)"
        ];

        const answers = [];


        function ask() 
        {
            questions.forEach
            (
                function(question) 
                {
                    let answer = prompt(question);
                    if (answer !== null) 
                    {
                        answer = answer.trim().toLowerCase();
                        if (answer === 'yes' || answer === 'no') 
                        {
                            answers.push(answer);
                        } else { alert("Answer yes/no!!!"); }
                    }
                }
            );
        }

        // ask();


        // if (answers.length === questions.length) 
        // {
        //     document.write("Result->");
        //     for (let i = 0; i < questions.length; i++) 
        //     {
        //         document.write(`question: ${questions[i]} - answers: ${answers[i]}</p>`);
        //     }
        // } 
        // else { document.write("Continue answer!!!"); }


        //2
        function FullName(fullName) 
        {
            //по идее можно было бы так : /[^A-Za-z .]/g;
            const invalidChars = '1234567890!@#$%^&*()_-+=/?><,[]{}\\|`~"\'';
            for (let i = 0; i < fullName.length; i++) 
            {
                //найден какой-то симфол перечисленный выше
                if (invalidChars.includes(fullName[i])) { return false; }
            }
            return true;
        }

        // const inputFullName = prompt("Enter your full name");
        // if (inputFullName !== null) 
        // {
        //     if (FullName(inputFullName)) 
        //     {
        //         document.write(`"${inputFullName}" - correct`);
        //     } else { document.write(`"${inputFullName}" - error`); }
        // } 
        // else { document.write("Cancel");}

        //3
        function URLsplit(url) 
        {
            const url_input = new URL(url);
            const protocol = url_input.protocol;
            const host = url_input.host;
            const path = url_input.pathname;
            const fileName = path.split('/').pop();
            const queryString = url_input.searchParams.toString();

            return 
            {
                protocol,
                host,
                path,
                fileName,
                queryString
            };
        }

        // const inputURL = prompt("Enter http-address");
        
        // if (inputURL !== null) 
        // {
        //     const urlParts = URLsplit(inputURL);
        //     document.write("URL split: ");
        //     document.write(`protocol: ${urlParts.protocol}`);
        //     document.write(`host: ${urlParts.host}`);
        //     document.write(`path: ${urlParts.path}`);
        //     document.write(`file Name: ${urlParts.fileName}`);
        //     document.write(`query String: ${urlParts.queryString}`);
        // } 
        // else { document.write("Cancel!"); }


