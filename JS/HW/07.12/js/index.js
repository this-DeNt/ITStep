class ExtendedDate extends Date {

    constructor() {

        super();
    }
    dateOutput() {

        document.write(this.toDateString());
    }
}

const extDateTest = new ExtendedDate();
extDateTest.dateOutput();