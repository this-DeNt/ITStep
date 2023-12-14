function MyBtn() {

    return(

        <button>My button</button>
    );
}

export default function MyApp() {

    return(

        <div>
            <h1>Hello</h1>
            <MyBtn />
        </div>
    );
}

const root = ReactDOM.createRoot(document.getElementById("root"));
root.render(MyApp());