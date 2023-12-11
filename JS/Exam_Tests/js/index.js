function addElement() {

    var newVid = document.createElement("div");
    newVid.className = "test-div";

    const container = document.querySelector("#container");
    container.appendChild(newVid);
}

const testBtn = document.querySelector("button");
testBtn.addEventListener("click", function(){

    var newVid = document.createElement("div");
    newVid.className = "test-div";

    const container = document.querySelector("#container");
    container.appendChild(newVid);
});