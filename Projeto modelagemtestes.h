<h2>Calculadora simples</h2>
<input id="n1" type="number" placeholder="Digite um número">
<input id="n2" typer="number" placeholder="Digite outro número">
<button onclick="somar()"> Somar </button>
<button onclick="subtrai()"> Subtrai </button>
<button onclick="multiplicar()"> multiplicar</button>
<button onclick="dividir()"> Dividir</button>
<p id="resultado">  </p>
<p id="mensagem"> Clique aqui para mudar </p>
<button onclick="trocar()" ondblclick="voltar()"> Trocar de cor </button>

<script>
    function trocar(){
        document.body.style.backgroundColor =  "#34313cdf";
        document.body.style.color = "#c80707";
    }
    function voltar(){
        document.body.style.backgroundColor =  "#fdffff";
        document.body.style.color = "#000000";
    }

    document.getElementById("mensagem").onclick = function(){
        this.innerText = "Você clicou no texto e ele mudou!";
    }

    function somar(){
        let n1 = Number(document.getElementById("n1").value);
        let n2 = Number(document.getElementById("n2").value);
        let soma = n1 + n2;
        document.getElementById("resultado").innerText = "Resultado = " + soma;
    }
function subtrai(){
        let n1 = Number(document.getElementById("n1").value);
        let n2 = Number(document.getElementById("n2").value);
        let subtrair = n1 - n2;
        document.getElementById("resultado").innerText = "Resultado = " + subtrair;
    }
function multiplicar(){
        let n1 = Number(document.getElementById("n1").value);
        let n2 = Number(document.getElementById("n2").value);
        let multiplicar = n1 * n2;
        document.getElementById("resultado").innerText = "Resultado = " + multiplicar;
    }
    function dividir(){
        let n1 = Number(document.getElementById("n1").value);
        let n2 = Number(document.getElementById("n2").value);
        let dividir = n1 / n2;
        document.getElementById("resultado").innerText = "Resultado = " + dividir;
    }
</script>  

    
