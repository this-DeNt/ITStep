let paragraph = document.querySelector("#first");

        paragraph.style.border = "2px solid red";

        let radioButtons = document.querySelectorAll('input[name="answer"]');
        radioButtons.forEach(button => {
            button.checked = !button.checked;
        });

        let listItems = document.querySelectorAll("li");
        listItems.forEach(item => {
            item.style.margin = "2px";
            item.style.border = "2px solid green";
        });

        let lists = document.querySelectorAll(".my-list");
        lists.forEach(list => {
            list.style.border = "2px solid blue";
        });