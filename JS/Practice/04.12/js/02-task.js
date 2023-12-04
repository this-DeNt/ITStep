// Refactor

function User(login, email) {

    this.login = login;
    this.email = email;

    this.showContactInfo = function() {

        console.log(`My Login: ${this.login}, My email: ${this.email}`);
    }
}

let user1 = new User("DeNt", "mrfraos");

user1.showContactInfo();