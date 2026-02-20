import express from "express";

const app = express();

app.use(express.json());

app.get("/", (req, res) =>  {
    res.send("server is running "    )
    console.log("hello");
})

app.listen(3000);