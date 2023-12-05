class Car 
{
    #image;
    #manufacturer;

    constructor(image, manufacturer) 
    {
        this.#image = image;
        this.#manufacturer = manufacturer;
    }

    get image() { return this.#image; }

    get manufacturer() { return this.#manufacturer; }

    get html() 
    {
        return `<img src="images/${this.#image}" /><br/>
        Производитель: ${this.#manufacturer}<br/>`;
    }
}

//данные с задания
//тут уже ничег оне поменялось
let car1 = new Car("audi-a6-250.jpg", "Audi");
let car2 = new Car("jaguar-x-type-250.jpg", "Jaguar");
let car3 = new Car("porsche-carrera-911-250.jpg", "Porsche");

let placeholder1 = document.querySelector("#placeholder1");
let placeholder2 = document.querySelector("#placeholder2");
let placeholder3 = document.querySelector("#placeholder3");

placeholder1.innerHTML = car1.html;
placeholder2.innerHTML = car2.html;
placeholder3.innerHTML = car3.html;